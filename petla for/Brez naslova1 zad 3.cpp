#include <iostream>
using namespace std;
int main(){
	int a;
	int liczba;
cout << "Podaj liczbe N: ";
cin >> liczba;
	cout << "Liczba nieparzysta od 1 do " << liczba << ":" << endl;
	for(int i = 1; i <= liczba; i+=2){
			cout << i <<endl;
	
	}
		

	
	
    return 0;
}