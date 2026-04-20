#include<iostream>
using namespace std;

void ZmienWartosc(int *wskaznik) {
	*wskaznik = *wskaznik + 10;
}

int main() {
	int b = 5;
	int a = 10;
	cout << "Przed modyfikacja:" <<endl;
	cout << "a = "<<a <<endl;
	cout << "b = "<<b <<endl;
	
	
	ZmienWartosc(&a);
	ZmienWartosc(&b);
	cout << "Po modyfikacji:"<<endl;
	cout << "a = "<< a <<endl;
	cout << "b = "<< b <<endl;
	

    return 0;
}
