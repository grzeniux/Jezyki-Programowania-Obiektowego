/*
5. Na poprzednim kolokwium utworzyliśmy klasę Fraction reprezentującą liczbę wymierną. Ma ona w uproszczeniu następującą postać:
class Fraction 
{
	private:
		int m_num;  //licznik
		int m_den;  //mianownik
	public:
		Fraction(int nominator = 0, int denominator = 0): m_num{nominator}, m_den{denominator}{}
		int get_num(void) const { return m_num; }
		int get_den(void) const { return m_den; }

		void set_num(int num) { m_num = num; }
		void set_den(int den) { m_den = den; }
};

Dla klasy Fraction napisz funkcje operatorowe: dodawania, postinkrementacji oraz wyjścia

*/


#include <iostream>

using namespace std;

class Fraction
{
private:
    int m_num;
    int m_den;

public:
    Fraction (int numerator = 0, int denumerator = 0)
    {
        m_num = numerator;
        m_den = denumerator;
    }

    int get_num(void) const { return m_num; }
    int get_den(void) const { return m_den; }

    void set_num(int num) { m_num = num; }
    void set_den(int den) { m_den = den; }

    Fraction operator++ (int)     //post-inkrementacja
    {
        Fraction temp = *this;
        ++this -> m_num;
        ++this -> m_den;
        return temp;
    }
};

Fraction operator+ (const Fraction& lhs, const Fraction& rhs)   //operator dodawania
{
    return Fraction(lhs.get_num() + rhs.get_num(), lhs.get_den() + rhs.get_den());
}

ostream& operator<< ( ostream& out, const Fraction& rhs )   // operator wyjścia
{
    out << rhs.get_num() << "/" << rhs.get_den();
    return out;
}

int main()
{
    Fraction u1(1,2),u2(3,4);
    Fraction u3 = u1 + u2;
    
    cout << u3 << "\n";
    u3++;
    cout << u3 << endl;
}





