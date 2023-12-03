/*
Dany jest wektor v liczb całkowitych. Napisz wyrażenie (jedno dla każdego punktu), które:
a) przypisze pierwszemu elementowi wektora wartość -1,
b) przypisze przedstawionemu elementowi wartość wektora 1,
c) wstawi do wektora nową wartość 5 na trzecim miejscu, licząc od początku,
d) usunie środkowy element wektora (przyjmij, że w wektorze jest nieparzysta liczba elementów),
e) przyjmie logiczną wartość true w przypadku, gdy wektor jest pusty (5 pkt)
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v = { 9, 9, 9, 9, 9 };
v[0] = -1;
v[v.size()-2] = 1;
v.insert(v.begin() + 2, 5);
v.erase(v.begin() + v.size() / 2);

bool is_empty = v.empty();
cout<<"Czy wektor jest pusty?: "<<is_empty<<endl;

for (int element : v) { 
    cout << element << " "; }
cout << endl;
return 0;
}

