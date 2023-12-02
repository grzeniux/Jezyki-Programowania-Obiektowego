/*
Napisz program, który pobierze z wiersza polecen„ jeden wyraz, a nastepnie wypisze na ekranie komunikat czy jest on palindromem czy nie. 

Dla przypomnienia palindrom to slowo brzmiace tak samo zarówno wtedy, gdy jest czytane od lewej do prawej, 
jak i wtedy gdy jest czytanie na odwrÃ³t. 
Na przyk³ad s³owa owocowo, radar, sedes s¹ palindromami, zaœ s³owa dom oraz komputer - nie s¹ 
Program powinien sprawdzaæ czy wprowadzone s³owo jest palindromem, za pomoc¹ funkcji rekurencyjnej (3 pkt)
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
