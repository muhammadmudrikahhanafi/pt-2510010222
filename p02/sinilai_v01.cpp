// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.
// Lengkapi bagian TODO. Versi ini belum menghitung apa-apa; itu tugas Pertemuan 3.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: deklarasikan variabel untuk nama dan NPM.
    //         Nama bisa lebih dari satu kata. NPM adalah deretan angka yang tidak pernah
    //         dihitung, dan bisa diawali 0, jadi pikirkan tipe yang tepat.
    string nama="Siti Aminah";
    string npm="2024010101";
    string program_studi = "Teknik Informatika";
    // TODO 2: deklarasikan empat variabel nilai: kehadiran, mingguan, uts, uas.
    //         Nilai bisa berisi pecahan seperti 85.5.
    
    double kehadiran = 100;
    double mingguan = 85.5;
    double uts = 78;
    double uas = 80;
    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama          : " << nama << "\n";
    cout << "NPM           : " << npm << "\n";
    cout << "Program Studi : " << program_studi << "\n";
    cout << "Kehadiran     : " << kehadiran << "\n";
    cout << "Mingguan      : " << mingguan << "\n";
    cout << "UTS           : " << uts << "\n";
    cout << "UAS           : " << uas << "\n";

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama          : " << nama << "\n";
    cout << "NPM           : " << npm << "\n";
    cout << "Program Studi : " << program_studi << "\n";
    cout << "Kehadiran     : " << kehadiran << "\n";
    cout << "Mingguan      : " << mingguan << "\n";
    cout << "UTS           : " << uts << "\n";
    cout << "UAS           : " << uas << "\n";
    return 0;
}
