// UTS Praktikum Paket B: Fotokopi Kampus.
// Lengkapi TODO 1 sampai TODO 6 sesuai lembar soal. Bagian yang sudah ada jangan diubah kecuali diminta.
// Bangun dengan baseline kelas; program harus bebas warning. Uji dengan: ./fotokopi < contoh_masukan.txt
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int HARGA_KECIL = 300;     // 1 sampai 50 halaman
    const int HARGA_SEDANG = 250;    // 51 sampai 200 halaman
    const int HARGA_BESAR = 200;     // lebih dari 200 halaman
    const int BATAS_KECIL = 50;
    const int BATAS_SEDANG = 200;
    const int MAKS_HALAMAN = 1000;

    int jumlah = 0;
    cout << "=== Fotokopi Kampus ===\n";
    cout << "Jumlah pesanan: ";
    cin >> jumlah;
    while (cin.fail() || jumlah < 1) {           // contoh pembacaan aman; pakai pola ini untuk halaman
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat paling sedikit 1. Jumlah pesanan: ";
        cin >> jumlah;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    int total_halaman = 0;
    int total_pendapatan = 0;
    int banyak_kecil = 0;
    int banyak_sedang = 0;
    int banyak_besar = 0;
    // TODO 5a: deklarasikan penampung biaya terbesar (mulai -1) dan nama pemesannya.
    int biaya_terbesar = -1;
    string nama_terbesar = "";
    
    for (int i = 1; i <= jumlah; i++) {
        string nama;
        int halaman = 0;
        char warna = ' ';

        cout << "\n--- Pesanan ke-" << i << " dari " << jumlah << " ---\n";
        // TODO 1: membaca dan memvalidasi nama pemesan
        
    bool nama_sah = false;
    do {
        cout << "Nama pemesan : ";
        getline(cin, nama);

        bool kosong = true;
        bool ada_angka = false;

        for (char c : nama) {
            if (!isspace(c)) {
                kosong = false;
            }

            if (isdigit(c)) {
                ada_angka = true;
            }
        }

        if (kosong) {
            cout << "Nama tidak boleh kosong.\n";
        } else if (ada_angka) {
            cout << "Nama tidak boleh mengandung angka.\n";
        } else {
            nama_sah = true;
        }

    } while (!nama_sah);

    bool awal_kata = true;

    for (int j = 0; j < nama.length(); j++) {
        if (isspace(nama[j])) {
            awal_kata = true;
        } else {
            if (awal_kata) {
                nama[j] = toupper(nama[j]);
                awal_kata = false;
            } else {
                nama[j] = tolower(nama[j]);
            }
        }
    }

        // TODO 2: baca halaman dengan aman (bilangan bulat 1 sampai MAKS_HALAMAN), pola seperti jumlah di atas.
        //         Pesan penolakan: "Harus bilangan bulat 1 sampai 1000. Halaman: "
        cout << "Halaman (1-" << MAKS_HALAMAN << "): ";
        cin >> halaman;

        while (cin.fail() || halaman < 1 ||
               halaman > MAKS_HALAMAN) {

            cin.clear();
            cin.ignore(1000, '\n');
            
            cout << "Harus bilangan bulat 1 sampai 1000. Halaman: ";
            cin >> halaman;
        }

        cin.ignore(1000, '\n');

        // TODO 3: baca warna (char), jadikan huruf besar, ulangi selama bukan 'Y' atau 'T'.
        //         Pesan penolakan: "Hanya Y atau T. Berwarna (Y/T): "
        cout << "Berwarna (Y/T): ";
        cin >> warna;
        warna = toupper(warna);

        while (warna != 'Y' && warna != 'T') {
            cin.ignore(1000, '\n');

            cout << "Pilihan tidak valid. Masukkan Y atau T: ";
            cin >> warna;
            warna = toupper(warna);
        }

        cin.ignore(1000, '\n');

        // TODO 4: tentukan harga per halaman dari jumlah halaman (kecil, sedang, besar) dan tambah
        //         penghitung kategorinya; biaya = halaman * harga, dikali 2 bila berwarna.
    int biaya = 0;

    if (halaman <= BATAS_KECIL) {
    biaya = halaman * HARGA_KECIL;
    banyak_kecil++;
    } else if (halaman <= BATAS_SEDANG) {
    biaya = halaman * HARGA_SEDANG;
    banyak_sedang++;
    } else {
    biaya = halaman * HARGA_BESAR;
    banyak_besar++;
    }

    if (warna == 'Y') {
    biaya *= 2;
    }
    total_halaman += halaman;
    total_pendapatan += biaya;
        // TODO 5b: perbarui biaya terbesar dan nama pemesannya bila biaya ini lebih besar.
    
    if (biaya > biaya_terbesar) {
    biaya_terbesar = biaya;
    nama_terbesar = nama;
    }
    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah pesanan    : " << jumlah << "\n";
    cout << "Total halaman     : " << total_halaman << "\n";
    cout << "Total pendapatan  : " << total_pendapatan << "\n";
    cout << "Rata-rata halaman : " << static_cast<double>(total_halaman) / jumlah << "\n";
    // TODO 5c: cetak "Terbesar          : " diikuti nama dan biaya terbesar dalam kurung.
    cout << "Terbesar          : " << nama_terbesar
         << " (" << biaya_terbesar << ")\n";
    cout << "\nSebaran ukuran pesanan:\n";
    // TODO 6: tiga baris batang (Kecil, Sedang, Besar) memakai perulangan bersarang:
    //         perulangan luar memilih label dan jumlahnya, perulangan dalam mencetak tanda # sebanyak itu.
    //         Format tiap baris: label rata kiri selebar 7, lalu "| ", batang, spasi, jumlah. Contoh: "Kecil  | ## 2"
    
    string label[3] = {"Kecil", "Sedang", "Besar"};
    int banyak[3] = {banyak_kecil, banyak_sedang, banyak_besar};

    for (int i = 0; i < 3; i++) {
        cout << left << setw(7) << label[i] << "| ";

        for (int j = 0; j < banyak[i]; j++) {
            cout << "#";
        }

        cout << " " << banyak[i] << "\n";
    }

    return 0;
}
