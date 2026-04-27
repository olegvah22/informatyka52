#include <iostream>

using namespace std;

void LosujTablice(int *tab, int rozmiar, int poczatek, int koniec) {
    int ziarno; 
    for (int i = 0; i < rozmiar; i++) {
        int losowa = poczatek + (ziarno + i * 31) % (koniec - poczatek + 1);
        if (losowa < poczatek) losowa = poczatek + ((losowa - poczatek) * -1) % (koniec - poczatek + 1);
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
    int ileLiczb, start, stop;

    cout << "Ile liczb wylosowac? ";
    cin >> ileLiczb;
    cout << "Wartosc poczatkowa: ";
    cin >> start;
    cout << "Wartosc koncowa: ";
    cin >> stop;

    int *tablica = new int[ileLiczb];

    LosujTablice(tablica, ileLiczb, start, stop);

    cout << "Tablica: ";
    for (int i = 0; i < ileLiczb; i++) {
        cout << tablica[i] << (i == ileLiczb - 1 ? "" : ", ");
    }
    cout << endl << endl;

    int podanaLiczba;
    int proby = 0;
    bool czyTrafiono = false;

    while (!czyTrafiono) {
        cout << "Podaj liczbe: ";
        cin >> podanaLiczba;
        proby++;

        if (SprawdzLiczbe(&podanaLiczba, tablica, ileLiczb)) {
            cout << "Zgadles!" << endl;
            czyTrafiono = true;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    cout << "Zgadles za " << proby << " razem." << endl;

    delete[] tablica;
    return 0;
}