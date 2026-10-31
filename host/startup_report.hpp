// SPDX-License-Identifier: MIT
#pragma once
#include <filesystem>
namespace speedracer {
// Local report only: no account/device IDs, network calls or automatic upload.
void verify_graphics_runtime(const std::filesystem::path& beside);
std::filesystem::path write_startup_report(const std::filesystem::path& beside,bool avx2);
}
