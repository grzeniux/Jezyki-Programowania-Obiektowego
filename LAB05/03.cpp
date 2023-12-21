// LAB05_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
#include<string>

using std::cin, std::cout, std::endl, std::string, std::getline;



int main()
{
    std::string slowo;
    std::stack<string> stosik;


    while (true) {
        cout << "Podaj slowo: " << endl;
        getline(cin, slowo);
        if (slowo == "end") break;

        stosik.push(slowo);
    }

    while (stosik.empty() == false)
    {
        std::cout << stosik.top() << "\n ";
        stosik.pop();
    }


}
