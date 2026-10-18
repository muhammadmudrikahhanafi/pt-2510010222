
#include <iostream>
using namespace std;

int main() {
    char pilihan;

    cout << "=== Menu ===\n";
    cout << "1. Menampilkan kartu nilai\n";
    cout << "2. Menghitung ulang\n";
    cout << "3. Sampai jumpa\n";
    cout << "k. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case '1':
            cout << "Menampilkan kartu nilai...\n";
            break;

        case '2':
            cout << "Menghitung ulang...\n";
            break;

        case '3':
            cout << "Sampai jumpa.\n";
            break;

        case 'k':
            cout << "Keluar dari program.\n";
            break;

        default:
            cout << "Pilihan tidak dikenal.\n";
    }

    return 0;
}
