#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
private:
    string imie;
    string nazwisko;
    string pesel;

public:
    Person(const string& imie_ = "", const string& nazwisko_ = "", const string& pesel_ = "")
        : imie(imie_), nazwisko(nazwisko_), pesel(pesel_) {}

    string getImie() const { return imie; }
    string getNazw() const { return nazwisko; }
    string getPesel() const { return pesel; }

    virtual string to_string() const {
        return "Imię: " + imie + "\nNazwisko: " + nazwisko + "\nPESEL: " + pesel;
    }
};

class Student : public Person 
{
private:
    string numerIndeksu;
    string kierunek;

public:
    Student(const string& imie_, const string& nazwisko_, const string& pesel_,
        const string& numerIndeksu_, const string& kierunek_)
        : Person(imie_, nazwisko_, pesel_), numerIndeksu(numerIndeksu_), kierunek(kierunek_) {}

    string to_string() const override {
        return Person::to_string() + "\nNumer indeksu: " + numerIndeksu + "\nKierunek studiów: " + kierunek;
    }

    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.to_string();
        return os;
    }
};



int main() 
{
    vector<Person*> people;

    people.push_back(new Person("Jan", "Kowalski", "12345678901"));
    people.push_back(new Student("Oliwia", "Kubic", "98765432109", "413411", "EiT"));
    people.push_back(new Person("Anna", "Nowak", "11122334455"));

    // Wypisywanie stanu każdego obiektu w wektorze
    for (const auto& person : people) {
        cout << person->to_string() << "\n\n";
    }

    // Usuwanie obiektów z wektora
    for (const auto& person : people) {
        delete person;
    }

    return 0;
}
