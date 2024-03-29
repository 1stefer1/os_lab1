﻿#include <iostream> // Вызов стандартной библиотеки ввода/вывода в C++.

using namespace std; // Использование Пространства имен std

int main() {
    setlocale(LC_ALL, "rus"); // Устанавливаем русскую локаль
    int x, y; // Объявляем две переменные для хранения координат

    cout << "Введите координаты точки (x, y):\n"; // Вывод сообщения пользователю 
    cin >> x >> y; // Считываем введенные пользователем значения

    // Проверяем, в какой координатной четверти находится точка
    if (x > 0 && y > 0)
        cout << "Точка находится в первой координатной четверти.\n";
    else if (x < 0 && y > 0)
        cout << "Точка находится во второй координатной четверти.\n";
    else if (x < 0 && y < 0)
        cout << "Точка находится в третьей координатной четверти.\n";
    else if (x > 0 && y < 0)
        cout << "Точка находится в четвертой координатной четверти.\n";
    else
        cout << "Точка не лежит на координатных осях или не находится в четвертях.\n";

    return 0; // Завершаем выполнение программы
}
