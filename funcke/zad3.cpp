#include <iostream>

using namespace std;

void GetTextFromUser(char tab[], int rozmiar) {
    cout << "Podaj ciag znakow: ";
    cin.getline(tab, rozmiar);
}

void ReverseString(char tab[]) {
    int dlugosc = 0;
    
    while (tab[dlugosc] != '\0') {
        dlugosc++;
    }

    for (int i = 0; i < dlugosc / 2; i++) {
        char temp = tab[i];
        tab[i] = tab[dlugosc - 1 - i];
        tab[dlugosc - 1 - i] = temp;
    }
}

void DisplayResult(char tab[]) {
    cout << "Odwrocony ciag: " << tab << endl;
}

int main() {
    char tekst[100];

    GetTextFromUser(tekst, 100);
    ReverseString(tekst);
    DisplayResult(tekst);

    return 0;
}