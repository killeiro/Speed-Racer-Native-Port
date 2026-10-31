[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)][string]$Tools,
    [Parameter(Mandatory = $true)][string]$Python,
    [string]$BuildDir = '',
    [ValidateRange(1, 8)][int]$Jobs = 2
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
$sourceRoot = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot '..')).ProviderPath
$toolchain = (Resolve-Path -LiteralPath $Tools).ProviderPath
$pythonExe = (Resolve-Path -LiteralPath $Python).ProviderPath
if (-not $BuildDir) { $BuildDir = Join-Path $sourceRoot 'build/ci-native' }
$buildPath = [System.IO.Path]::GetFullPath($BuildDir)
$reports = Join-Path $sourceRoot 'build/ci-reports'
New-Item -ItemType Directory -Path $reports -Force | Out-Null
$savedPath = $env:PATH
$savedOverrides = @{}
Get-ChildItem Env: | Where-Object { $_.Name -match '^(PS2_|SRGS_|KZGS_)' } | ForEach-Object {
    $savedOverrides[$_.Name] = $_.Value
}
$receipt = [ordered]@{
    schema = 1
    source_commit = $env:GITHUB_SHA
    status = 'in-progress'
    phase = 'setup'
    jobs = $Jobs
    scope = 'All port targets compiled; explicit no-GPU CTest tier only. No game execution.'
    hardware_gs_built = $false
    physical_devices_tested = $false
    bit_identical_release_claimed = $false
    versions = @{}
    configuration = @{}
    inputs = @{}
    outputs = @{}
}

function Invoke-Logged {
    param([string]$Program, [string[]]$Arguments, [string]$Log)
    & $Program @Arguments 2>&1 | Tee-Object -FilePath (Join-Path $reports $Log)
    if ($LASTEXITCODE -ne 0) { throw "Command failed ($LASTEXITCODE): $Program" }
}

try {
    $env:PATH = $toolchain + ';' + $savedPath
    foreach ($name in $savedOverrides.Keys) { Remove-Item -LiteralPath ('Env:' + $name) }
    foreach ($tool in @('clang++', 'cmake', 'ninja', 'ctest')) {
        $receipt.versions[$tool] = (& (Join-Path $toolchain ($tool + '.exe')) --version | Out-String).Trim()
        if ($LASTEXITCODE -ne 0) { throw "Cannot query $tool version" }
    }
    $receipt.versions['python'] = (& $pythonExe --version | Out-String).Trim()
    $pacman = [System.IO.Path]::GetFullPath((Join-Path $toolchain '../../usr/bin/pacman.exe'))
    if (Test-Path -LiteralPath $pacman) {
        $receipt.versions['msys2_packages'] = @(& $pacman -Q)
        if ($LASTEXITCODE -ne 0) { throw 'Cannot record MSYS2 packages' }
    }
    foreach ($name in @('source-manifest.json', 'dependencies.lock.json',
                        'third_party/wgpu-native/lib/libwgpu_native.a',
                        'third_party/wgpu-native/include/webgpu/webgpu.h',
                        'third_party/wgpu-native/include/webgpu/wgpu.h')) {
        $receipt.inputs[$name] = (Get-FileHash -LiteralPath (Join-Path $sourceRoot $name) -Algorithm SHA256).Hash.ToLowerInvariant()
    }
    $receipt.phase = 'configure'
    Invoke-Logged $pythonExe @((Join-Path $sourceRoot 'scripts/verify_source.py')) 'source-integrity.log'
    # Configure with the existing public recipe, without running its all-GPU CTest tier.
    & (Join-Path $sourceRoot 'scripts/build_windows.ps1') -Tools $toolchain -Python $pythonExe -BuildDir $buildPath -Jobs $Jobs -ConfigureOnly *>&1 |
        Tee-Object -FilePath (Join-Path $reports 'configure.log')
    $options = @('CMAKE_BUILD_TYPE', 'CMAKE_CXX_COMPILER', 'PS2_BUILD_TESTS',
        'PS2_BUILD_SPEEDRACER', 'PS2_BUILD_SPEEDRACER_HARDWARE', 'PS2_BUILD_SPEEDRACER_PORTABLE',
        'PS2_VU_AVX2', 'PS2_VU_REPLAY_CAPTURE', 'PS2_VU_CONTINUATION_OVERLAY',
        'PS2_SPEEDRACER_DEV_ROOT', 'PS2_SPEEDRACER_DISC_HINT', 'PS2_HW_GS_TEST_DLL')
    foreach ($line in Get-Content -LiteralPath (Join-Path $buildPath 'CMakeCache.txt')) {
        if ($line -match '^([^#/:][^:]*):[^=]*=(.*)$' -and $options -contains $Matches[1]) {
            $receipt.configuration[$Matches[1]] = $Matches[2]
        }
    }
    $receipt.phase = 'build'
    Invoke-Logged (Join-Path $toolchain 'cmake.exe') @('--build', $buildPath, '--parallel', "$Jobs") 'build.log'
    $receipt.phase = 'cpu-tests'
    Invoke-Logged $pythonExe @((Join-Path $sourceRoot 'scripts/ci_checks.py'), '--ctest',
        (Join-Path $toolchain 'ctest.exe'), '--build-dir', $buildPath, '--report',
        (Join-Path $reports 'cpu-tests.json'), '--run-cpu') 'test-driver.log'
    foreach ($name in @('experimental-hardware/SpeedRacer.exe', 'SpeedRacer.exe', 'ps2run.exe')) {
        $artifact = Join-Path $buildPath $name
        if (Test-Path -LiteralPath $artifact -PathType Leaf) {
            $receipt.outputs[$name] = (Get-FileHash -LiteralPath $artifact -Algorithm SHA256).Hash.ToLowerInvariant()
        }
    }
    $receipt.phase = 'complete'
    $receipt.status = 'passed'
}
catch {
    $receipt.status = 'failed'
    throw
}
finally {
    $receipt | ConvertTo-Json -Depth 8 | Set-Content -LiteralPath (Join-Path $reports 'build-receipt.json') -Encoding UTF8
    $env:PATH = $savedPath
    foreach ($name in $savedOverrides.Keys) { Set-Item -LiteralPath ('Env:' + $name) -Value $savedOverrides[$name] }
}
