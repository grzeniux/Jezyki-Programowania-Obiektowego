// LAB03_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string slowo;
	std::cout << "Wpisz slowo\n";
	// std::cin >> slowo;
	std::getline(std::cin, slowo);
	std::cout << "dlugosc slowa to: " << slowo.size()<<std::endl;
	int count(0);
	for (int i = 0; i <= slowo.size(); ++i) {
		if (isdigit(slowo[i])) count++;
	}

	std::cout << "tyle jest cyfr: " << count;
}

