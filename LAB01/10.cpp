#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

string usuwanieSpacji(string ciag) {
    //usuwanie spacji
    string nowyCiag;
    for (int i = 0; i < ciag.length(); i++) {
        if (ciag[i] != ' ') {
            nowyCiag += ciag[i];
        }
    }
    cout << nowyCiag << endl;
    return nowyCiag;
}
void wyodrebnienie(string nowiusi) {
    // wyodrebnienie na dwa stringi
    string str1, str2;
    size_t pos = nowiusi.find('+');
    int x{}, y{}, wynik{};
    str1 = nowiusi.substr(0, pos);
    str2 = nowiusi.substr(pos + 1, nowiusi.length());
    cout << str1 << " " << str2 << endl;
    x = stoi(str1);
    y = stoi(str2);
    wynik = x + y;
    cout << wynik;
}

int main()
{
    string ciag, nowyCiag;
    std::cout << "podaj ciag jakis tam: ";
    getline(cin, ciag);
    nowyCiag=usuwanieSpacji(ciag);
    wyodrebnienie(nowyCiag);
    return 0;
 }