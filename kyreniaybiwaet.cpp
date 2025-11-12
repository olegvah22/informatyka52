#include <iostream>
using namespace std;

int main() {
char znak;
	int liczba1, liczba2;

		cout << "Wubierz liczbe" << endl;
			cin >> liczba1;
			
		cout << "Wubierz liczbe" << endl;
			cin >> liczba2;
			
		cout << "podaj znak dziłania (+, -, *, /): " ;
cin >> znak;

switch(znak) {

	case '+':
		cout << "wynik:" << liczba1+liczba2 << endl;
		break;
	case '-':
		cout << "wynik:" << liczba1-liczba2 << endl;
		break;
	case '*':
		cout << "wynik:" << liczba1*liczba2<< endl;
		break;
	case '/':
		cout << "wynik:" << liczba1/liczba2 << endl;
		break;

  }
  return 0;
		
}