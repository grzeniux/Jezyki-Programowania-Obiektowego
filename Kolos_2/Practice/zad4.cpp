/*
Przyjmij, ze masz dane dwa wektory liczb typu double. Napisz funkcje, ktoras zwraca iloczyn skalarny tych wektorow. (2 pkt)
*/
#include <iostream>
#include <vector>
using namespace std;

double iloczynSkalarny(const vector<double>&w1, const vector<double>&w2)
{
        double wynik = 0.0;

        if (w1.size() != w2.size())
        {
            cout<<"Wektory sa roznej dlugosci!!!";
            return 0.0;
        }
    
    for (size_t i=0; i < w1.size(); ++i)
    {
        wynik += w1[i] * w2[i];
    }
    return wynik;
}

int main()
{
    vector<double> wA = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    vector<double> wB = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};

    double WYNIK2 = iloczynSkalarny(wA, wB);
    cout<<"Iloczyn skalarny: "<<WYNIK2<<endl;

    return 0;
}





