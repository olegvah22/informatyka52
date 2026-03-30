#include <iostream>
using namespace std;

int Silnia(int n) {
    if (n <= 2)
        return 1;
    else
        return Silnia(n - 1) + Silnia(n - 2);
}

int main() {
    int N;
    cout << "Podaj liczbe elemntow:";
    cin >> N;
    int wynik = Silnia(N);
    for(int )
    cout << "ciag fibonacciego: " << Silnia(N) <<endl;
    return 0;
}