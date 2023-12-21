// LAB01_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	unsigned int m, n;
	cout << "podaj 2 liczby calkowite: " << endl;
	cin >> n;
	cin >> m;

	if (n == m) {
		cout << "Liczby sa rowne";
	}
	if (n < m) {
		for (int i = 0; i < m; ++i) {
			if (n * i < m) {
				cout << n * i << endl;
			}
		}
	}
	else cout << "Liczba n jest mniejsza od m" << endl;
}