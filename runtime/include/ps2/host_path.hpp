// SPDX-License-Identifier: MIT
#pragma once
#include <cerrno>
#include <cstdio>
#include <exception>
#include <filesystem>
#include <string>
#include <string_view>

namespace ps2::host_path {
// Host-facing path strings are UTF-8. Guest disc filenames are handled by the
// emulated filesystem and do not pass through this conversion.
inline std::filesystem::path from_utf8(std::string_view text) {
    return std::filesystem::u8path(text.begin(), text.end());
}
inline std::string to_utf8(const std::filesystem::path& path) {
    const auto text=path.u8string();
    return {reinterpret_cast<const char*>(text.data()),text.size()};
}
inline std::FILE* open(const char* path,const char* mode) {
#ifdef _WIN32
    try {
        const auto native=from_utf8(path);
        const std::wstring wide_mode(mode,mode+std::char_traits<char>::length(mode));
        return _wfopen(native.c_str(),wide_mode.c_str());
    } catch(const std::exception&) {
        errno=EINVAL;
        return nullptr;
    }
#else
    return std::fopen(path,mode);
#endif
}
}
