#include <iostream>

using namespace std;

int main() {
    double masa, wzrost, bmi;

    cout << "Podaj wage (w kg): ";
    cin >> masa;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

   
    bmi = masa / (wzrost * wzrost);

    cout << "\nTwoje BMI wynosi: " << bmi << endl;


    cout << "Twoj stan wagowy: ";
    
    if (bmi < 18.5) {
        cout << "Niedowaga" << endl;
    } 
    else if (bmi <= 24.9) {
        cout << "W normie" << endl;
    } 
    else if (bmi <= 29.9) {
        cout << "Nadwaga" << endl;
    } 
    else {
        cout << "Otylosc" << endl;
    }

    return 0;
}