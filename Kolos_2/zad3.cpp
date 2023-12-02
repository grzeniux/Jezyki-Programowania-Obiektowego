/*
Jaki będzie wynik działania poniższego programu? (2pkt)
*/
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void show1(void) { cout << "In Base\n"; }
    void show2(void) { cout << "In Base\n"; }
};
class Derived : public Base
{
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
wskaźnik bp typu Base*, który wskazuje na obiekt klasy Derived.
Wywołuje metodę show1 dla obiektu wskazywanego przez bp. 
Ponieważ show1 jest oznaczona jako virtual, zostanie użyta implementacja z klasy pochodnej Derived.

Wywołuje metodę show2 dla obiektu wskazywanego przez bp. 
Tutaj wywołana zostanie implementacja z klasy bazowej Base, ponieważ show2 nie jest oznaczona jako virtual.
*/

