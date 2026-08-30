# 📖 Minggu 2: Representasi Data & Dasar Memori

## 1. Motivasi
Banyak *bug* dalam pemrograman kompetitif—seperti jawaban salah (WA) atau *runtime error*—berasal dari kesalahpahaman tentang bagaimana data disimpan di memori[cite: 1]. Minggu ini memberikan kosakata untuk menalar tentang tipe, ukuran, dan memori[cite: 1].

## 2. Tata Letak Memori Program
Saat program berjalan, memori dibagi menjadi beberapa segmen:
* **Kernel Space:** Bagian memori yang dikelola oleh sistem operasi[cite: 1].
* **Stack:** Digunakan untuk variabel lokal dan fungsi (*call stack*)[cite: 1]. Tumbuh ke bawah[cite: 1].
* **Heap:** Digunakan untuk alokasi memori dinamis (menggunakan `new` atau `malloc`)[cite: 1]. Tumbuh ke atas[cite: 1].
* **Segmen Data (.data / .bss):** Untuk variabel global dan statis[cite: 1].
* **Segmen Kode (.text):** Berisi instruksi mesin (kode program) yang sedang dieksekusi[cite: 1].

### Call Stack Frames
Setiap kali sebuah fungsi dipanggil, sebuah *frame* baru ditambahkan ke puncak *stack*[cite: 1]. Saat fungsi selesai (kembali/*return*), *frame* tersebut dihapus[cite: 1].

## 3. Tipe Primitif: Ukuran dan Jangkauan

| Tipe | Bit | Nilai Min | Nilai Max | Kasus Penggunaan CP |
| :--- | :--- | :--- | :--- | :--- |
| `int` | 32 | $-2^{31}$ | $2^{31}-1$ | Pencacah umum, indeks[cite: 1]. |
| `unsigned int` | 32 | 0 | $2^{32}-1$ | Manipulasi bit[cite: 1]. |
| `long long` | 64 | $-2^{63}$ | $2^{63}-1$ | Jumlah besar, faktorial[cite: 1]. |
| `unsigned long long` | 64 | 0 | $2^{64}-1$ | Nilai positif sangat besar[cite: 1]. |
| `double` | 64 | $\approx -1.8 \times 10^{308}$ | $\approx 1.8 \times 10^{308}$ | Geometri, fisika[cite: 1]. |
| `char` | 8 | -128 | 127 | Karakter, integer kecil[cite: 1]. |
| `bool` | 8* | 0 | 1 | Flag, array *visited*[cite: 1]. |

*\*Catatan: `bool` secara logis hanya 1 bit, tetapi disimpan sebagai 1 byte di sebagian besar platform[cite: 1].*

## 4. Integer Overflow
Tipe data memiliki batasan. Jika nilai melewati batas maksimal (misal pada `int`), nilai tersebut akan *overflow* dan berputar kembali ke nilai negatif terkecil ($-2^{31}$)[cite: 1].
* **Pencegahan:** Gunakan `long long` jika perkalian atau penjumlahan berpotensi melebihi batas `int`[cite: 1].

## 5. Peringatan Presisi Floating-Point
Jangan pernah membandingkan angka desimal (*float* / `double`) menggunakan operator `==`[cite: 1]. Karena cara komputer menyimpan desimal, hasil operasi `0.1 + 0.2` tidak persis sama dengan `0.3`[cite: 1].
* **Pendekatan yang benar:** Gunakan nilai toleransi (epsilon), misalnya `1e-9`[cite: 1].

---

## 🛠️ Aktivitas Lab Minggu 2 (100 Menit)
1. **Lab Tipe:** Cetak `sizeof` untuk semua tipe fundamental dan catat hasilnya[cite: 1].
2. **Lab Overflow:** Berikan `INT_MAX` ke sebuah `int` dan tambahkan 1. Cetak hasilnya dan amati[cite: 1].
3. **Lab Floating-point:** Tunjukkan bahwa `0.1 + 0.2 != 0.3`. Implementasikan perbandingan epsilon[cite: 1].
4. **Lab Stack:** Cetak alamat variabel lokal di dalam dua panggilan fungsi bersarang dan amati polanya[cite: 1].
5. **Lab Keamanan:** Buat variabel yang tidak diinisialisasi, cetak nilainya, lalu kompilasi dengan `-Wall` untuk melihat peringatan[cite: 1].

## 📝 Tugas Minggu 2
* **Buku Panduan Tipe:** Buat tabel kasus penggunaan umum untuk `int`, `long long`, `double`, `char`, dan `bool`[cite: 1].
* **Latihan Aman:** Implementasikan selisih absolut untuk dua nilai *unsigned* 32-bit secara aman menggunakan `long long`[cite: 1].
* **Masalah CPE:** Kerjakan *UVA 10055 Hashmat the Brave Warrior* (latihan aritmatika *unsigned*)[cite: 1].