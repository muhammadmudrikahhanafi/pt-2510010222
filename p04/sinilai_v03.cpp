#include <iostream>
#include <string>

using namespace std;

int main() {
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    string nama;
    string npm;
    double kehadiran = 0;
    double mingguan = 0;
    double uts = 0;
    double uas = 0;

    cout << "=== SiNilai v0.3 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    cin >> npm;
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    double nilai_akhir = kehadiran * BOBOT_KEHADIRAN + mingguan * BOBOT_MINGGUAN
                       + uts * BOBOT_UTS + uas * BOBOT_UAS;

    // TODO 1: deklarasikan string huruf_mutu, lalu isi dengan if-else bertingkat sesuai tabel di atas.
    //         Mulai dari batas tertinggi (80) turun ke bawah. Pikirkan kasus batas: 79.9, 80, 59.9, 60.
  string huruf_mutu;
    if (nilai_akhir >= 80) {
        huruf_mutu = "A";
    } else if (nilai_akhir >= 75) {
        huruf_mutu = "B+";
    } else if (nilai_akhir >= 70) {
        huruf_mutu = "B";
    } else if (nilai_akhir >= 65) {
        huruf_mutu = "C+";
    } else if (nilai_akhir >= 60) {
        huruf_mutu = "C";
    } else if (nilai_akhir >= 40) {
        huruf_mutu = "D";
    } else {
        huruf_mutu = "E";
    }
    // TODO 2: deklarasikan bool lulus. Aturan SiNilai: lulus bila huruf mutu minimal C
    //         (dengan kata lain, nilai_akhir >= 60).
     bool lulus = nilai_akhir >= 60;

    // TODO 3: deklarasikan string keterangan. Isi dengan switch pada huruf pertama huruf_mutu
    //         (huruf_mutu[0] bertipe char): 'A' Sangat baik, 'B' Baik, 'C' Cukup,
    //         'D' Kurang, 'E' Sangat kurang. Ingat break.
string keterangan ;
    switch (huruf_mutu[0]) {
        case 'A':
        keterangan ="sangat baik";
        break;
        case 'B':
        keterangan ="Baik";
        break;
        case 'C':
        keterangan ="Cukup";
        break;
        case 'D':
        keterangan ="Kurang";
        break;
        default :
        keterangan ="sangat Kurang";
        break;
    }

    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Nilai akhir : " << nilai_akhir << "\n";
    cout << "Huruf mutu  : " << huruf_mutu<< "\n";
    cout << "Keterangan  : " << keterangan << "\n";
    // TODO 4: tampilkan Huruf mutu, Keterangan, dan Status (Lulus / Belum lulus) sejajar.
if (lulus){
    cout <<"status: lulus\n"; 
} else {
    cout <<"status: belum lulus\n";
}
    return 0;
}
