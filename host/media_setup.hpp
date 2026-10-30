// SPDX-License-Identifier: MIT
#pragma once
#include <filesystem>
#include <string>
namespace speedracer {
bool prepare_interactively(const std::filesystem::path& beside);
void show_startup_error(const std::string& text);
}
