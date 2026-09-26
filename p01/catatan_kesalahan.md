# Catatan Kesalahan Praktikum 5

## 1. k1_sintaks.cpp
**Nama file:**  
k1_sintaks.cpp

**Jenis kesalahan:**  
Sintaks

**Build:**  
Gagal

**Penyebab:**  
Tanda titik koma (`;`) setelah `int nilai = 80` itu nggak ada.

**Pesan compiler:**  
`k1_sintaks.cpp:7:5: error: expected ',' or ';' before 'std'`

**Cara mengetahuinya:**  
Compiler nunjukin kalo error baris 7 itu karena pernyataan pada baris sebelumnya itu belum diakhiri tanda titik koma (`;`). Jadi, kesalahan sebenarnya ada pada baris 6. 

## 2. k2_nama.cpp

**Nama file:**  
k2_nama.cpp

**Jenis kesalahan:**  
Compile / nama yang belum dikenal

**Build:**  
Gagal

**Penyebab:**  
`Nilai` tidak sama dengan `nilai` karena C++ membedakan huruf besar dan kecil. Selain itu, `bonus` belum pernah dideklarasikan.

**Pesan compiler:**  
`k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?`  
`k2_nama.cpp:9:31: error: 'bonus' was not declared in this scope`

**Cara mengetahuinya:**  
Compiler menghentikan proses build karena `Nilai` berbeda dengan `nilai`dan memang keliatan dari codenya kalo di awal pakai huruf kecil dan yang kedua memakai huruf besar, sedangkan `bonus`itu belum pernah dideklarasikan maka terjadi eror. 

## 3. k3_runtime.cpp

**Nama file:**  
k3_runtime.cpp

**Jenis kesalahan:**  
Runtime

**Build:**  
Berhasil tanpa error dan warning

**Penyebab:**  
Program melakukan pembagian `240 / jumlah_mahasiswa`. Jika jumlah mahasiswa diisi `0`, program melakukan pembagian dengan nol.

**Hasil pengamatan:**  
Saat diberi input `4`, program berjalan normal dan menghasilkan:
`Rata-rata: 60`
kemudian Saat diberi input `0`, program berhenti sebelum menampilkan hasil rata-rata.

**Cara mengetahuinya:**  
Program berhasil di-build tanpa error dan warning. dan Saat dijalankan dengan input `4`, hasilnya normal. tapi saat dijalankan dengan input `0`, program bermasalah karena melakukan pembagian `240 / 0`. 

---

## 4. k4_logika.cpp

**Nama file:**  
k4_logika.cpp

**Jenis kesalahan:**  
Logika

**Build:**  
Berhasil

**Penyebab:**  
Masalahnya sama seperti yang saya temui saat membuat `rerata.cpp`, yaitu pembagian bilangan bulat. Pada program ini, `tugas`, `uts`, dan `uas` bertipe `int`, sehingga:`(80 + 75 + 90) / 3 = 245 / 3 = 81` Bagian desimalnya dibuang, sehingga hasilnya menjadi `81` dan bukan `81.67`.

**Pesan yang muncul:**  
Tidak ada pesan error atau warning. Program berhasil dibangun dan berjalan.

**Hasil pengamatan:**  
Program menghasilkan:`Rata-rata: 81`

Padahal hasil yang seharusnya adalah:`Rata-rata: 81.67`

**Cara mengetahuinya:**  
Saya membandingkan hasil program dengan hasil yang seharusnya. Dari perbandingan tersebut terlihat bahwa program dapat berjalan dengan baik, tetapi hasil perhitungannya salah. 

## Refleksi
Menurut saya, kesalahan sintaks adalah yang paling berbahaya karena misalnya kode sudah banyak dan panjang, ternyata kesalahannya bukan hanya satu sintaks saja. Hal itu membuat saya pusing dan kesusahan untuk menemukan kesalahan satu per satu, sehingga proses memperbaikinya menjadi lebih sulit.