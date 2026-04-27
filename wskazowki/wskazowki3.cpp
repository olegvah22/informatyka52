#include<iostream>
using namespace std;


void ObliczSume(int *suma) {
	for (int i = 0; i < i; i++) {
        *suma +=i;

		
		
	}


}
	
	
	
int main()  {
int tablica[4];
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
 ObliczSume(&a);
 ObliczSume(&b);
 ObliczSume(&c);
 ObliczSume(&d);
 
 cout << "Nowa suma elementow tablicy: "<< ObliczSume <<endl;


	return 0;
}