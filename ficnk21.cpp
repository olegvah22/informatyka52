#include <iostream>
using namespace std;

int Silnia(int n) {
    if (n == 1)
        return 1;
    else
        return n + Silnia(n - 1);
}

int main() {
    int wynik = Silnia(5);
    cout << "5! = " << wynik << endl; // Wyswietli: 5! = 120
    return 0;
}