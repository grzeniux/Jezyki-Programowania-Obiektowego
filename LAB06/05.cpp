#include <iostream>

using namespace std;

void check(int n ,int index) {
    if (n % index != 0) {
        check(n, index - 1);
    }
    else if (index == 1) {
        cout << "liczba" << n << "jest pierwsza" << endl;
    }

}

int main()
{
    int x;
    cin >> x;
    check(x, x-1);
}