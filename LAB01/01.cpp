// LAB1_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()

{
	float a, b, c, d, x, x1, x2;

	cout << "\n Podaj wspolczynnik a" << endl;
	cin >> a;

	cout << "Podaj wspolczynnik b" << endl;
	cin >> b;

	cout << "Podaj wspolczynnik c" << endl;
	cin >> c;

	d = b * b - 4 * a * c;

	if (d == 0)
	{
		x1 = (-b) / 2 * a;
		x2 = 0;
		cout << x1 << " " << x2;
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << x1 << " " << x2;
	}
	else

	{
		cout << "Brak rozwiazan";
	}

}
