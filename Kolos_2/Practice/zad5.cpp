/* 5. Na poprzednim kolokwium utworzyliœmy klasê Fraction reprezentuj¹c¹ liczbê wymiern¹. Ma ona w uproszczeniu nastêpuj¹c¹ postaæ:
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
Dla klasy Fraction napisz funkcje operatorowe: dodawania, postinkrementacji oraz wyjœcia
*/

#include <iostream>
using namespace std;
class Fraction {
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
Fraction operator+ (const Fraction& lewa, const Fraction& prawa){
    return Fraction(lewa.get_num() + lewa.get_den(), prawa.get_num() + prawa.get_den());
}
ostream& operator  <<(ostream& COUT, const Fraction& abc){
    COUT << abc.get_num() << "/" << abc.get_den();
    return COUT;
}

int main()
{








    return 0;
}