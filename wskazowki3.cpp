#include<iostream>
using namespace std;


void ObliczSume(int *suma) {
	*suma = *suma + *suma;


}
	
	
	
	
	int main() {
int a;
int b;
int c;
int d;
	cout << "Podaj nowa wartosc dla elementu 0: ";
	cin >> a;
	cout << "Podaj nowa wartosc dla elementu 1: ";
	cin >> b;
	cout << "Podaj nowa wartosc dla elementu 2: ";
	cin >> c;
	cout << "Podaj nowa wartosc dla elementu 3: ";
	cin >> d;
	
cout << "Nowa tablica:" <<endl;
cout <<  a << " "<<  b << " " <<  c << " " <<  d << endl;

cout << "Nowa suma elementow tablicy: " <<endl;


	return 0;
}