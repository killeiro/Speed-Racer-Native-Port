[CmdletBinding()]
param(
    [string]$Tools = 'C:/msys64/mingw64/bin',
    [string]$Python = '',
    [ValidateRange(1, 32)]
    [int]$Jobs = 4,
    [string]$Wgpu = '',
    [string]$HardwareGSDll = '',
    [string]$BuildDir = '',
    [switch]$ConfigureOnly,
    [switch]$NoTests
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest

function Resolve-InputPath {
    param([string]$Value, [string]$Description)
    if (-not (Test-Path -LiteralPath $Value)) {
        throw "$Description not found: $Value"
    }
    # CMake cache/compiler files parse backslashes as escape sequences.
    return (Resolve-Path -LiteralPath $Value).ProviderPath.Replace('\', '/')
}

function Invoke-BuildTool {
    param([string]$Program, [string[]]$Arguments)
    Write-Host ('> ' + $Program + ' ' + ($Arguments -join ' '))
    & $Program @Arguments
    if ($LASTEXITCODE -ne 0) {
        throw "Build command failed with exit code ${LASTEXITCODE}: $Program"
    }
}

$sourceRoot = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot '..')).ProviderPath.Replace('\', '/')
$toolchain = Resolve-InputPath $Tools 'MinGW toolchain directory'
foreach ($name in @('cmake.exe', 'ninja.exe', 'clang++.exe', 'ctest.exe', 'windres.exe', 'ar.exe', 'ranlib.exe')) {
    if (-not (Test-Path -LiteralPath (Join-Path $toolchain $name) -PathType Leaf)) {
        throw "Missing toolchain executable: $(Join-Path $toolchain $name)"
    }
}
if (-not $Python) {
    $pythonCommand = Get-Command python, python3 -CommandType Application -ErrorAction SilentlyContinue |
        Select-Object -First 1
    if (-not $pythonCommand) {
        throw 'Python was not found on PATH. Pass -Python with the full path to python.exe.'
    }
    $Python = $pythonCommand.Source
}
$pythonExe = Resolve-InputPath $Python 'Python executable'
if (-not $Wgpu) { $Wgpu = Join-Path $sourceRoot 'third_party/wgpu-native' }
$wgpuDir = Resolve-InputPath $Wgpu 'wgpu-native directory (run scripts/fetch_build_deps.py first)'
foreach ($relative in @('lib/libwgpu_native.a', 'include/webgpu/webgpu.h', 'include/webgpu/wgpu.h')) {
    if (-not (Test-Path -LiteralPath (Join-Path $wgpuDir $relative) -PathType Leaf)) {
        throw "Missing wgpu-native input: $relative. See docs/BUILDING.md."
    }
}
$sdlDir = Resolve-InputPath (Join-Path $toolchain '../lib/cmake/SDL2') 'MinGW SDL2 CMake package'
$generatedDir = Resolve-InputPath (Join-Path $sourceRoot 'generated/speedracer') 'Speed Racer generated source directory'
$localBlocksDir = Resolve-InputPath (Join-Path $sourceRoot 'native/vu-local/blocks') 'Native VU local blocks'
$localTest = Resolve-InputPath (Join-Path $sourceRoot 'native/vu-local/tests/local_blocks_differential.cpp') 'Native VU differential test'
foreach ($relative in @('table.cpp', 'units.hpp', 'vu1_table.cpp', 'extra/vu_extra.cpp', 'extra/.vu-extra-manifest.json', 'extra/vu_cont_table.cpp', 'extra/.vu-cont-manifest.json')) {
    if (-not (Test-Path -LiteralPath (Join-Path $generatedDir $relative) -PathType Leaf)) {
        throw "Missing generated input: $relative. Use the complete source snapshot."
    }
}
if (-not (Test-Path -LiteralPath (Join-Path $localBlocksDir 'vu_local_blocks.cpp') -PathType Leaf)) {
    throw 'The accepted native VU block source is missing.'
}
if (-not $BuildDir) { $BuildDir = Join-Path $sourceRoot 'build/native' }
if (-not [System.IO.Path]::IsPathRooted($BuildDir)) {
    $BuildDir = Join-Path (Get-Location).ProviderPath $BuildDir
}
$buildPath = [System.IO.Path]::GetFullPath($BuildDir).Replace('\', '/')
if ($buildPath.TrimEnd('\', '/') -eq $sourceRoot.TrimEnd('\', '/')) {
    throw 'Use a separate build directory; the source root is not a supported BuildDir.'
}

$testOption = if ($NoTests) { 'OFF' } else { 'ON' }
$configure = @(
    '-S', $sourceRoot, '-B', $buildPath, '-G', 'Ninja',
    '-DCMAKE_BUILD_TYPE=Release',
    "-DCMAKE_CXX_COMPILER=$toolchain/clang++.exe",
    "-DCMAKE_MAKE_PROGRAM=$toolchain/ninja.exe",
    "-DCMAKE_AR=$toolchain/ar.exe",
    "-DCMAKE_RANLIB=$toolchain/ranlib.exe",
    "-DCMAKE_RC_COMPILER=$toolchain/windres.exe",
    "-DPS2_GENERATED=$generatedDir",
    "-DPS2_WGPU_DIR=$wgpuDir",
    '-DPS2_BUILD_SPEEDRACER=ON',
    '-DPS2_BUILD_SPEEDRACER_HARDWARE=ON',
    '-DPS2_BUILD_SPEEDRACER_PORTABLE=ON',
    "-DPS2_BUILD_TESTS=$testOption",
    '-DPS2_VU_AVX2=ON',
    '-DPS2_VU_REPLAY_CAPTURE=OFF',
    '-DPS2_VU_CONTINUATION_OVERLAY=',
    "-DPS2_VU_LOCAL_BLOCKS=$localBlocksDir",
    "-DPS2_VU_LOCAL_TEST_SOURCE=$localTest",
    '-DPS2_SPEEDRACER_DEV_ROOT=',
    '-DPS2_SPEEDRACER_DISC_HINT=',
    "-DSDL2_DIR=$sdlDir",
    "-DPython3_EXECUTABLE=$pythonExe"
)
if ($HardwareGSDll) {
    $gsDll = Resolve-InputPath $HardwareGSDll 'Hardware GS DLL'
    $configure += "-DPS2_HW_GS_TEST_DLL=$gsDll"
}

# Child builds/tests must not inherit a private gameplay diagnostic setup.
# Restore the caller's environment even when configure, build or tests fail.
$savedPath = $env:PATH
$savedOverrides = @{}
Get-ChildItem Env: | Where-Object { $_.Name -match '^(PS2_|SRGS_|KZGS_)' } | ForEach-Object {
    $savedOverrides[$_.Name] = $_.Value
}
try {
    $env:PATH = $toolchain + ';' + $savedPath
    foreach ($name in $savedOverrides.Keys) { Remove-Item -LiteralPath ('Env:' + $name) }
    Invoke-BuildTool (Join-Path $toolchain 'cmake.exe') $configure
    if ($ConfigureOnly) {
        Write-Host "Configuration complete: $buildPath"
        return
    }
    # Build all targets so every registered CTest executable exists.
    Invoke-BuildTool (Join-Path $toolchain 'cmake.exe') @('--build', $buildPath, '--parallel', "$Jobs")
    if (-not $NoTests) {
        Invoke-BuildTool (Join-Path $toolchain 'ctest.exe') @('--test-dir', $buildPath, '--output-on-failure', '--parallel', '1')
    }
    Write-Host "Hardware launcher: $(Join-Path $buildPath 'experimental-hardware/SpeedRacer.exe')"
    Write-Host 'See docs/BUILDING.md before staging runtime DLLs and integrated game data.'
}
finally {
    $env:PATH = $savedPath
    foreach ($name in $savedOverrides.Keys) {
        Set-Item -LiteralPath ('Env:' + $name) -Value $savedOverrides[$name]
    }
}
