#include <iostream>
using namespace std;
int main(){
	int a;
	int liczba;
cout << "Podaj liczbe N: ";
cin >> liczba;
	cout << "Kwadraty liczb od 1 do " << liczba << ":" << endl;
	for(int i = 1; i <= liczba; i++){
		cout << i << "^2=" << i*i <<endl;
		
}
	
	
    return 0;
}