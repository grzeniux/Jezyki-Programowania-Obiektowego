// LAB01_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using std:: cin, std::cout, std::endl;

float operation(shared_ptr arr){

	float mean{ 0 };
	int length = sizeof(arr) / sizeof(double);
	float sum{ 0 };

	for (int i = 0; i < length; ++i) {
		sum += arr[i];
	}
	mean = sum / (length - 1);
	return mean;
}

float sigma(shared_ptr arr) {
	float mean = operation(arr);
	int length = sizeof(arr) / sizeof(double);
	int sum2 = 0;
	float result = 0;

	for (int i = 0; i < length; ++i) {
		sum2 += pow(arr[i] - mean, 2);
		//result = sqrt(sum2/length)
		return result;
	}
}

int main()
{
	int size = 0;
	cout << "Podaj wielkosc tablicy:";
	cin >> size;
	shared_ptr array = make_shared(size);
	std::random_device rd;
	std::uniform_real_distribution dist(-1.0, 1.0);

	for (int i = 0; i < size; ++i) {
		array[i] = dist(rd);
		cout << array[i] << endl;
	}
	cout << "srednia=" << operation(array) << endl;
	cout << "odchylenie=" << sigma(array);
	
}

