/*
Dany jest wektor v liczb ca�kowitych. Napisz wyra�enie (jedno dla ka�dego punktu), kt�re:
a) przypisze pierwszemu elementowi wektora warto�� -1,
b) przypisze przedstawionemu elementowi warto�� wektora 1,
c) wstawi do wektora now� warto�� 5 na trzecim miejscu, licz�c od pocz�tku,
d) usunie �rodkowy element wektora (przyjmij, �e w wektorze jest nieparzysta liczba element�w),
e) przyjmie logiczn� warto�� true w przypadku, gdy wektor jest pusty (5 pkt)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int>v={9,9,9,9,9};
v[0] = -1;
v[v.size() -2] = 1;
v.insert(v.begin() + 2, 5);
v.erase(v.begin() + v.size() / 2);
bool is_empty = v.empty();
cout<<"Czy wektor jest pusty?: "<<is_empty<<endl;

for( int element : v)
{
cout << element << " ";
}

return 0;
}