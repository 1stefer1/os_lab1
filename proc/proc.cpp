#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "rus");

    //STARTUPINFO start = { sizeof(start) };
    //PROCESS_INFORMATION procinfo;

    //// Путь к вашей первой программе (программе, которую вы только что написали)
    //TCHAR CommandLine[] = TEXT("os.exe");

    //CreateProcess(NULL, CommandLine, NULL, NULL, FALSE, 0, NULL, NULL, &start, &procinfo);

    //// Дождитесь завершения процесса, чтобы избежать утечек ресурсов
    //WaitForSingleObject(procinfo.hProcess, INFINITE);

    //// Закрываем дескрипторы процесса и потока
    //CloseHandle(procinfo.hProcess);
    //CloseHandle(procinfo.hThread);

    //return 0;

    STARTUPINFO cif;
    ZeroMemory(&cif, sizeof(STARTUPINFO));
    PROCESS_INFORMATION pi;
    TCHAR CommandLine[] = TEXT("os.exe");
    
    if (CreateProcess(NULL, CommandLine, NULL, NULL, FALSE, NULL, NULL, NULL, &cif, &pi) == TRUE)
    {
        std::cout << "Процесс успешно запущен.\n";
        Sleep(10000);
        TerminateProcess(pi.hProcess, NO_ERROR);// убрать процесс
    }

    else
    {
        std::cout << "Увы, процесс не запустился.";
    }
}
