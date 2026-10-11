
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double terbesar;

cout << "Masukkan angka pertama: ";
    cin >> a;
cout << "Masukkan angka kedua: ";
    cin >> b;
cout << "Masukkan angka ketiga: ";
    cin >> c;
if (a >= b && a >= c) {
    terbesar = a;
} else if (b >= a && b >= c) {
    terbesar = b;
} else {
    terbesar = c;
    }
cout << "Angka terbesar: " << terbesar << endl;

    return 0;
}
