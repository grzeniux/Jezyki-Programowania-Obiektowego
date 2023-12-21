
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

bool IsNotOdd(int i) {
    return (i % 2 != 1);
}

int main()
{
    vector<int> num;
    vector<int>::iterator it;
    int znak;
    cout << "insert some integers:";
    do {
        cin >> znak;
        num.push_back(znak);
    } while (znak != -1);
    cout << "before changes:" << endl;
    for (auto const i : num) {
        cout << i << '\n';
    }
    sort(num.begin(), num.end());
    it = unique(num.begin(), num.end());
    num.resize(distance(num.begin(), it));
    cout << "after unique:" << endl;
    for (auto const n : num) {
        cout << n << '\n';
    }
    int notOdd = count_if(num.begin(), num.end(), IsNotOdd);
    cout << "vector contains " << notOdd << " not odd numbers" << endl;
    vector<int>out;
    out.resize(num.size());
    cout << "vector after changing its number to opposite:";
    transform(num.begin(), num.end(), out.begin(), [](int x)-> int {return x * (-1);});
    for(auto const j : out){
        cout << j << endl;
    }
    sort(num.begin(), num.end(), [](int x,int y) ->bool {return x>y;});
    cout << "after changing its order:";
    for (auto const znak : num) {
        cout << znak << endl;
    }

}

