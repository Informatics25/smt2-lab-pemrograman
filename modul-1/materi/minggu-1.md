# Minggu 1: Bagaimana Program Sebenarnya Berjalan

## 1. Kompiler, Toolchain, dan Model Eksekusi (Motivasi)
Sebelum menulis satu baris kode C++, kita harus memahami apa yang terjadi antara mengetik kode dan melihat *output*[cite: 1]. Model mental ini mencegah kebingungan tentang pesan kesalahan, *flag build*, dan perbedaan platform[cite: 1].

C++ berada pada lapisan abstraksi yang dekat dengan perangkat keras[cite: 1]. Hal ini memberikan kontrol halus kepada pemrogram atas memori dan performa, yang menjadi alasan mengapa C++ mendominasi pemrograman kompetitif dan perangkat lunak sistem[cite: 1].

## 2. Empat Tahap Alur Kompilasi
Kompilasi kode C++ (misalnya `main.cpp`) tidak terjadi dalam satu langkah. Ada empat tahap utama yang dilewati:

1. **Pre-prosesor:** Menangani semua direktif `#`: memperluas `#include` (memasukkan konten *header*), mengganti makro `#define`, menghapus komentar, memproses `#ifdef`/`#ifndef`[cite: 1]. Output tahap ini adalah teks C++ murni tanpa direktif (file `.i`)[cite: 1].
2. **Kompiler:** Menganalisis sumber C++ yang telah diperluas, memeriksa sintaks, melakukan pengecekan tipe, dan menerjemahkannya ke bahasa *assembly* untuk arsitektur CPU target[cite: 1]. Output tahap ini adalah file *assembly* yang dapat dibaca manusia (file `.s`)[cite: 1].
3. **Assembler:** Mengonversi mnemonik *assembly* menjadi kode mesin biner[cite: 1]. Output tahap ini adalah file objek biner yang berisi kode mesin dan tabel simbol (file `.o`)[cite: 1].
4. **Linker:** Menggabungkan satu atau lebih file `.o` dengan kode pustaka (*library*); menyelesaikan semua referensi simbol (seperti panggilan fungsi atau variabel global) ke alamat memori yang sebenarnya[cite: 1]. Output akhirnya adalah biner eksekusi (seperti `a.out` atau nama via `-o`)[cite: 1].

## 3. Tabel Referensi Flag GCC
Gunakan *flag* berikut saat melakukan kompilasi dengan `g++`:

| Flag | Kategori | Efek |
| :--- | :--- | :--- |
| `-std=c++17` | Standar | Gunakan standar bahasa C++17 (direkomendasikan)[cite: 1]. |
| `-std=c++14` | Standar | Gunakan C++14 (umum di juri *online*/OJ)[cite: 1]. |
| `-Wall` | Peringatan | Aktifkan sebagian besar peringatan umum[cite: 1]. |
| `-Wextra` | Peringatan | Aktifkan peringatan tambahan[cite: 1]. |
| `-O2` | Optimasi | Optimasi tingkat 2 (cepat, aman untuk *Competitive Programming*)[cite: 1]. |
| `-O0` | Optimasi | Tanpa optimasi (lebih mudah untuk *debug*)[cite: 1]. |
| `-g` | Debug | Sertakan simbol *debug* (untuk GDB)[cite: 1]. |
| `-S` | Output | Berhenti setelah kompilasi; hasilkan *assembly* `.s`[cite: 1]. |
| `-E` | Output | Berhenti setelah *preprocessing*; hasilkan file `.i`[cite: 1]. |
| `-c` | Output | Kompilasi & *assemble* saja; hasilkan objek `.o`[cite: 1]. |
| `-o nama` | Output | Beri nama file *output* eksekusi sebagai `nama`[cite: 1]. |

## 4. Jenis-Jenis Error

| Tipe Error | Kapan Terjadi | Penyebab Umum |
| :--- | :--- | :--- |
| **Compiler Error** | Selama tahap kompilasi[cite: 1]. | Kesalahan sintaks, tipe salah, variabel tidak dideklarasikan[cite: 1]. |
| **Linker Error** | Selama tahap *linking*[cite: 1]. | Fungsi dideklarasikan tapi tidak didefinisikan; pustaka hilang[cite: 1]. |
| **Runtime Error** | Saat program berjalan[cite: 1]. | *Segfault*, pembagian dengan nol, akses di luar batas (*out-of-bounds*)[cite: 1]. |

---

## 🛠️ Aktivitas Lab Minggu 1 (100 Menit)

1. **Pemeriksaan Lingkungan:** Kompilasi dan jalankan program minimal "Hello, World" menggunakan `g++` dari terminal[cite: 1]. Verifikasi kode keluar (*exit code*) dengan `echo $?`[cite: 1].
2. **Kompilasi Error:** Sengaja buat *compiler error* dengan menghapus titik koma; baca pesan kesalahan; identifikasi nomor baris; perbaiki[cite: 1].
3. **Linker Error:** Deklarasikan fungsi `int add(int, int);` di `main.cpp` tetapi jangan definisikan. Amati *linker error*. Kemudian berikan definisinya[cite: 1].
4. **Latihan Flag:** Kompilasi dengan `-Wall -Wextra`[cite: 1]. Masukkan variabel yang tidak digunakan dan fungsi tanpa `return`; selesaikan setiap peringatan[cite: 1].
5. *(Opsional)* **Inspeksi Assembly:** Jalankan `g++ -S main.cpp` dan buka `main.s`[cite: 1]. Identifikasi label `main:`[cite: 1].

## 📝 Tugas Minggu 1 (Selaras dengan CPE)

* **Refleksi:** Jelaskan empat tahap kompilasi dengan kata-kata Anda sendiri (1/2 - 1 halaman)[cite: 1]. Sertakan satu contoh *compiler error* dan satu *linker error* yang ditemui di lab[cite: 1].
* **Latihan I/O:** Tulis program yang membaca *integer* hingga `EOF` dan mencetak jumlahnya untuk melatih penanganan *input* yang kuat[cite: 1].
* **Masalah CPE/UVA (Pilih 1-2):**
    * UVA 10071 Back to High School Physics[cite: 1]
    * UVA 11172 Relational Operator[cite: 1]
    * UVA 10055 Hashmat the Brave Warrior[cite: 1]