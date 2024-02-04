﻿#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    double x, y;

    // Ввод координат точки от пользователя
    std::cout << "Введите координаты точки (x y):\n ";
    std::cin >> x >> y;

    // Алгоритм проверки, в какой координатной четверти находится точка
    if (x > 0 && y > 0)
        std::cout << "Точка находится в первой координатной четверти.\n";
    else if (x < 0 && y > 0)
        std::cout << "Точка находится во второй координатной четверти.\n";
    else if (x < 0 && y < 0)
        std::cout << "Точка находится в третьей координатной четверти.\n";
    else if (x > 0 && y < 0)
        std::cout << "Точка находится в четвертой координатной четверти.\n";
    else
        std::cout << "Точка не лежит на координатных осях или не находится в четвертях.\n";

    return 0;
}
