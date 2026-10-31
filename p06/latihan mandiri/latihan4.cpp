
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    cout << "TABEL KONVERSI NILAI\n\n";
    cout << left << setw(15) << "Nilai"
         << setw(15) << "Huruf Mutu"
         << "Deskripsi" << endl;

    cout << "-----------------------------------------------\n";

for (int nilai = 100; nilai >= 0; nilai -= 5) {
    char huruf;
    string deskripsi;

    if (nilai >= 80) {
        huruf = 'A';
        deskripsi = "Sangat Baik";
    } else if (nilai >= 75) {
        huruf = 'B';
        deskripsi = "Baik";
    } else if (nilai >= 70) {
        huruf = 'B';
        deskripsi = "Baik";
    } else if (nilai >= 65) {
        huruf = 'C';
        deskripsi = "Cukup Baik";
    } else if (nilai >= 60) {
        huruf = 'C';
        deskripsi = "Cukup";
    } else if (nilai >= 40) {
        huruf = 'D';
        deskripsi = "Kurang";
    } else {
        huruf = 'E';
        deskripsi = "Sangat Kurang";
    }

    cout << left << setw(15) << nilai
         << setw(15) << huruf
         << deskripsi << endl;
    }

    return 0;
}
