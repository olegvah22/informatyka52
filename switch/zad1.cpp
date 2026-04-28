#include <iostream>
using namespace std;

int main() {
    int liczba1, liczba2;
    char dzialanie;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> dzialanie;

    if (dzialanie == '+') {
        cout << "Wynik: " << liczba1 + liczba2;
    }
    else if (dzialanie == '-') {
        cout << "Wynik: " << liczba1 - liczba2;
    }
    else if (dzialanie == '*') {
        cout << "Wynik: " << liczba1 * liczba2;
    }
    else if (dzialanie == '/') {
        if (liczba2 != 0) {
            cout << "Wynik: " << liczba1 / liczba2;
        } else {
            cout << "Blad: nie mozna dzielic przez zero!";
        }
    }
    else {
        cout << "Blad: nieznany znak dzialania!";
    }

    return 0;
}