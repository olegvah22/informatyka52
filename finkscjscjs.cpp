#include <iostream>
using namespace std;

int Silnia(int n) {
    if (n == 1)
        return 1;
    else
        return n + Silnia(n - 1);
}

int main() {
    int N;
    cout << "Podaj liczbe:";
    cin >> N;
    int wynik = Silnia(N);
    cout << "Suma liczb od 1 do " << N << " wynosi " << wynik <<endl;
    return 0;
}