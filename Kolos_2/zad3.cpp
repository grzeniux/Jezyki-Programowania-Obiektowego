/*      Jaki bêdzie wynik dzia³ania poni¿szego programu? (2pkt)     */
#include <iostream>
using namespace std;

class Base{
public:
	virtual void show1(void) { cout << "In Base\n"; }
    void show2(void) { cout << "In Base\n"; }
};

class Derived : public Base{
public:
    void show1(void) { cout << "In Derived\n"; }
    void show2(void) { cout << "In Derived\n"; }
};

int main()
{
    Base* bp = new Derived();
    bp->show1();
    bp->show2();
    return 0;
}
/*
wskaŸnik bp typu Base*, który wskazuje na obiekt klasy Derived.
Wywo³uje metodê show1 dla obiektu wskazywanego przez bp. 
Poniewa¿ show1 jest oznaczona jako virtual, zostanie u¿yta implementacja z klasy pochodnej Derived.

Wywo³uje metodê show2 dla obiektu wskazywanego przez bp. 
Tutaj wywo³ana zostanie implementacja z klasy bazowej Base, poniewa¿ show2 nie jest oznaczona jako virtual.     */