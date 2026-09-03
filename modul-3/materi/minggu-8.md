# 📖 Minggu 8: Structs dan Pengantar OOP

## 1. Motivasi
Sejauh ini, setiap variabel yang kita gunakan hanya menampung satu nilai tunggal, seperti `int`, `double`, atau `string`. Namun, entitas di dunia nyata (seperti data mahasiswa, paket jaringan, atau daftar produk) memiliki banyak atribut sekaligus. Sebuah `struct` berfungsi untuk mengelompokkan data-data yang saling berkaitan ke dalam satu unit, dan `class` menambahkan perilaku (*methods*) pada data tersebut.

## 2. Tata Letak Memori dan Deklarasi
Variabel-variabel (atau anggota/ *fields*) di dalam sebuah `struct` disimpan secara berurutan (*contiguous*) di dalam memori komputer.

Contoh deklarasi dasar:
```cpp
struct Student {
    int id;
    string name;
    double gpa;
};
```

## 3. Inisialisasi dan Pengiriman ke Fungsi
* **Konstruktor:** Memungkinkan kita untuk memberikan nilai awal yang rapi saat sebuah objek baru dibuat[cite: 3].
* **Pass-by-Reference:** Untuk alasan efisiensi, `struct` sering kali dikirim ke fungsi menggunakan referensi (misalnya `const Student& s`) agar program tidak perlu menyalin seluruh data ke dalam memori baru[cite: 3].
* **Pass-by-Pointer:** Pada kode C-style yang umum di sistem tingkat rendah, *struct* dikirim sebagai *pointer* dan anggota-anggotanya diakses menggunakan operator panah (`->`)[cite: 3].

## 4. Perbedaan Utama struct vs. class
Di dalam bahasa C++, satu-satunya perbedaan teknis antara `struct` dan `class` adalah tingkat akses (*access level*) bawaannya:
* Anggota `struct` bersifat **publik (public)** secara bawaan[cite: 3].
* Anggota `class` bersifat **privat (private)** secara bawaan[cite: 3].

> **Aturan Praktis:** Untuk menyimpan catatan data yang sederhana, gunakan `struct`[cite: 3].

## 5. Enkapsulasi
Enkapsulasi adalah konsep menyembunyikan data internal agar menjadi *private* dan hanya mengizinkan interaksi dari luar melalui fungsi-fungsi *public* (metode)[cite: 3]. Contoh klasiknya adalah kelas akun bank (`BankAccount`), di mana variabel saldonya dilindungi dari perubahan langsung yang tidak sah dan harus melewati fungsi `deposit` atau `withdraw`[cite: 3].

---

## 🛠️ Aktivitas Lab Minggu 8 (100 Menit)
1. **Daftar Mahasiswa:** Definisikan `struct` bernama `Student`[cite: 3]. Buat sebuah *array* yang berisi 5 data mahasiswa dan cetak semua catatannya ke layar[cite: 3].
2. **Pass-by-Reference:** Tulis fungsi yang memperbarui (mengubah) IPK (*GPA*) seorang mahasiswa[cite: 3]. Verifikasi bahwa data asli pada `struct` tersebut memang berubah[cite: 3].
3. **IPK Tertinggi:** Tulis fungsi yang menerima *array* berisi objek `Student` dan mengembalikan mahasiswa dengan nilai IPK tertinggi[cite: 3].
4. **Kelas Sederhana:** Implementasikan sebuah `class Counter` yang memiliki metode `increment()`, `decrement()`, dan `getValue()`[cite: 3]. Pastikan nilai *counter* tersebut tidak bisa turun di bawah angka nol[cite: 3].

## 📝 Tugas Minggu 8
* **Refleksi:** Jelaskan perbedaan antara `struct` dan `class` dalam C++ dengan kata-kata Anda sendiri[cite: 3]. Kapan Anda akan lebih memilih menggunakan salah satunya?[cite: 3]
* **Latihan (Inventaris):** Definisikan `struct Product` dengan atribut nama, harga, dan kuantitas[cite: 3]. Tulis fungsi `void displayInventory(Product arr[], int n)` yang mencetak semua produk dan menghitung total nilai inventaris[cite: 3].
* **Tantangan (Pecahan):** Implementasikan `class Fraction` (pecahan) sederhana dengan metode `add()`, `multiply()`, dan `print()`[cite: 3]. Sederhanakan pecahan tersebut menggunakan pencarian FPB (GCD)[cite: 3].