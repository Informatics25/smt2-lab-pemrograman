# 💻 Repositori Terpusat: Laboratorium Pemrograman (C/C++)
**Semester 2 - Program Studi Informatika**

Selamat datang di repositori terpusat untuk mata kuliah Laboratorium Pemrograman! Repositori ini disusun secara iteratif untuk menyediakan modul pembelajaran, kerangka kode (*starter code*), dan dokumentasi praktik terbaik guna membantu seluruh mahasiswa angkatan menguasai C++ dari dasar hingga tingkat lanjut.

## 📂 Struktur Repositori
Materi pembelajaran dibagi ke dalam 4 modul utama yang dirancang progresif. Silakan klik tautan di bawah ini untuk masuk ke masing-masing modul:

* **[Modul 1: Sintaks Dasar & Alur Kontrol](./modul-1/)** (Minggu 1-3)
  Variabel, I/O, percabangan, perulangan, dan dasar-dasar fungsi.
* **[Modul 2: Manajemen Memori & Struktur Linear](./modul-2/)** (Minggu 4-7)
  Pointer, alokasi memori dinamis (*Heap*), array, `std::vector`, dan manipulasi string.
* **[Modul 3: Data Terstruktur & Pengurutan](./modul-3/)** (Minggu 8-11)
  *Struct*, *class* dasar (OOP), algoritma *sorting*, *searching*, dan paradigma *Divide and Conquer*.
* **[Modul 4: Struktur Data Abstrak & Proyek Akhir](./modul-4/)** (Minggu 12-16)
  *Stack*, *queue*, *linked list*, *trees*, graf, dan integrasi proyek *Regional Statistics Explorer*.

## ⚙️ Persyaratan Sistem & Instalasi
Agar kode laboratorium dapat dikompilasi tanpa *error*, pastikan sistem Anda memenuhi standar berikut:
1. **Compiler:** GCC (MinGW-w64 untuk Windows) atau Clang.
2. **Standar C++:** Minimal **C++17**.
3. **Build System:** CMake (sangat disarankan jika Anda menggunakan IDE seperti CLion).
4. **Flag Kompilasi Rekomendasi:** 
   ```bash
   g++ -std=c++17 -O2 -Wall -Wextra -o solusi solusi.cpp
   ```
