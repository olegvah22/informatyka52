#include <iostream>
using namespace std;

int main() {
	int a = 20;
	int b = 40;
	cout << "Liczba pierwsa: " << a << endl;
	cout << "Liczba druga: " << b << endl;
	cout << "suma: " << a + b << endl;
	int suma = a + b;
	if(suma%2==0){
	cout << "Suma jest liczbą parzystą";
	} 
	else{
	cout << "suma jest parzystą";
	}
    return 0;
}
