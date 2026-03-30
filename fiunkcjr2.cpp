#include <iostream>
using namespace std;

int Suma(int a, int b) {
    return a + b;
}

int Roznica(int a, int b) {
    return a - b;
}
int Iloczyn(int a, int b) {
    return a / b;
}
int Iloraz(int a, int b) {
    return a * b;
}
int Wyjscie(int a, int b) {
    return a - b;
}

int main() {
int N;
int a;
int b;
int wynik;
 cout << "1. Suma"<<endl;
 cout << "2. Roznica" << endl;
 cout << "3. Iloczyn" << endl;
 cout << "4. Iloraz" << endl;
 cout << "0. Wyjscie" << endl;
 	cin >> N;
 	 cout << "Podaj pierwsza liczbe: "<<endl;
	cin >> a;
	
	cout << "Podaj druga liczbe: "<<endl;
	cin >> b;
switch(N) {
 case 1:
 	cout << "1. Suma" << endl;
 	wynik = Suma(a, b);
 	cout << "wynik: " << wynik << endl;
 	break;
 	
 case 2:
 	cout << "2. Roznica" << endl;
 	wynik = Roznica(a, b);
 	cout << "wynik: " << wynik << endl;
 	break;
 case 3:
 	cout << "3. Iloczyn" << endl;
 	wynik = Iloczyn(a, b);
 	cout << "wynik: " << wynik << endl;
 	break;
 case 4:
 	cout << "4. Iloraz" << endl;
 	cout << "wynik: " << wynik << endl;
 	wynik = Iloraz(a, b);
 	break;
 case 0:
 	cout << "0. Wyjscie" << endl;
 	break;
 	
 	
}
 


  return 0;	
}