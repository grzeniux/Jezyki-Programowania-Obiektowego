// LAB01_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using std::cin, std::cout, std::endl, std::random_device, std::uniform_int_distribution;

int main()
{
	int x;
	random_device rd;
	uniform_int_distribution dist(0, 100);
	int y = dist(rd);
	for (int i = 0; i < 5; i++)
	{
		cout << "Give me a number between 0 and 100: " << endl;
		cin >> x;
		if (x == y)
		{
			cout << "You got it, Kudos! " << endl;
			break;
		}
		else
		{
			if (x < y)
			{
				cout << "The number is too low " << endl;;
			}
			else
				cout << "The number is too high " << endl;;
			cout << "try again :)" << endl;;

		}
	}
	cout << "The mysterious number was: " << y << endl;
}
