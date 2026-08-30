# 📘 Modul 1: Sistem Komputasi & Dasar-Dasar C++

## 📝 Ikhtisar Modul
Modul ini membangun pemahaman tingkat sistem tentang bagaimana program diterjemahkan dan dieksekusi, serta menetapkan praktik pemrograman C++ inti yang akan digunakan sepanjang semester[cite: 1]. Masalah pemrograman kompetitif (CPE/UVA) akan digunakan sebagai latihan dan tugas, bukan sebagai sarana pengajaran utama[cite: 1].

## 🎯 Capaian Pembelajaran Modul
Setelah menyelesaikan Modul 1, mahasiswa diharapkan mampu:
* **CP1:** Menjelaskan perbedaan antara model eksekusi terkompilasi (*compiled*) dan terinterpretasi (*interpreted*) serta memberikan alasan mengapa pemrograman kompetitif biasanya menggunakan C++[cite: 1].
* **CP2:** Mendeskripsikan empat tahap alur kompilasi (*preprocess* → *compile* → *assemble* → *link*) dan mendiagnosis kesalahan *build* yang umum[cite: 1].
* **CP3:** Menggunakan *toolchain* GCC pada Windows/Linux (menggunakan `g++` beserta *flag* seperti `-std`, `-Wall`, `-O2`) untuk mengompilasi dan menjalankan program dengan andal[cite: 1].
* **CP4:** Menunjukkan pemahaman tentang representasi data (*bit*, *signed*/*unsigned*, *overflow*) dan konsep memori dasar (*stack* vs. *heap*)[cite: 1].
* **CP5:** Menulis program C++ yang bersih dan terstruktur menggunakan fungsi, alur kontrol yang jelas, dan teknik *debugging* sederhana[cite: 1].

---

## 📅 Navigasi Materi Mingguan

Materi untuk Modul 1 ini dibagi menjadi tiga minggu pembelajaran. Silakan akses catatan materi dan aktivitas lab pada folder berikut:

1. **[Minggu 1: Bagaimana Program Sebenarnya Berjalan](./materi/minggu-1.md)**
    * Kompiler, *Toolchain*, dan Model Eksekusi[cite: 1].
    * *Compiler Error* vs. *Linker Error* vs. *Runtime Error*[cite: 1].
    * [Aktivitas Lab 1](./lab/lab-1/) | [Tugas CPE Minggu 1](./tugas-cpe/)

2. **[Minggu 2: Representasi Data & Dasar Memori](./materi/minggu-2.md)**
    * Tipe Data, Bit, *Overflow*, dan *Stack*[cite: 1].
    * Peringatan Presisi *Floating-Point*[cite: 1].
    * [Aktivitas Lab 2](./lab/lab-2/) | [Tugas CPE Minggu 2](./tugas-cpe/)

3. **[Minggu 3: Alur Kontrol, Fungsi, dan Pemrograman Terstruktur](./materi/minggu-3.md)**
    * Keterbacaan, Kebenaran, *Loop Invariant*, dan Rekursi[cite: 1].
    * *Pass-by-Value* vs. *Pass-by-Reference*[cite: 1].
    * [Aktivitas Lab 3](./lab/lab-3/) | [Tugas CPE Minggu 3](./tugas-cpe/)

---

## 📊 Penilaian Modul 1

Evaluasi untuk modul ini terbagi ke dalam empat komponen utama:

| Komponen | Deskripsi | Bobot |
| :--- | :--- | :--- |
| **Partisipasi Lab** | Penyelesaian semua 3 lembar tugas lab[cite: 1]. | **30%**[cite: 1] |
| **Submisi CPE/UVA** | Solusi yang diterima (*Accepted*) di *Online Judge*[cite: 1]. | **30%**[cite: 1] |
| **Laporan Refleksi** | Refleksi tertulis untuk materi Minggu 1 & 3[cite: 1]. | **20%**[cite: 1] |
| **Kuis** | Tipe data, *overflow*, dan kosakata kompilasi[cite: 1]. | **20%**[cite: 1] |

### 🔎 Rubrik Kualitas Kode
Untuk setiap tugas lab dan submisi, kode mahasiswa akan dinilai berdasarkan:
* **Output Benar:** Program menghasilkan output yang diharapkan untuk semua *test case*[cite: 1].
* **Struktur Terbaca:** Fungsi berukuran kecil, penamaan variabel yang baik, dan indentasi yang konsisten[cite: 1].
* **Tanpa *Undefined Behavior* (UB):** Tidak ada variabel tak terinisialisasi, akses di luar batas, atau *signed overflow*[cite: 1].
* **Tipe yang Sesuai:** Menggunakan `long long` jika *overflow* mungkin terjadi, dan menggunakan `double` dengan nilai *epsilon* untuk perbandingan desimal[cite: 1].

---

## 📚 Sumber Daya yang Direkomendasikan
* **Buku Teks:** Bjarne Stroustrup, *Programming: Principles and Practice Using C++, 2nd ed.*[cite: 1]
* **Referensi Online:** [cppreference.com](https://en.cppreference.com/) - Dokumentasi C++ otoritatif[cite: 1].
* **Online Judge:** UVa Online Judge untuk latihan soal CPE[cite: 1].
* **Compiler Explorer:** [godbolt.org](https://godbolt.org) - Untuk melihat output *assembly* secara langsung[cite: 1].
* **Visualizer:** [pythontutor.com/cpp.html](https://pythontutor.com/cpp.html) - Untuk eksekusi langkah demi langkah dengan tampilan memori[cite: 1].