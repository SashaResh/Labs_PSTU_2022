//вариант 6
#include <iostream>
#include <stdarg.h>
#include <locale>           // библиотека для кириллицы

using namespace std;

int S(int n, int ...)       //функция суммы
{
    va_list vl;             //список аргументов, переданных через многоточие
    va_start(vl, n);        //va_start() - инициализация списка

    int r = 0;

    for (int i = 0; i < n / 2; ++i) {               //цикл для нахождения суммы S=a1*a2+a3*a4+a5*a6+...
        r += va_arg(vl, int) * va_arg(vl, int);     //va_arg() - получение очередного элемента указанного типа.
    }
    va_end(vl);             // выполнение корректного выхода
    return r;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Вычисление суммы для 8 параметров" << endl << S(8, 1, 2, 3, 4, 5, 6, 7, 8) << endl;
    cout << "Вычисление суммы для 10 параметров" << endl << S(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    cout << "Вычисление суммы для 12 параметров" << endl << S(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;
    return 0;
}