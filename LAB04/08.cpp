
#include <iostream>
#include<vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

vector<string> tokenizer(const string& str, const string& sep) {
    vector<string> result;
    size_t start_pos = 0;
    size_t pos = str.find(sep);
    while (pos != std::string::npos) {
        result.push_back(str.substr(start_pos, pos-start_pos));
        start_pos = pos+sep.length();
        pos = str.find(sep, start_pos);
    }
    //for (auto const i : result) {
    //    cout << i << endl;
    //}
    return result;
}

int main()
{
    string str;
    string sep;
    vector<string> wynik;
    cout << "insert some text:";
    getline(cin, str);
    cout << "inster separator:";
    getline(cin, sep);
    wynik=tokenizer(str, sep);
    for (auto const znak : wynik) {
        cout << znak << endl;
    }
}
