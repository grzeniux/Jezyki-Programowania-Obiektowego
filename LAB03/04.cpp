// LAB03_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::string, std::cin, std::cout, std::endl;

int main()
{
    string s, t;

    cout << "Enter the first character string: " << endl;
    cin >> s;

    cout << "Enter the second character string: " << endl;
    cin >> t;

    // Checking if the strings are compatible
    
    if (s.length() != t.length()) {
        cout << "The strings are not compatible! ";
    }

    t += t;
    
    if (t.find(s) != string::npos) {
        cout << "Strings are compatible! " << endl;
    }
    else {
        cout << "Strings are not compatible! " << endl;
    }
    return 0;

}
