#include <iostream>
#include <stack>
#include <string>

int main()
{
    std::string txt;
    std::stack<std::string> stos;
    while (1) {
        std::cin >> txt;
        if (txt == "end") {
            break;
        }
        stos.push(txt);
    }
    while (stos.empty() != true) {
        std::cout << stos.top() << std::endl;
        stos.pop();
    }
}