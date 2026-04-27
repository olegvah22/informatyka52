#include <iostream>

using namespace std;

int main() {
    char tekst[100];
    char odwrocony[100];


    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

  
    int dlugosc = 0;
    while (tekst[dlugosc] != '\0') {
        dlugosc++;
    }


    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }


    odwrocony[dlugosc] = '\0';


    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}