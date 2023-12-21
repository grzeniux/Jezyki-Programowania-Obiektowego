// LAB03_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout, std::cin, std::endl, std::string;


int main()
{
    string message = "Congratulations Mrs. <name>, you and Mr. <name> are the lucky recipients of a trip for two to XXXXXX.Your trip to XXX is already scheduled";

    cout << "Original message: " << message << endl;
    cout << endl;

    // swap <name> with a word 'Smith'

    size_t pos = message.find("<name>");

    while (pos != string::npos) {
        message.replace(pos, 6, "Smith");
        pos = message.find("<name>", pos + 1);
    }

    cout << "After name replacement: " << message << endl;
    cout << endl;

    // swap every XXXX word (doesnt matter how many X's there is) with the word Siberia

    pos = message.find("X");

    while (pos != string::npos) {
        int count = 0;

        while (pos != string::npos && message[pos] == 'X') {
            count++;
            pos++;
        }

        message.replace(pos - count, count, "Siberia");
        pos = message.find("X", pos + 1);
    }

    cout << "After replacing XXXX words with Siberia: " << message << endl;
    cout << endl;

    // add "un" before the word "lucky"

    pos = message.find("lucky");

    if (pos != string::npos) {
        message.insert(pos, "un");
    }
    cout << "UNlucky instead of lucky: " << message << endl;
    cout << endl;

    // add "in December" at the end of the message

    message = message + " in December";
    cout << "Final product: " << message;
    cout << endl;

    return 0;
}


    