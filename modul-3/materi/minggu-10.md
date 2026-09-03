# 📖 Minggu 10: Algoritma Pencarian

## 1. Motivasi
Menemukan sebuah elemen di dalam sekumpulan data adalah operasi inti dalam pemrograman[cite: 3]. Pencarian linear (*linear search*) bekerja pada data apa pun tetapi memakan biaya waktu $O(N)$[cite: 3]. Sebaliknya, pencarian biner (*binary search*) pada data yang sudah terurut hanya memakan biaya $O(\log N)$[cite: 3]. Perbedaan ini ibarat memindai buku telepon halaman demi halaman dibandingkan langsung membukanya ke bagian abjad yang tepat[cite: 3].

## 2. Pencarian Linear vs. Pencarian Biner
* **Pencarian Linear:** Memeriksa setiap elemen satu per satu dari awal hingga akhir[cite: 3].
* **Pencarian Biner:** Secara berulang membagi rentang pencarian menjadi dua dengan mengecek elemen tengah (*mid*), lalu membuang setengah bagian yang tidak mungkin berisi target[cite: 3].

> **Bug Umum pada Pencarian Biner:**
> Menggunakan rumus `mid = (lo + hi) / 2` dapat menyebabkan *integer overflow* jika `lo + hi` melampaui `INT_MAX`[cite: 3]. **Selalu gunakan** rumus yang aman: `mid = lo + (hi - lo) / 2`[cite: 3].

## 3. Utilitas Pencarian pada STL
C++ Standard Template Library (STL) menyediakan fungsi pencarian biner bawaan yang sangat kuat:
* `std::binary_search`: Mengembalikan nilai `true` jika elemen ditemukan, atau `false` jika tidak[cite: 3].
* `std::lower_bound`: Mengembalikan *iterator* (penunjuk) ke posisi **pertama** di mana elemen target bisa disisipkan tanpa merusak urutan (elemen $\ge$ target)[cite: 3].
* `std::upper_bound`: Mengembalikan *iterator* ke posisi **setelah** semua elemen yang bernilai sama dengan target (elemen $>$ target)[cite: 3].

## 4. Pencarian Biner pada Jawaban (Binary Search on the Answer)
Ini adalah teknik ampuh yang sering muncul dalam *Competitive Programming* (mencakup 10-15% dari masalah CPE)[cite: 3]. Alih-alih mencari elemen di dalam *array*, Anda melakukan pencarian biner pada "ruang jawaban" untuk sebuah masalah optimasi[cite: 3]. Misalnya: "Berapa kapasitas minimum agar semua barang muat?"[cite: 3]. Jika kapasitas $C$ berhasil, maka $C+1$ juga pasti berhasil (ruang jawaban bersifat monotonik), sehingga pencarian biner dapat diterapkan[cite: 3].

---

## 🛠️ Aktivitas Lab Minggu 10 (100 Menit)
1. **Perbandingan Waktu:** Buat *array* terurut berisi $10^6$ elemen[cite: 3]. Bandingkan waktu eksekusi pencarian linear vs. pencarian biner saat mencari elemen yang berada paling akhir di *array*[cite: 3].
2. **Pencarian Biner Rekursif:** Implementasikan versi rekursif dari pencarian biner[cite: 3]. Uji pada setidaknya 5 target yang berbeda (baik yang ada di *array* maupun yang tidak)[cite: 3].
3. **Praktik STL:** Gunakan `lower_bound` dan `upper_bound` untuk menghitung berapa kali sebuah nilai tertentu muncul di dalam *array* yang sudah terurut[cite: 3].
4. **Pencarian Biner pada Struct:** Urutkan `vector` berisi `Student` berdasarkan atribut `id`, kemudian lakukan pencarian biner untuk mencari mahasiswa berdasarkan `id`-nya[cite: 3].

## 📝 Tugas Minggu 10
* **Refleksi:** Mengapa pencarian biner membutuhkan data yang sudah terurut?[cite: 3] Apa yang akan terjadi jika *array* tidak terurut?[cite: 3]
* **Latihan:** Diberikan sebuah *array* terurut dan nilai target $T$[cite: 3]. Temukan posisi pertama dan posisi terakhir dari $T$ murni hanya menggunakan pencarian biner (tanpa pemindaian linear sama sekali)[cite: 3].
* **Tantangan:** Implementasikan "pencarian biner pada jawaban": Diberikan $N$ barang dengan bobot masing-masing dan $K$ truk, temukan kapasitas truk minimum sehingga semua barang dapat didistribusikan[cite: 3].