#include <iostream>
#include <clocale>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {
    setlocale(LC_CTYPE, "ukr");
    // Обчислення виразів з використанням побітових операцій
    // Calculation of expressions using bitwise operations
    cout << " Calculation of expressions using bitwise operations  \n" << endl;
    int a, b, c, d, x, y;
    cout << "Введіть a, b, c, d: ";
    cin >> a >> b >> c >> d;
    x = (b + (b << 5)) + (((d << 4) - d + ((a << 3) + (a << 2))) >> 9) - (c + (c << 6)) + ((d << 4) - (d << 1));
    y = 33 * b + (d * 15 + 12 * a) / 512 - 65 * c + d * 14;
    cout << "x= " << x << endl << "y= " << y << endl;
    cin.get();
    return;
}

void task2()
{
    // Шифрування даних з використання побітових операцій 
    // Data encryption using bitwise operations
    cout << " Data encryption using bitwise operations  \n";

}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}


