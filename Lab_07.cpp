﻿// Лабораторная работа №7, Вариант 3.
// https://www.cyberforum.ru/cpp-beginners/thread2013326.html

#include <iostream>
#include <windows.h>    // Библиотека для русской локализации
#include <any>          // Для 

void multiplication(int a, int b)
{
    std::cout << "Умножение целых чисел: " << a * b << std::endl;
}

void multiplication(double a, double b)
{
    std::cout << "Умножение комплексных чисел: " << a * b << std::endl;
}

void main()
{
    SetConsoleOutputCP(1251);   // Вывод на консоль в кодировке 1251 для русской локализации.

    multiplication(5, 5);

    multiplication(2.5, 2.5);
}
