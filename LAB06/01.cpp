#include <iostream>
using namespace std;

int silnia(int num)
{
    while (num != 0)
    {
        return num * silnia(num - 1);
    }
}

int main()
{
    cout << "Silnia z 4: ";
    cout << silnia(4) << endl;

}
