/*
Dany jest wektor v liczb ca³kowitych. Napisz wyra¿enie (jedno dla ka¿dego punktu), które:
a) przypisze pierwszemu elementowi wektora wartoœæ -1,
b) przypisze przedstawionemu elementowi wartoœæ wektora 1,
c) wstawi do wektora now¹ wartoœæ 5 na trzecim miejscu, licz¹c od pocz¹tku,
d) usunie œrodkowy element wektora (przyjmij, ¿e w wektorze jest nieparzysta liczba elementów),
e) przyjmie logiczn¹ wartoœæ true w przypadku, gdy wektor jest pusty (5 pkt)
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