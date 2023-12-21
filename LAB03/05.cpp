
#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void insert(float& hajs) {
	cout << "ile masz hajsu" << endl;
	cin >> hajs;
}
//ale gowno ten kod ale dziala XD
int main()
{
	string PLN, EUR;
	float hajs{}, wynik{}, fPLN{}, fEUR{};
	char wybor, wybor2;
	bool cos;
	std::ifstream file("C:\\Users\\Kuba\\Desktop\\jpo\\lab3\\z5_03_poprawa\\z4.txt");
	if (file.is_open()) {
		if (getline(file, PLN)) {
			if (getline(file, EUR)) {
				//cout << PLN << endl << EUR << endl;
			}
		}
		fPLN = std::stof(PLN);
		fEUR = std::stof(EUR);
		file.close();
		//while (1) {
			cos = 1;
			while (1) {
				cout << "wybierz walute:" << endl;
				cout << "1. PLN" << endl;
				cout << "2. EUR" << endl;
				cout << "q. to exit" << endl;
				cin >> wybor;
				switch (wybor) {
				case '1':
					//do {
						cout << "a. PLN TO EUR" << endl;
						cout << "b. PLN TO USD" << endl;
						cout << "c. BACK" << endl;
						cin >> wybor2;
						switch (wybor2) {
						case 'a':
							insert(hajs);
							wynik = (hajs / fPLN) * fEUR * 100;
							wynik = (round(wynik) / 100) * 0.95;
							cout << hajs << "PLN to " << wynik << "EUR" << endl;
							break;
						case 'b':
							insert(hajs);
							wynik = (hajs / fPLN) * 100;
							wynik = (round(wynik) / 100) * 0.95;
							cout << hajs << "PLN to " << wynik << "USD" << endl;
							break;
						case 'c':
							cos = 0;
							break;
						}
					//} while (cos == 1);
					break;
				case '2':
					cout << "a. EUR TO PLN" << endl;
					cout << "b. EUR TO USD" << endl;
					cout << "c. BACK" << endl;
					cin >> wybor2;
					switch (wybor2) {
					case 'a':
						insert(hajs);
						wynik = hajs * fPLN / fEUR * 100;
						wynik = (round(wynik) / 100) * 0.95;
						cout << hajs << "EUR to " << wynik << "PLN" << endl;
						break;
					case 'b':
						insert(hajs);
						wynik = (hajs / fEUR) * 100;
						wynik = (round(wynik) / 100) * 0.95;
						cout << hajs << "EUR to " << wynik << "USD" << endl;
						break;
					case 'c':
						break;
					}
					break;
				case 'q':
					exit(EXIT_SUCCESS);
				}
			}
	}
	else {
		return 0;
	}
}

