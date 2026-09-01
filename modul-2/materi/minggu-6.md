# 📖 Minggu 6: Array dan std::vector

## 1. Motivasi
*Array* adalah struktur data paling sederhana: blok elemen bertipe sama yang tersimpan secara berurutan (*contiguous*)[cite: 2]. Namun, `std::vector` membungkus *array* dinamis dengan fitur perubahan ukuran otomatis, bantuan pengecekan batas, dan API yang kaya[cite: 2]. Hal ini menjadikannya *container* utama dalam C++ modern[cite: 2].

## 2. Tata Letak Memori
* **Array Tetap:** Disimpan di *Stack* dan ukurannya sudah harus diketahui (tetap) saat kompilasi[cite: 2].
* **std::vector:** Objek utamanya (yang menyimpan informasi *size* dan *capacity*) ada di *Stack*, tetapi elemen data aslinya disimpan secara dinamis di *Heap*[cite: 2].

## 3. Perbandingan Fitur Array vs. Vector

| Fitur | Array Tetap | `std::vector` |
| :--- | :--- | :--- |
| **Ukuran (*Size*)** | Tetap saat kompilasi[cite: 2]. | Bertambah/berkurang saat *runtime*[cite: 2]. |
| **Memori** | Biasanya di *Stack*[cite: 2]. | Dikelola otomatis di *Heap*[cite: 2]. |
| **Pengecekan Batas** | Tidak ada (risiko *Undefined Behavior* jika *overflow*)[cite: 2]. | `.at(i)` melempar *exception*; `[i]` tidak mengecek batas[cite: 2]. |
| **Pengiriman ke Fungsi** | Meluruh menjadi *pointer*[cite: 2]. | Dikirim *by value* (disalin) atau *by reference*[cite: 2]. |
| **Metode Berguna** | Tidak ada bawaan[cite: 2]. | `.push_back()`, `.size()`, `.resize()`, bisa diurutkan dengan `std::sort`[cite: 2]. |

## 4. Mengapa Kapasitas Vector Berlipat Ganda?
Saat sebuah `std::vector` penuh dan Anda menambahkan elemen baru (`push_back`), kapasitasnya sering kali digandakan[cite: 2]. Menggandakan kapasitas pada setiap realokasi memberikan biaya performa *amortised* $O(1)$ per `push_back`[cite: 2]. Jika *vector* hanya bertambah 1 elemen setiap kali, setiap penyisipan akan memakan biaya $O(n)$ untuk menyalin elemen lama, membuat $n$ penyisipan menjadi total $O(n^2)$[cite: 2].

---

## 🛠️ Aktivitas Lab Minggu 6 (100 Menit)
1. **Statistik Array:** Baca nilai $N$ integer ke dalam *array* tetap[cite: 2]. Hitung dan cetak jumlah total, rata-rata, nilai minimum, dan nilai maksimum[cite: 2].
2. **Pengamat Pertumbuhan Vector:** Jalankan kode pertumbuhan kapasitas `std::vector`[cite: 2]. Catat kapasitas pada setiap penggandaan di dalam sebuah tabel observasi[cite: 2].
3. **Membalik Vector:** Tanpa menggunakan fungsi bawaan `std::reverse`, tulis sebuah *loop* yang membalikkan urutan elemen *vector* secara *in-place*[cite: 2].
4. **Array 2-Dimensi:** Deklarasikan matriks integer berukuran $3 \times 3$[cite: 2]. Isi dengan nilai 1-9, cetak sebagai kisi (*grid*), dan hitung jumlah elemen pada diagonal utamanya[cite: 2].

## 📝 Tugas Minggu 6
* **Refleksi:** Kapan Anda akan memilih menggunakan *array* tetap dibandingkan *vector*? Berikan dua skenario konkret[cite: 2].
* **Latihan (Merge):** Tulis fungsi `vector<int> merge(vector<int> a, vector<int> b)` yang menggabungkan dua *vector* yang sudah terurut menjadi satu *vector* terurut baru tanpa menggunakan fungsi `std::merge`[cite: 2].
* **Tantangan (Frekuensi):** Implementasikan penghitung frekuensi: baca daftar integer, lalu cetak setiap nilai unik beserta jumlah kemunculannya sesuai dengan urutan pertama kali nilai tersebut terlihat[cite: 2].