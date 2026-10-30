// SPDX-License-Identifier: MIT
#pragma once
#include <windows.h>
#include <shellapi.h>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace speedracer {
// Keep filenames and arbitrary argument text intact even when the Windows
// system ANSI code page cannot represent the user's directory or ISO name.
class WindowsArguments {
    std::vector<std::string> text_;
    std::vector<char*> pointers_;
public:
    WindowsArguments() {
        int count=0;
        std::unique_ptr<wchar_t*,decltype(&LocalFree)> raw(
            CommandLineToArgvW(GetCommandLineW(),&count),&LocalFree);
        if(!raw || count<1)throw std::runtime_error("Cannot read Windows command line.");
        text_.reserve(count);
        for(int i=0;i<count;++i) {
            const int size=WideCharToMultiByte(CP_UTF8,WC_ERR_INVALID_CHARS,
                raw.get()[i],-1,nullptr,0,nullptr,nullptr);
            if(size<1)throw std::runtime_error("Invalid Unicode command-line argument.");
            std::string value(size,'\0');
            if(WideCharToMultiByte(CP_UTF8,WC_ERR_INVALID_CHARS,raw.get()[i],-1,
                value.data(),size,nullptr,nullptr)!=size)
                throw std::runtime_error("Cannot convert Windows command line.");
            value.resize(size-1);text_.push_back(std::move(value));
        }
        pointers_.reserve(text_.size()+1);
        for(auto& value:text_)pointers_.push_back(value.data());
        pointers_.push_back(nullptr);
    }
    int count() const {return static_cast<int>(text_.size());}
    char** data() {return pointers_.data();}
};
}
