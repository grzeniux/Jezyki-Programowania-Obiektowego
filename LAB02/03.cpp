
#include <iostream>
#include <random>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;

class SmartArray {
private:
    double* farr;
    int fsize{};
    std::random_device rd;
public:
    SmartArray(int n) : fsize{ n }
    {
        farr = new double[fsize];
        std::uniform_real_distribution<double> dist(-100.0,100.0);
        for (int i = 0; i < n;i++) {
            farr[i] = dist(rd);
        }
        cout << "utworzono obiekt o ilosci elementow: "<<n << endl;
    }
    SmartArray(const SmartArray& p) :fsize{ p.fsize }
    {
        farr = new double[fsize];
        for (int i = 0; i < fsize; i++) {
            farr[i] = p.farr[i];
        }
        cout << "utworzono obiekt za pomoca kontruktora kopiujacego" << endl;
    }
    ~SmartArray()
    {
        delete[] farr;
        cout << "zostal wywolany destruktor" << endl;
    }
    double at(int index) {
        assert(index >= 0 && index <= fsize);
            return farr[index];
    }
    void set(int index, double value) {
        assert(index >= 0 && index <= fsize);
        farr[index] = value;
    }
    double max() const{
        double maxValue = farr[0];
        for (int i = 0; i < fsize;i++) {
            if (farr[i] > maxValue) {
                maxValue = farr[i];
            }
        }
        return maxValue;
    }
    void print() {
        for (int i = 0; i < fsize; i++) {
            cout << farr[i] << endl;
        }
    }
};

int main()
{
    double maksym;
    SmartArray tab(16);
    tab.print();
    tab.set(2, 69);
    maksym=tab.max();
    cout << "max: "<<maksym << endl;
    tab.print();
    SmartArray tab2(tab);
    tab2.print();
    //tab2.at(17);


}

