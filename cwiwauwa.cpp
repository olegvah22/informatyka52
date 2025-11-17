#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj dodatnia liczbe calkowita N: ";
    cin >> N;

    int i = 2; // pierwsza liczba parzysta

    while (i <= N) {
        cout << i << endl;
        i += 2; // przejście do kolejnej liczby parzystej
    }

    cout << "Koniec programu." << endl;

    return 0;
}