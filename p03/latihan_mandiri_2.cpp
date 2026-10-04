#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;

    cout << "Masukkan bilangan kedua   : ";
    cin >> b;

    int hasil_bagi = a / b;
    int sisa = a % b;

    cout << a << " dibagi " << b << " adalah "
         << hasil_bagi << " sisa " << sisa << "\n";

    return 0;
}