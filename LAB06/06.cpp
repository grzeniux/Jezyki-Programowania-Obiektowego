#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(size_t x) {
    if (x == 1) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

void permutation(vector<int>v, int factorial) {
    if (factorial==0) {
        cout << "";
    }
    else {
        next_permutation(v.begin(), v.end());
        for (auto i : v) {
            cout << i << " ";
        }
        cout << endl;
        permutation(v, factorial - 1);
    }
    //} while (next_permutation(v.begin(), v.end()));
}

int main()
{
    vector<int> v = { 1,2,3 };
    sort(v.begin(), v.end());
    //cout << factorial(4);
    size_t len = v.size();
    permutation(v,factorial(len));
}
