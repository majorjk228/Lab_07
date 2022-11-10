// Лабораторная работа №7, Вариант 3.


#include <iostream>
#include <windows.h>    // Библиотека для русской локализации

void multiplication(int a, int b)
{
    std::cout << "Введенные цедочисленные данные: " << a << " и " << b << std::endl;
    std::cout << "Умножение целых чисел: " << a * b << std::endl;
}

void multiplication(double a, double b)
{
    std::cout << "Введенные комплексные(с плавующей точкой) данные: " << a << " и " << b << std::endl;
    std::cout << "Умножение комплексных чисел: " << a * b << std::endl;
}

void main()
{
    SetConsoleOutputCP(1251);   // Вывод на консоль в кодировке 1251 для русской локализации.

    multiplication(5, 5);

    multiplication(2.5, 2.5);
}

