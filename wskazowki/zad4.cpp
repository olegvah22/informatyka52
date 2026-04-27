#include <iostream>

using namespace std;

void LosujTablice(int *tab, int rozmiar) {
    int ziarno; 
    for (int i = 0; i < rozmiar; i++) {
        int losowa = (ziarno + i * 17) % 51;
        if (losowa < 0) losowa *= -1;
        *(tab + i) = losowa;
    }
}

bool SprawdzLiczbe(int *liczbaUzytkownika, int *tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*(tab + i) == *liczbaUzytkownika) {
            return true;
        }
    }
    return false;
}

int main() {
    const int rozmiar = 10;
    int tablica[rozmiar];
    int podanaLiczba;
    int proby = 0;
    bool czyTrafiono = false;

    LosujTablice(tablica, rozmiar);

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << ", ";
    }
    cout << endl;

    while (!czyTrafiono) {
        cout << "Podaj liczbe: ";
        cin >> podanaLiczba;
        proby++;

        if (SprawdzLiczbe(&podanaLiczba, tablica, rozmiar)) {
            cout << "Zgadles!" << endl;
            czyTrafiono = true;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    cout << "Zgadles za " << proby << " razem." << endl;

    return 0;
}