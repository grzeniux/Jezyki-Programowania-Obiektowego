#include <iostream>
#include <vector>
#include <algorithm>

using std::vector, std::string, std::cout, std::endl;

void print(const vector<string> &shoppingList) {
	for (const string &item : shoppingList) {
		cout << item << endl;
	}
	cout << endl;
}

int main()
{
	//------------------------- ver1 -------------------------

	// a) + b) creating an empty vector, adding items and displaing the list
	vector<string> shoppingList;

	cout << "Empty shopping list: " << endl;
	print(shoppingList);

	shoppingList.push_back("wino");
	shoppingList.push_back("buraki");
	shoppingList.push_back("banany");
	shoppingList.push_back("cukier");
	shoppingList.push_back("czekolada");
	shoppingList.push_back("marchew");

	cout << "Shopping list after adding the items: " << endl;
	print(shoppingList);

	// c) display last item on the list and delete it  
	cout << "Last item on the list: " << shoppingList.back() << endl;
	shoppingList.pop_back();
	cout << "List after deleting the last item: " << endl;
	print(shoppingList);

	// d) Add "kawa" as the third element in the vector
	shoppingList.insert(shoppingList.begin() + 2, "kawa");
	cout << "List after adding KAWA as the third element: " << endl;
	print(shoppingList);

	// e) Change cukier to cukierki
	for (string &item : shoppingList) {
		if (item == "cukier") {
			item = "cukierki";
		}
	}
	cout << "List after exchanging cukier to cukierki: " << endl;
	print(shoppingList);

	// f) find czekolada and delete it from the list
	int cnt{ 0 };
	for (string& item : shoppingList) {
		if (item == "czekolada") {
			shoppingList.erase(shoppingList.begin()+ cnt);
		}
		cnt++;
	}
	cout << "List after deleting czekolada: " << endl;
	print(shoppingList);

	// g) sort the vector with SORT function
	sort(shoppingList.begin(), shoppingList.end());
	cout << "List after sorting: " << endl;

	for (auto i : shoppingList) {
		cout << i << endl;
	}



	//--------------------ver2 (without the print function and pushing back the items)---------------------------
	/*
	int cnt{ 0 };
	vector <string> zakupy{ "wino", "buraki", "banany", "cukier", "czekolada", "marchew" };
	cout << zakupy.back() << endl;
	zakupy.pop_back();
	cout << zakupy.back() << endl;
	zakupy.insert(zakupy.begin() + 2, "kawa");

	for (auto i : zakupy) {
		cout << i << endl;
	}


	for (auto i : zakupy) {

		if (i == "cukier") {
			i = "cukierki";
		}
		if (i == "czekolada") {
			zakupy.erase(zakupy.begin() + cnt);

		}
		cnt++;
	}
	for (auto i : zakupy) {
		cout << i << endl;
	}
	sort(zakupy.begin(), zakupy.end());

	for (auto i : zakupy) {
		cout << i << endl;
	}
	 



	*/
}