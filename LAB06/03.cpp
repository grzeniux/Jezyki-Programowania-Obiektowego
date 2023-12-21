#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::string;

void printReverse(const string& str, int index) {
    if (index >= 0) {
        cout << str[index];
        printReverse(str, index - 1);
    }
}

int main()
{
    cout << "Podaj napis: ";
    string input;
    getline(cin, input);

    cout << "Odwrotny napis: ";
    printReverse(input, input.size() - 1);
}