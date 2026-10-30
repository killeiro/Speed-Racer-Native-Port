# SPDX-License-Identifier: GPL-3.0-or-later
"""Compatibility adapter for the locked PCSX2/kzgs Windows sources.

Only build/ABI compatibility and explicit Speed Racer GS settings are changed.
The GS rendering algorithms are retained. Original files are saved for audit.
"""
from pathlib import Path
import re
def prepare(work_area):
    W=Path(work_area);K=W/'upstream/kzgs';P=W/'upstream/pcsx2';deps=W/'dependencies'
    # MinGW uses Windows aligned allocation and intrinsics too. Keep paired alloc/free
    # selection together; defining _MSC_VER globally would select an incompatible ABI.
    for relative in ['common/HeapArray.h','common/AlignedMalloc.h','common/BitUtils.h']:
        path=P/relative; backup=W/'originals'/relative
        backup.parent.mkdir(parents=True,exist_ok=True)
        if not backup.exists():backup.write_bytes(path.read_bytes())
        original=backup.read_text()
        path.write_text(original.replace('defined(_MSC_VER)','defined(_WIN32)').replace('#ifdef _MSC_VER','#ifdef _WIN32'))
    def patch_source(relative, transform):
        path=P/relative;backup=W/'originals'/relative;backup.parent.mkdir(parents=True,exist_ok=True)
        if not backup.exists():backup.write_bytes(path.read_bytes())
        path.write_text(transform(backup.read_text()))
    patch_source('common/Pcsx2Defs.h',lambda s:s.replace(
        '#define __forceinline __attribute__((always_inline, unused))',
        '#define __forceinline inline __attribute__((always_inline, unused))').replace(
        '#define __forceinline_odr __forceinline inline','#define __forceinline_odr __forceinline'))
    patch_source('pcsx2/GS/Renderers/DX11/GSTexture11.cpp',lambda s:s.replace(
        'const CD3D11_BOX sbox(src.left, src.top, 0, src.right, src.bottom, 1);',
        'const D3D11_BOX sbox{UINT(src.left), UINT(src.top), 0, UINT(src.right), UINT(src.bottom), 1};'))
    patch_source('pcsx2/GS/Renderers/DX12/D3D12DescriptorHeapManager.cpp',lambda s:s.replace(
        'm_heap_base_cpu = m_descriptor_heap->GetCPUDescriptorHandleForHeapStart();',
        'm_descriptor_heap->GetCPUDescriptorHandleForHeapStart(&m_heap_base_cpu);').replace(
        'm_heap_base_gpu = m_descriptor_heap->GetGPUDescriptorHandleForHeapStart();',
        'm_descriptor_heap->GetGPUDescriptorHandleForHeapStart(&m_heap_base_gpu);'))
    patch_source('pcsx2/GS/Renderers/DX12/GSTexture12.cpp',lambda s:s.replace(
        'const D3D12_RESOURCE_DESC desc = resource->GetDesc();',
        'D3D12_RESOURCE_DESC desc; resource->GetDesc(&desc);').replace(
        'const D3D12_RESOURCE_ALLOCATION_INFO allocInfo = dev->GetDevice()->GetResourceAllocationInfo(0, 1, &desc.desc);',
        'D3D12_RESOURCE_ALLOCATION_INFO allocInfo; dev->GetDevice()->GetResourceAllocationInfo(&allocInfo, 0, 1, &desc.desc);'))
    patch_source('pcsx2/GS/Renderers/DX12/GSDevice12.cpp',lambda s:s.replace(
        'sdkVersion = config->GetDesc().SDKVersion;',
        'D3D12_DEVICE_CONFIGURATION_DESC desc; config->GetDesc(&desc); sdkVersion = desc.SDKVersion;').replace(
        'const LUID luid(m_device->GetAdapterLuid());',
        'LUID luid; m_device->GetAdapterLuid(&luid);'))
    # The pinned shim has Killzone-specific defaults. Speed Racer must not inherit
    # that game's identity, scaling hacks or texture replacement namespace.
    for rel, replacements in {
     'include/kzgs.h':[('int halfPixelOffset = 4;', 'int autoFlush = -1;\n\tint halfPixelOffset = 4;')],
     'src/kzgs.cpp':[('o.PCRTCAntiBlur = cfg.pcrtcAntiBlur;', 'o.PCRTCAntiBlur = cfg.pcrtcAntiBlur;\n\t\to.PCRTCOverscan = true; // Preserve Speed Racer active DISPLAY and bottom HUD.'),('o.DisableVertexShaderExpand = !cfg.vertexShaderExpand;',
                      'if (cfg.autoFlush >= 0) o.UserHacks_AutoFlush = static_cast<GSHWAutoFlushLevel>(std::clamp(cfg.autoFlush,0,2));\n\t\to.DisableVertexShaderExpand = !cfg.vertexShaderExpand;')],
     'shim/EmuShims.cpp':[('return "SCUS-97402";', 'return "SLUS-21812";'),('return "Killzone";', 'return "Speed Racer";')]
    }.items():
        path=K/rel; original=W/'originals/kzgs'/rel;original.parent.mkdir(parents=True,exist_ok=True)
        if not original.exists():original.write_bytes(path.read_bytes())
        source=original.read_text()
        for before,after in replacements:
            assert source.count(before)==1,(rel,before)
            source=source.replace(before,after)
        if path.read_text()!=source:path.write_text(source)
    project=W/'mingw';project.mkdir(exist_ok=True)
    # Keep upstream CMake unchanged; source compatibility patches are saved above.
    cmake=(K/'CMakeLists.txt').read_text()
    cmake=re.sub(r'project\(kzgs C CXX ASM_MASM\).*?set\(KZGS_ROOT "\$\{CMAKE_CURRENT_SOURCE_DIR\}"\)',
                 'project(kzgs C CXX ASM)\nset(KZGS_ROOT "'+K.as_posix()+'")',cmake,flags=re.S)
    cmake=cmake.replace('"${CMAKE_CURRENT_SOURCE_DIR}/../pcsx2"','"'+P.as_posix()+'"')
    cmake=cmake.replace('"${CMAKE_CURRENT_SOURCE_DIR}/deps/deps"','"'+(deps/'deps').as_posix()+'"')
    cmake=re.sub(r'target_compile_options\(kzgs_flags INTERFACE.*?target_include_directories\(kzgs_flags',
                 'target_compile_options(kzgs_flags INTERFACE -mavx2 -mfma -fms-extensions -Wno-ignored-attributes)\ntarget_include_directories(kzgs_flags',cmake,flags=re.S)
    cmake=cmake.replace('"$<$<COMPILE_LANGUAGE:CXX>:/FI${KZGS_IMGUI_RENAME_H}>"','"$<$<COMPILE_LANGUAGE:CXX>:-include${KZGS_IMGUI_RENAME_H}>"')
    cmake=cmake.replace('$<$<COMPILE_LANGUAGE:C,CXX>:/W0>','-w')
    cmake=cmake.replace('${P2}/common/FastJmp.asm','${CMAKE_CURRENT_SOURCE_DIR}/FastJmp.S')
    cmake=cmake.replace('${P3}/cpuinfo/src/x86/windows/init.c','${CMAKE_CURRENT_SOURCE_DIR}/cpuinfo_windows.c')
    (project/'cpuinfo_windows.c').write_text('#define max(a,b) ((a)>(b)?(a):(b))\n#include "'+(P/'3rdparty/cpuinfo/src/x86/windows/init.c').as_posix()+'"\n')
    cmake+='\ntarget_compile_options(kzgs_flags INTERFACE "$<$<COMPILE_LANGUAGE:CXX>:-includecstring>")\n'
    cmake+='\ntarget_link_libraries(kzgs INTERFACE mincore version)\ntarget_sources(kzgs PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/compat_uuids.cpp")\n'
    (project/'compat_uuids.cpp').write_text('''#include <directx/d3d12.h>
    template<> const GUID& __mingw_uuidof<ID3D12PipelineState>() { return IID_ID3D12PipelineState; }
    template<> const GUID& __mingw_uuidof<ID3D12DescriptorHeap>() { return IID_ID3D12DescriptorHeap; }
    ''')
    cmake=re.sub(r'target_link_libraries\(kzgs INTERFACE.*?set\(KZGS_RUNTIME_DLLS',
    '''target_link_libraries(kzgs INTERFACE
        "${DEPS}/lib/zstd.lib" "${DEPS}/lib/libpng16.lib" "${DEPS}/lib/libwebp.lib"
        "${DEPS}/lib/jpeg.lib" "${DEPS}/lib/dxcompiler.lib" "${DEPS}/lib/DirectX-Guids.lib"
        d3d11 d3d12 dxgi d3dcompiler dxguid winmm pathcch shlwapi dwmapi powrprof)
    set(KZGS_RUNTIME_DLLS''',cmake,flags=re.S)
    cmake=cmake.replace('"${DEPS}/lib/DirectX-Guids.lib"','')
    (project/'CMakeLists.txt').write_text(cmake)
    lines=['# Converted from PCSX2 common/FastJmp.asm; SPDX-License-Identifier: GPL-3.0+',
           '.intel_syntax noprefix','.text']
    for original in (P/'common/FastJmp.asm').read_text().splitlines():
        line=original.partition(';')[0].strip()
        if not line or line.startswith(('_TEXT','END')):continue
        if line.startswith('PUBLIC '):lines.append('.globl '+line.split()[1]);continue
        if line.endswith(' PROC'):lines.append(line.split()[0]+':');continue
        if line.endswith(' ENDP'):continue
        lines.append(line)
    (project/'FastJmp.S').write_text('\n'.join(lines)+'\n')
    return project
