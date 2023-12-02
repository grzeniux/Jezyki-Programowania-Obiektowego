/*
W komputerowym przetwarzaniu tekstu wazna role odgrywa wielkosc zwana z jezyka angielskiego Term Frequency (TF), 
kt�ra wyraza czestotliwosc wystapienia konkretnego wyrazu w danym tekscie. Współczynnik TF dla danego wyrazu jest 
zdefiniowany nastepujaco:
TF = liczba wystapien wyrazow w tekscie / calkowita liczba wyrazów w tekscie.
Naprzyklad, jesli mamy przyslowie "nigdy nie mow nigdy", to dla wyrazu "nigdy" TF(nigdy) = 2/4 = 0.5, zas dla wyrazu "nie" TF(nie) = 1/4 = 0.25.

Napisz program, ktory bedzie wycztywyał z klawiatury kolejne wyrazy i wyliczy wartosc wspolczynnika TF dla kazdego wczytanego wyrazu. 
Po wprowadzeniu slowa "koniec" program powinien zakonczyc wprowadzanie wyrazów i wyswietli na ekranie wartosc 
wspolczynnika TF dla kzadego wprowadzonego wczesniej wyrazu (dla wyrazu "koniec" nie liczymy juz TF) (3 pkt)
*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map <string, float> TF;
    int count = 0;
    string word;
    
    for( ; ; ){
        cin >> word;
        if (word == "koniec"){
            break;
        }
        TF[word]++;
        count++;
    }
    
    for (auto element : TF) {
	string word = element.first;
	float app = element.second;
	cout << word << " :: " << app/count << "\n";
	}
}




