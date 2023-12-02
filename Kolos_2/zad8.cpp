/*
Napisz program, kt�ry pobierze z wiersza polecen� jeden wyraz, a nastepnie wypisze na ekranie komunikat czy jest on palindromem czy nie. 

Dla przypomnienia palindrom to slowo brzmiace tak samo zar�wno wtedy, gdy jest czytane od lewej do prawej, 
jak i wtedy gdy jest czytanie na odwrót. 
Na przyk�ad s�owa owocowo, radar, sedes s� palindromami, za� s�owa dom oraz komputer - nie s� 
Program powinien sprawdza� czy wprowadzone s�owo jest palindromem, za pomoc� funkcji rekurencyjnej (3 pkt)
*/

#include <iostream>

using namespace std;

bool palindrome(string text)
{
	if (text.size() <= 1)
		return true;
	else
	{
		if (text[0] == text[text.size() - 1])
			return palindrome(text.substr(1, text.size() - 2));
		else
			return false;
	}
}

int main(){
    cout << palindrome("assa") << endl;
}
