// SPDX-License-Identifier: MIT
#include "media_setup.hpp"
#include "media_import.hpp"
#include "resource.h"
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <commctrl.h>
#include <commdlg.h>
#include <atomic>
#include <exception>
#include <thread>
#include <vector>

namespace speedracer {
namespace {
std::wstring wide_text(const std::string& text) {
    unsigned page=CP_UTF8;
    int count=MultiByteToWideChar(page,MB_ERR_INVALID_CHARS,text.c_str(),-1,nullptr,0);
    if(!count){page=CP_ACP;count=MultiByteToWideChar(page,0,text.c_str(),-1,nullptr,0);}
    if(!count)return L"Não foi possível iniciar o jogo.";
    std::wstring out(count,L'\0');
    MultiByteToWideChar(page,0,text.c_str(),-1,out.data(),count);out.resize(count-1);return out;
}
struct ImportDialog {
    std::filesystem::path source,destination;
    std::atomic_bool cancel{false},done{false};
    std::atomic<unsigned> percent{0};
    std::atomic<media::Phase> phase{media::Phase::inspect};
    std::thread worker;
    std::exception_ptr error;
    bool cancelled=false;
};
INT_PTR CALLBACK import_proc(HWND dialog,UINT message,WPARAM wparam,LPARAM lparam) {
    auto* state=reinterpret_cast<ImportDialog*>(GetWindowLongPtrW(dialog,DWLP_USER));
    if(message==WM_INITDIALOG) {
        state=reinterpret_cast<ImportDialog*>(lparam);
        SetWindowLongPtrW(dialog,DWLP_USER,reinterpret_cast<LONG_PTR>(state));
        const auto icon=LoadIconW(GetModuleHandleW(nullptr),MAKEINTRESOURCEW(IDI_SPEEDRACER));
        SendMessageW(dialog,WM_SETICON,ICON_BIG,reinterpret_cast<LPARAM>(icon));
        SendMessageW(dialog,WM_SETICON,ICON_SMALL,reinterpret_cast<LPARAM>(icon));
        SendDlgItemMessageW(dialog,IDC_IMPORT_PROGRESS,PBM_SETRANGE32,0,100);
        // Worker owns all file I/O. Only this UI thread touches dialog controls.
        try {
            state->worker=std::thread([state] {
                try {media::prepare(state->source,state->destination,[state](media::Phase phase,unsigned percent){
                    state->phase.store(phase);state->percent.store(percent);
                },&state->cancel);}
                catch(const media::Cancelled&){state->cancelled=true;}
                catch(...){state->error=std::current_exception();}
                state->done.store(true,std::memory_order_release);
            });
        } catch(...) {state->error=std::current_exception();EndDialog(dialog,IDCANCEL);return TRUE;}
        if(!SetTimer(dialog,1,100,nullptr)) {
            state->cancel.store(true);
            state->worker.join();
            if(!state->error)state->error=std::make_exception_ptr(std::runtime_error("Não foi possível atualizar o progresso da preparação."));
            EndDialog(dialog,IDCANCEL);return TRUE;
        }
        return TRUE;
    }
    if(!state)return FALSE;
    if(message==WM_TIMER) {
        if(state->done.load(std::memory_order_acquire)) {
            KillTimer(dialog,1);EndDialog(dialog,state->cancelled||state->error?IDCANCEL:IDOK);return TRUE;
        }
        if(!state->cancel.load()) {
            const wchar_t* label=L"Verificando a edição do jogo…";
            switch(state->phase.load()) {
            case media::Phase::copy:label=L"Copiando sua ISO…";break;
            case media::Phase::verify_copy:label=L"Verificando a cópia…";break;
            case media::Phase::verify_source:label=L"Conferindo a ISO original…";break;
            case media::Phase::publish:label=L"Concluindo a preparação…";break;
            case media::Phase::complete:label=L"Preparação concluída.";break;
            default:break;
            }
            const auto text=std::wstring(label)+L"  "+std::to_wstring(state->percent.load())+L"%";
            SetDlgItemTextW(dialog,IDC_IMPORT_STATUS,text.c_str());
            SendDlgItemMessageW(dialog,IDC_IMPORT_PROGRESS,PBM_SETPOS,state->percent.load(),0);
        }
        return TRUE;
    }
    if(message==WM_CLOSE||(message==WM_COMMAND&&LOWORD(wparam)==IDCANCEL)) {
        state->cancel.store(true);EnableWindow(GetDlgItem(dialog,IDCANCEL),FALSE);
        SetDlgItemTextW(dialog,IDC_IMPORT_STATUS,L"Cancelando e removendo os arquivos temporários…");return TRUE;
    }
    return FALSE;
}
}
void show_startup_error(const std::string& text) {
    MessageBoxW(nullptr,wide_text(text).c_str(),L"Speed Racer",MB_OK|MB_ICONERROR);
}
bool prepare_interactively(const std::filesystem::path& beside) {
    if(GetFileAttributesW((beside/L"data").c_str())!=INVALID_FILE_ATTRIBUTES)
        throw std::runtime_error("Esta pasta já contém dados do jogo. Para preservar seus arquivos, extraia a versão em uma pasta nova.");
    if(MessageBoxW(nullptr,L"Bem-vindo ao Speed Racer!\n\n"
        L"Selecione sua ISO da edição USA para preparar o jogo nesta pasta. "
        L"A preparação usa espaço para uma cópia completa da ISO e pode levar alguns minutos.\n\n"
        L"Sua ISO original e seus saves não serão alterados.",
        L"Speed Racer — primeiro acesso",MB_OKCANCEL|MB_ICONINFORMATION)!=IDOK)return false;
    std::vector<wchar_t> name(32768,L'\0');OPENFILENAMEW pick{};
    pick.lStructSize=sizeof(pick);pick.lpstrFile=name.data();pick.nMaxFile=static_cast<DWORD>(name.size());
    pick.lpstrFilter=L"Imagem de disco PS2 (*.iso)\0*.iso\0Todos os arquivos\0*.*\0\0";
    pick.lpstrTitle=L"Selecione sua ISO de Speed Racer (USA)";
    pick.Flags=OFN_FILEMUSTEXIST|OFN_PATHMUSTEXIST|OFN_NOCHANGEDIR|OFN_DONTADDTORECENT|OFN_EXPLORER;
    if(!GetOpenFileNameW(&pick)) {
        const auto error=CommDlgExtendedError();
        if(error)throw std::runtime_error("Não foi possível abrir o seletor de ISO ("+std::to_string(error)+").");
        return false;
    }
    INITCOMMONCONTROLSEX controls{sizeof(controls),ICC_PROGRESS_CLASS};
    if(!InitCommonControlsEx(&controls))throw std::runtime_error("Não foi possível abrir o progresso da preparação.");
    ImportDialog state;state.source=name.data();state.destination=beside/L"data";
    const auto outcome=DialogBoxParamW(GetModuleHandleW(nullptr),MAKEINTRESOURCEW(IDD_MEDIA_IMPORT),
        nullptr,import_proc,reinterpret_cast<LPARAM>(&state));
    if(state.worker.joinable())state.worker.join();
    if(state.error)std::rethrow_exception(state.error);
    if(outcome==-1)throw std::runtime_error("Não foi possível abrir a janela de preparação.");
    return outcome==IDOK;
}
}
