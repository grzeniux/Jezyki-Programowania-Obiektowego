
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class TQuadEq {
private:
	double fa;
	double fb;
	double fc;
public:
	TQuadEq(void) : fa(0.0), fb(0.0), fc(0.0)
	{}
	TQuadEq(double a, double b, double c) : fa{ a }, fb{ b }, fc{ c }
	{}
	double get_a(void) const {
		return fa;
	}
	double get_b(void) const {
		return fb;
	}
	double get_c(void) const {
		return fc;
	}
	void set_a_b_c(double a,double b, double c) {
		fa = a;
		fb = b;
		fc = c;
	}
	//void set_b(float b) {
	//	fb = b;
	//}
	//void set_c(float c) {
	//	fc = c;
	//}
	double ComputeDelta(void) const {
		double delta = sqrt(fb * fb - 4 * fa * fc);
		if (delta >= 0) {
			return delta;
		}
		else {
			cout<<"delta ujemna";
			std::exit(0);
		}
	}
	int GetNumRoots(const double delta) const {
		if (delta > 0) {
			return 2;
		}
		else if (delta == 0) {
			return 1;
		}
	}
	double GetRoots(double& root1, double& root2) const {
		double delta=ComputeDelta();
		int NumRoots = GetNumRoots(delta);
		if (NumRoots == 2) {
			root1 = (-fb - delta) / (2*fa);
			root2 = (-fb  + delta) / (2*fa);
			return root1, root2;
		}
		else if (NumRoots == 1) {
			root1 = root2 = ( - fb) / (2 * fa);
			return root1;
		}
	}
};

int main()
{
	float a{}, b{}, c{}, delta{};
	double x1{}, x2{};
	int roots{};
	cout << "podaj wspolczynniki trojmianu: " << endl;
	cout << "a: ";
	cin >> a;
	cout << "b :";
	cin >> b;
	cout << "c :";
	cin >> c;
	TQuadEq kwadrat;
	kwadrat.set_a_b_c(a,b,c);
	//kwadrat.set_b(b);
	//kwadrat.set_c(c);
	delta = kwadrat.ComputeDelta();
	//cout << delta << endl;;
	roots = kwadrat.GetNumRoots(delta);
	//cout << roots << endl;;
	kwadrat.GetRoots(x1,x2);
	cout << "wynik:" << x1 << " " << x2 << endl;
}

