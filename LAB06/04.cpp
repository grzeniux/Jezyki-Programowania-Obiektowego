#include <iostream>

using namespace std;

double f(double x) {
    return (3 * x * x + 7 * x + 1);
}

double bisection(double a, double b, double epsilion) {
    double x1=(a+b)/2.0;
    if (f(x1) == 0) {
        return x1;
    }
    if (abs(a - b) < epsilion) {
        return (a + b) / 2.0;
    }
    else if(abs(a-b)>epsilion) {
        if (f(a) * f(x1) < 0) {
            return bisection(a, x1, epsilion);
        }
        else {
            return bisection(x1, b, epsilion);
        }
    }
}



int main()
{
    double a = -1.0, b = 1.0;
    //if (f(a) * f(b) < 0) {
    //    cout << "git" << endl;
    //}
    cout<<bisection(a, b, 0.00001)<<endl;
    return 0;
}