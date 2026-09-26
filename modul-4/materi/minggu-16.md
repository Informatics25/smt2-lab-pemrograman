# 📖 Minggu 16: Proyek Puncak (Capstone) - Regional Statistics Explorer

## 1. Motivasi
Setelah 15 minggu pembelajaran bertahap, Anda kini memiliki semua alat yang dibutuhkan untuk membangun perangkat lunak sungguhan: tipe data, memori, *pointer*, *struct*, algoritma, dan struktur data[cite: 3]. Minggu 16 mengubah semua potongan tersebut menjadi aplikasi *command-line* (CLI) yang bekerja menggunakan Pemrograman Berorientasi Objek (OOP) dan menggunakan file CSV sebagai basis datanya[cite: 3].

## 2. Ringkasan Proyek
Anda akan membangun aplikasi CLI bernama **Regional Statistics Explorer** yang memuat, mengkueri, memodifikasi, dan menyimpan data Kabupaten dan Kota di Indonesia (menggunakan data asli dari Badan Pusat Statistik / BPS)[cite: 3].

Aplikasi C++ ini akan:
* Memuat sekitar 50 catatan daerah dari file `regions.csv` saat aplikasi dimulai[cite: 3].
* Memungkinkan pengguna untuk mendaftar (*list*), mencari, memfilter, mengurutkan, menambah, mengedit, dan menghapus catatan melalui menu[cite: 3].
* Menggunakan OOP: kelas dasar `Region` dengan dua kelas turunan `Kabupaten` dan `Kota`, ditambah fungsi polimorfik `virtual displayInfo()`[cite: 3].
* Menyimpan perubahan kembali ke file CSV saat keluar[cite: 3].

## 3. Arsitektur Aplikasi
Memisahkan urusan ke dalam beberapa lapisan (*layers*) adalah praktik fundamental dalam rekayasa perangkat lunak[cite: 3]:
* **Lapisan CLI:** Perulangan menu, pengiriman perintah, I/O (`main.cpp`)[cite: 3].
* **Logika Bisnis:** Pencarian, pengurutan, filter, statistik[cite: 3].
* **Model Data (OOP):** `Region` (dasar) $\rightarrow$ `Kabupaten`, `Kota`[cite: 3].
* **Lapisan Persistensi:** Membaca/menulis `regions.csv`[cite: 3].

## 4. Konsep Kunci OOP: virtual displayInfo()
Ketika Anda menyimpan campuran objek `Kabupaten` dan `Kota` di dalam `vector<Region*>`, pemanggilan `r->displayInfo()` pada masing-masing objek akan diteruskan ke fungsi *override* yang tepat saat *runtime* (saat program berjalan)[cite: 3]. Inilah yang disebut **Polimorfisme** baris kode yang sama, tetapi perilaku yang berbeda tergantung pada tipe objek aslinya[cite: 3]. Tanpa kata kunci `virtual`, versi dari kelas dasar yang akan selalu dijalankan[cite: 3].

---

## 🛠️ Aktivitas Lab 16 (180 Menit)
1. **Buat Proyek Visual Studio:** Buat proyek kosong (*Empty Project*), tambahkan file `main.cpp`, `Database.cpp`, dan empat file *header*[cite: 3]. Buat subfolder `data/` dan salin `regions.csv` ke dalamnya[cite: 3]. Atur standar bahasa ke C++17[cite: 3].
2. **Definisikan Kelas:** Implementasikan `Region`, `Kabupaten`, dan `Kota`[cite: 3]. Verifikasi dengan satu objek uji coba[cite: 3].
3. **Implementasikan loadFromCSV():** Parsing file CSV dan cetak jumlah data yang dimuat[cite: 3]. Cetak 5 catatan pertama untuk memverifikasi polimorfisme[cite: 3].
4. **Bangun Menu:** Implementasikan setidaknya tiga fitur utama (Daftar semua, Cari berdasarkan nama, Urutkan)[cite: 3].
5. **Commit:** Simpan progres Anda ke dalam Git[cite: 3].

## 📝 Tugas Proyek Akhir
* Lengkapi seluruh kode sumber dengan semua fitur wajib (Tingkat 1) diimplementasikan[cite: 3].
* Implementasikan setidaknya dua fitur bonus (Tingkat 2), seperti kueri *Top-K*, histori pencarian, atau ekspor hasil CSV baru[cite: 3].
* Buat file `README.md` yang menjelaskan cara *build* dan menjalankan program[cite: 3].