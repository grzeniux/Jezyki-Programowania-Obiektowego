#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Funkcja do przeliczania centymetr�w na cale
double cmToInch(double cm) 
{
    return cm / 2.54;
}

int main() {
    // Wektor d�ugo�ci w centymetrach
    vector<double> lengthsInCm = { 2.54, 10.0, 20.0, 30.0, 40.0, 50.0 };

    // Przeliczanie cm na cale
    vector<double> lengthsInInches;
    transform(lengthsInCm.begin(), lengthsInCm.end(), back_inserter(lengthsInInches), cmToInch);

    cout << "D�ugosci w centymetrach: ";
    for (const double& cm : lengthsInCm) 
    {
            cout << cm << " ";
    }
    cout << endl;

    cout << "D�ugosci w calach: ";
    for (const double& inch : lengthsInInches) {
        cout << inch << " ";
    }
    cout << endl;

    return 0;
}

