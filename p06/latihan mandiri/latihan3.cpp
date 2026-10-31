
#include <iostream>
using namespace std;

int main() {
    int n;
    double nilai, total = 0;
    int jumlah_valid = 0;
    int jumlah_invalid = 0;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            jumlah_invalid++;
            continue;
        }

        total += nilai;
        jumlah_valid++;
    }

    cout << "\nJumlah nilai valid: " << jumlah_valid << endl;
    cout << "Jumlah nilai tidak valid: " << jumlah_invalid << endl;

    if (jumlah_valid > 0) {
        double rata_rata = total / jumlah_valid;
        cout << "Rata-rata nilai valid: " << rata_rata << endl;
    } else {
        cout << "Tidak ada nilai valid untuk dihitung." << endl;
    }

    return 0;
}
