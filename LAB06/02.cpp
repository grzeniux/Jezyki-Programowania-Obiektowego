
#include <iostream>
using namespace std;

class complexNumber
{
private:
    double _Re;
    double _Im;

public:
    complexNumber() : _Re{ 0 }, _Im{ 0 } {}
    complexNumber(double Re, double Im) : _Re{ Re }, _Im{ Im } {}


    double getRealis() const { return _Re; }
    double getImaginalis() const { return _Im; }

    void setRealis(double Re) { _Re = Re; }
    void setImaginalis(double Im) { _Im = Im; }

    complexNumber& operator =(const complexNumber& complex)
    {
        if (this != &complex)
        {
            _Re = complex._Re;
            _Im = complex._Im;
        }
        return *this;
    }


    complexNumber& operator++() {
        ++_Re;
        ++_Im;

        return *this;
    }

    complexNumber operator++(int) {
        complexNumber temp = *this;
        ++*this;
        return temp;
    }

};


complexNumber operator+ (const complexNumber& first, const complexNumber& second)
{
    return complexNumber(first.getRealis() + second.getRealis(), first.getImaginalis() + second.getImaginalis());
}

ostream& operator<< (ostream& out, const complexNumber& complex)
{
    out << complex.getRealis() << " + " << complex.getImaginalis() << "j";
    return out;

}

istream& operator>> (istream& in, complexNumber& complex)
{
    double real, imag;
    cout << "Podaj Realis : ";
    in >> real;
    complex.setRealis(real);
    cout << "\n";
    cout << "Podaj Imaginalis : ";
    in >> imag;
    complex.setImaginalis(imag);
    cout << "\n";
    return in;
}

bool operator== (const complexNumber& first, const complexNumber& second)
{
    return (first.getRealis() == second.getRealis() && first.getImaginalis() == second.getImaginalis());
}




int main()
{

    complexNumber a, b;
    cin >> a;
    b = complexNumber(1, 1);

    cout << complexNumber(a);
    cout << endl;

    cout << (a == b) << "\n" << ++a << "\n" << a++ << "\n" << a;

}

