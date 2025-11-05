#include <iostream>
using namespace std;

int main() {
    int liczba_calkowita = 10;
    float liczba_zmiennoprzecinkowa = 3.14;
    char znak = 'A';
    bool logiczna = true;

    cout << "Zmienna calkowita: " << liczba_calkowita << endl;
    cout << "Zmienna zmiennoprzecinkowa: " << liczba_zmiennoprzecinkowa << endl;
    cout << "Zmienna znakowa: " << znak << endl;
    cout << "Zmienna logiczna: " << (logiczna ? "true" : "false") << endl;

    return 0;
}
