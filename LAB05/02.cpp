#include <iostream>
#include <map>
#include <string>
#include <cctype>

using std::cin, std::cout, std::endl, std::string;

int main()
{
    std::string slowo;

    cout << "Podaj zdanie: " << endl;
    std::getline(cin, slowo);

    std::map <char, int> counter;

    for (const auto& elem : slowo) {
        if (isalpha(elem)) {
            counter[elem]++;
        }
    }


    for (const auto& elem : counter)
    {
        char znak = elem.first; // Accessing KEY from element
        int count = elem.second; // Accessing VALUE from element
        cout << znak << " :: " << count << endl;
    }


}