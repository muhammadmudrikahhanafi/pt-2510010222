#include <iostream>

using namespace std;

int main() {
    int total_detik;

    cout << "Masukkan jumlah detik : ";
    cin >> total_detik;

    int jam = total_detik / 3600;
    int sisa = total_detik % 3600;
    int menit = sisa / 60;
    int detik = sisa % 60;

    cout << "Jam   : " << jam << "\n";
    cout << "Menit : " << menit << "\n";
    cout << "Detik : " << detik << "\n";

    return 0;
}