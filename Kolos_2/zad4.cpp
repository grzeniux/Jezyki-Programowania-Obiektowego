/*
Przyjmij, ze masz dane dwa wektory liczb typu double. Napisz funkcje, która zwraca iloczyn skalarny tych wektorow. (2 pkt)
*/
#include <iostream>
#include <vector>
using namespace std;

double iloczynSkalarny(const vector<double>& wektor1, const vector<double>& wektor2) {
   
    // Sprawdzenie, czy wektory mają taką samą długość
    if (wektor1.size() != wektor2.size()) {
        cerr << "Błąd: Wektory mają różne długości.\n";
        return 0.0; 
    double wynik = 0.0;

    // Obliczanie iloczynu skalarnego
    for (size_t i = 0; i < wektor1.size(); ++i) {
        wynik += wektor1[i] * wektor2[i];
    }

    return wynik;
}

int main() {
    vector<double> wektorA = {1.0, 2.0, 3.0};
    vector<double> wektorB = {4.0, 5.0, 6.0};

    double wynikIloczynuSkalarnego = iloczynSkalarny(wektorA, wektorB);
    cout << "Iloczyn skalarny: " << wynikIloczynuSkalarnego << endl;

    return 0;
}




