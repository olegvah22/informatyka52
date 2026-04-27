#include <iostream>

using namespace std;


double CalculateVolume(double a) {
    return a * a * a;
}


double CalculateVolume(double a, double b, double h) {
    return a * b * h;
}


double CalculateVolume(double r, double h) {
    const double pi = 3.1415;
    return pi * r * r * h;
}

void DisplayResult(double wynik) {
    cout << "Objetosc wynosi: " << wynik << endl;
}

int main() {
    int wybor;
    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;
    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    if (wybor == 1) {
        double a;
        cout << "Podaj bok a: ";
        cin >> a;
        DisplayResult(CalculateVolume(a));
    } 
    else if (wybor == 2) {
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        DisplayResult(CalculateVolume(a, b, h));
    } 
    else if (wybor == 3) {
        double r, h;
        cout << "Podaj promien r: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        DisplayResult(CalculateVolume(r, h));
    } 
    else {
        cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}