// LAB05_z1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
#include <string>

int main()
{
    std::map <std::string, std::string> phonebook;
    std::string imie{}, numer{};


    while (true) {
        std::cout << "wpisz imie: ";
        std::cin >> imie;

        if (imie == "exit") break;

        if (phonebook.count(imie) > 0) {
            std::cout << "imie: " << imie << ",numer: " << phonebook[imie] << std::endl;
        }
        else {
            std::cout << "podaj numer: ";
            std::cin >> numer;
            phonebook[imie] = numer;
        }
    }
}




