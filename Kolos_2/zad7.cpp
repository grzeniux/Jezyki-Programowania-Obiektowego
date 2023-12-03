/*
Napisz program, który otworzy plik i wczyta z niego jedn¹ linie tekstu, a nastêpnie wypisze j¹ na ekranie w odwrotnej kolejnoœci liter. 
Podczas operacji na pliku mo¿e siê zdarzyæ, ¿e zostanie zg³oszony wyj¹tek typu:
std::ifstream::failure. umieœæ w programie kod, który przechwytuje ten wyj¹tek i wyœwietla na ekranie odpowiedni komunikat. (3 pkt)
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    try {
        ifstream plik("zad7_plik.txt");     // Otwieranie pliku

        // Sprawdzanie, czy plik zosta³ poprawnie otwarty
        if (!plik.is_open()) {
            throw runtime_error("Nie udalo sie otworzyc pliku.");
        }
        string linia;
        getline(plik, linia);

        // Odwrotna kolejnosc
        cout << "Oryginalna linia: " << linia << endl;
        cout << "Linia w odwrotnej kolejnosci liter: ";
        for (int i = linia.length() - 1; i >= 0; i--) {
            cout << linia[i];
        }
        cout << endl;

        // Zamykanie pliku
        plik.close();
    } 
    
    catch (const ifstream::failure& e) {
        cerr << "Blad podczas operacji na pliku: " << e.what() << endl;
    } 
    catch (const runtime_error& e) {
        cerr << "Blad: " << e.what() << endl;
    }

    return 0;
}