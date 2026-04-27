#include <iostream>

using namespace std;

void DuzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba) {
        cout << "Za malo" << endl;
    } else if (liczba > wylosowanaLiczba) {
        cout << "Za duzo" << endl;
    }
}

bool CheckLiczba(int liczba, int wylosowanaLiczba) {
    if (liczba == wylosowanaLiczba) {
        return true;
    }
    return false;
}

int main() {
    int ziarno; 
    int wylosowana = (ziarno % 100);
    if (wylosowana < 0) wylosowana *= -1;
    wylosowana += 1;

    int strzal;
    bool wygrana = false;

    while (!wygrana) {
        cout << "Podaj liczbe: ";
        cin >> strzal;

        if (CheckLiczba(strzal, wylosowana)) {
            cout << "Gratulacje! Odgadles liczbe." << endl;
            wygrana = true;
        } else {
            DuzaMala(strzal, wylosowana);
        }
    }

    return 0;
}