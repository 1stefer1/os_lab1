#include <iostream> // Вызов стандартной библиотеки ввода/вывода в C++.
#include <windows.h> // Подключение библиотеки Windows API для работы с процессами. 

using namespace std; // Использование Пространства имен std

int main() {
    setlocale(LC_ALL, "rus"); // Установка русской локали

    STARTUPINFO cif; // Инициализация структуры STARTUPINFO.
    ZeroMemory(&cif, sizeof(STARTUPINFO)); // обнуление её памяти

    PROCESS_INFORMATION pi; // Инициализация структуры PROCESS_INFORMATION для хранения информации о процессе.

    TCHAR CommandLine[] = TEXT("os.exe"); // Командная строка, указывающая на исполняемый файл "os.exe"
    
    // Создание процесса с указанными параметрами.
    if (CreateProcess(NULL, CommandLine, NULL, NULL, FALSE, NULL, NULL, NULL, &cif, &pi) == TRUE)
    {
        cout << "Процесс успешно запущен.\n"; // Вывод сообщения пользователю
        Sleep(10000); // Подождать 10 секунд
        TerminateProcess(pi.hProcess, NO_ERROR);// Завершение процесса
    }

    // Если условие создание процесса не удалось, выводим сообщение о неудаче
    else
    {
        cout << "Увы, процесс не запустился."; // Вывод сообщения пользователю
    }
}
