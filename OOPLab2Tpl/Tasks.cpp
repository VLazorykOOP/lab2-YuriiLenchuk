#include <iostream>
#include <clocale>
#include <fstream>
#include <bitset>
using std::cin;
using std::cout;
using std::endl;
using std::bitset;
using std::ifstream;
using std::ofstream;
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

void encryption(char S[8][9], unsigned short Rez[8][9])
{
    unsigned char c;
    unsigned short r, t, b;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            r = 0;
            c = S[i][j];
            r |= i << 13;
            r |= c << 5;
            t = 32;
            b = 0;
            for (int k = 0; k < 11; k++)
            {
                if (r & t) if (b == 0) b = 1; else b = 0;
                t <<= 1;
            }
            r |= b << 4;
            r |= j << 1;
            t = 2;
            b = 0;
            for (int k = 0; k < 3; k++)
            {
                if (r & t) if (b == 0) b = 1; else b = 0;
                t <<= 1;
            }
            r |= b;
            Rez[i][j] = r;
        }
    }
    return;
}

void task2()
{
    setlocale(LC_CTYPE, "ukr");
    // Шифрування даних з використання побітових операцій 
    // Data encryption using bitwise operations
    /*4. Задано 8 рядків тексту. У рядку до 8 символів. Доповнити пробілами рядки до 8 символів.
    Шифрувати тексти таким чином, щоб кожний символ тексту записувався у два байти. Два байти
    мають таку структуру:
    у бітах 0-2 знаходиться номер рядка символу (3 біти),
    у бітах 3-10 ASCII - код букви (8 біт),
    11 біт – біт парності перших двох полів (1 біт)
    у бітах 12-14 позиція символу в рядку (3 біти),
    15 біт - біт парності попереднього поля (1 біт). */
    cout << " Data encryption using bitwise operations  \n";
    char S[8][9];
    unsigned short Rez[8][9];
    unsigned short f;
    cout << " Input string from file press 1 <Enter>\n ";
    cin >> f;
    if (f) {
        ifstream ifs("in.txt");
        if (ifs) {
            for (int i = 0; i < 8; i++)
            {
                ifs >> S[i];
                int m = strlen(S[i]);
                for (int j = 7; j > m - 1; j--)
                    S[i][j] = ' ';
                S[i][8] = 0;
            }
            ifs.close();
        }
        else {
            cout << "File in.txt not open" << endl;
            return;
        }
    }
    else
    {
        cin.get();
        cout << " Input string (size <=64) \n";
        for (int i = 0; i < 8; i++)
        {
            cin >> S[i];
            int m = strlen(S[i]);
            for (int j = 7; j > m - 1; j--)
                S[i][j] = ' ';
            S[i][8] = 0;
        }
    }
    encryption(S, Rez);
    ofstream ofs("out.txt");
    if (ofs) {
        for (int i = 0; i < 8; i++, ofs << endl) for (int j = 0; j < 8; j++) ofs << Rez[i][j] << ' ';
        ofs.close();
    }
    else {
        cout << "File out.txt not open" << endl;
        return;
    }
    cin.get();
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


