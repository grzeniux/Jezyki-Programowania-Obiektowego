// LAB03_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using std::string;

string reverse_string(string text) {

    string rev_text;
    for (int i = text.size(); i >= 0; --i) {
        rev_text += text[i];
    }
    return rev_text;
}

int main()
{
    string text;
    std::ifstream plik("text_in.txt");
    std::ofstream nowy_plik("text_out.txt");

    if (plik.is_open()) {
        plik >> text;
        nowy_plik << reverse_string(text);
    }

    plik.close();
    nowy_plik.close();    
}

