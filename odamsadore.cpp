#include <iostream>
using namespace std;

int main() {
    string imie;
    int wiek;

    cout << "twoje imie: ";
    cin >> imie;
    cout << "ile masz lat: ";
    cin >> wiek;

    cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << endl;

    return 0;
}
