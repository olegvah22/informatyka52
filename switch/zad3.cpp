#include <iostream>
using namespace std;

int main() {
    int godziny;
    char pojazd;
    int oplata;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;

    switch (pojazd) {
        case 'S':
        case 's':
            oplata = godziny * 5;
            cout << "Oplata za parkowanie: " << oplata << " zl";
            break;

        case 'M':
        case 'm':
            oplata = godziny * 3;
            cout << "Oplata za parkowanie: " << oplata << " zl";
            break;

        case 'A':
        case 'a':
            oplata = godziny * 10;
            cout << "Oplata za parkowanie: " << oplata << " zl";
            break;

        default:
            cout << "Blad: nieznany rodzaj pojazdu!";
    }

    return 0;
}