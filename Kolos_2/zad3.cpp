/*
Jaki będzie wynik działania poniższego programu? (2pkt)

class Base
{
	public:
		virtual void show (void) { cout<<"In Base\n"; }
		void show(void) {cout<<"In Base\n"; }
};

class Derived: public Base
{
	public:
		void show1(void) { cout<<"In Derived\n"; }
		void show2(void) {cout<<"In Derived\n"; }
};


int main(void)
{
	Base* bp = new Derived();
	bp -> show1();
	bp -> show2();
	return 0;
}

*/




