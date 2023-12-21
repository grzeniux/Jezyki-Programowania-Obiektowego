
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Record{
public:
    string fFilm;
    string fMusic;

    Record( string film, string music) : fFilm{ film }, fMusic{ music }
    {}
};

int main()
{
    unsigned char znak;
    std::fstream file("C:\\Users\\Kuba\\Desktop\\jpo\\lab3\\z6_vector\\baza.txt");

    if (!file.is_open()) {
        return 0;
    }
    std::vector <Record> para;
    cout << "Baza Osob\n1.-Add record\n2.-Remove record\n3.-Read records\n4.-Quit";
    do {
        znak = _getch();
        switch (znak) {
        case '1':
        {
            string film, muza;
            do {
                cout << endl;
                cout << "adding record" << endl;
                cout << "write film:";
                cin >> film;
                cout << "write a song:";
                cin >> muza;
                para.push_back(Record(film, muza));
            } while (para.size() < 5);
            for (int i = 0; i < para.size(); i++) {
                file << i+1<< ": ";
                file << "film: " << para[i].fFilm << " muza: " << para[i].fMusic << endl;
            }
            break;
        }
        case '2':
        {
           string del;
           size_t pos, pos2;
           //cout << "\nWhat record do you want to delete? :";
           //cin >> del;
           do {
               getline(file, del);
               pos = del.find("2");
               if (pos != string::npos) {
                   for (auto znak : del) {
                       //pos2 = del.find(znak);
                       //del.replace()
                       del.pop_back();
                   }
               }
           } while (del != "");
        
        }
        case'3':
        {
            string nazwa;
            cout << endl;
            do {
                getline(file, nazwa);
                cout << nazwa << endl;
            } while (nazwa != "");
            break;
        }
            
        }
    } while (znak != '4');
    return 0;

}
