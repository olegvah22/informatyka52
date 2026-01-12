#include <iostream>
using namespace std;
int main(){
	int wysokosc, szerokosc;
    int liczba;

cout << "Podaj liczb4
cin >> wysokosc;
cout << "Podaj szerokosc prostokata: ";
cin >> szerokosc;


for (int i = 0; i < wysokosc; i++) {

    for (int j = 0; j < szerokosc; j++) {   
        cout << " * ";
    }
    cout << endl;
}
    return 0;
}