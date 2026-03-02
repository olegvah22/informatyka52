#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Podaj ciag znakow (Max 20 znaków): ";
    getline(cin, text);
    cout << "Wprowadzony ciag znakow: " << text << endl;
    return 0;
}