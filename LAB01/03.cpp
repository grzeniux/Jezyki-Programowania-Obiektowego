// LAB01_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float function(float kasa, float procent, int l_kapitalizacji) {
	for (int i = 0; i < l_kapitalizacji; i++) {
		kasa = kasa + kasa * procent / 100;
	}
	return kasa;
};

int main()
{
	float kasa, procent, l_kapitalizacji;
	std::cout << "Podaj wartosc poczatkowego kapitalu: " << std::endl;
	std::cin >> kasa;
	std::cout << "Podaj wartosc stopy procentowej: " << std::endl;
	std::cin >> procent;
	std::cout << "Podaj liczbe kapitalizacji: " << std::endl;
	std::cin >> l_kapitalizacji;

	std::cout << "Kapital wynosi: " << function(kasa, procent, l_kapitalizacji) << std::endl;
}
