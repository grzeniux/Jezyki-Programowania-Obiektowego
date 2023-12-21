// z8.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    char x;
    int y{}, z{}, wynik{};


    cout << "podaj operator:";
    cin >> x;
    if (x == 43 || x == 45 || x == 47 || x == 42 || x == 113) {
        cout << "podaj pierwsza liczbe:";
        cin >> y;
        cout << "podaj druga liczbe:";
        cin >> z;

        switch (x) {
        case 43:
            wynik = y + z;
            cout << "wynik:" << wynik;
            break;
        case 45:
            wynik = y - z;
            cout << "wynik:" << wynik;
            break;
        case 47:
            wynik = y / z;
            cout << "wynik:" << wynik;
            break;
        case 42:
            wynik = y * z;
            cout << "wynik:" << wynik;
            break;
        case 113:
            break;

        }
    }
    else {
        cout << "wez nie jajcuj";
    }
   
}

