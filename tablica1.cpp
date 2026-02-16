#include <iostream>
using namespace std;

int main(){
	
int tablica[5];
int suma=0;
int max=5;
cout << "podaj liczbe calkowite" <<endl;
 for (int i = 0; i < max; i++) {
 
 	cout << "podaj liczbe nr " << i+1 << ": ";
 	cin >> tablica[i];
 	suma+=tablica[i];
}

	cout << "Srednia Liczb: " << suma/max <<endl;

	return 0;
}