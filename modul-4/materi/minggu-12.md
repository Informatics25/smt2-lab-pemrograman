# 📖 Minggu 12: Stack dan Queue

## 1. Motivasi
*Stack* (Tumpukan) dan *Queue* (Antrean) adalah dua struktur data abstrak yang paling berguna[cite: 4].
* **Stack (LIFO - Last-In, First-Out):** Memodelkan apa pun yang harus dibatalkan dalam urutan terbalik, seperti panggilan fungsi, riwayat *browser*, dan operasi *undo*[cite: 4].
* **Queue (FIFO - First-In, First-Out):** Memodelkan apa pun yang dilayani berdasarkan urutan kedatangan, seperti antrean cetak (*print jobs*), penjadwal OS, dan penelusuran BFS[cite: 4].

## 2. Implementasi Dasar
Meskipun C++ menyediakan `std::stack` dan `std::queue` melalui Standard Template Library (STL), memahami cara membuatnya dari awal sangat penting[cite: 4]:
* **Stack Manual:** Dapat dengan mudah diimplementasikan menggunakan *array* dengan menyimpan indeks elemen teratas (`topIdx`)[cite: 4].
* **Queue Manual:** Diimplementasikan secara efisien menggunakan *Circular Buffer* (penyangga melingkar) dengan indeks `frontIdx` dan `backIdx` yang berputar menggunakan operator modulo `%` untuk mencegah pemborosan ruang memori[cite: 4].

## 3. Aplikasi: Pemeriksa Tanda Kurung (Balanced Parentheses)
Masalah tanda kurung seimbang, evaluasi ekspresi, dan masalah "elemen lebih besar berikutnya" sangat umum dalam kontes CPE dan ICPC[cite: 4]. *Stack* digunakan untuk menyimpan tanda kurung buka pembuka, dan saat tanda kurung tutup ditemukan, ia dicocokkan dengan elemen teratas *stack*[cite: 4].

## 4. Priority Queue (Antrean Prioritas)
`std::priority_queue` di C++ secara bawaan menggunakan struktur *max-heap*, di mana elemen terbesar akan selalu berada di posisi terdepan[cite: 4]. Ini sangat berguna untuk mendapatkan nilai tertinggi/*top-k* dengan cepat tanpa harus mengurutkan seluruh data setiap saat[cite: 4].

---

## 🛠️ Aktivitas Lab Minggu 12 (100 Menit)
1. **Implementasi Stack:** Bangun kelas `IntStack` dari awal (berbasis *array*)[cite: 4]. Uji fungsi `push`, `pop`, `top`, dan `empty`[cite: 4].
2. **Kurung Seimbang (Balanced Brackets):** Implementasikan fungsi pemeriksa tanda kurung[cite: 4]. Uji pada setidaknya 5 *string*, termasuk kasus yang bersarang (*nested*) dan tidak seimbang[cite: 4].
3. **Implementasi Queue:** Bangun kelas `IntQueue` sirkuler[cite: 4]. Uji pola *enqueue* dan *dequeue* hingga indeks berputar kembali ke awal (*wrap-around*)[cite: 4].
4. **Praktik STL:** Gunakan `std::stack`, `std::queue`, dan `std::priority_queue` untuk menyelesaikan masalah: "Diberikan $N$ bilangan bulat, cetak semuanya dalam urutan menurun"[cite: 4].

## 📝 Tugas Minggu 12
* **Refleksi:** Jelaskan perbedaan antara LIFO dan FIFO[cite: 4]. Berikan masing-masing satu contoh di dunia nyata dari kehidupan sehari-hari Anda[cite: 4].
* **Latihan (Postfix):** Tulis fungsi yang menerima ekspresi *postfix* (misalnya `"3 4 + 5 *"\`) dan mengevaluasinya menggunakan *stack*[cite: 4].
* **Tantangan:** Implementasikan sebuah *queue* menggunakan **dua buah stack**[cite: 4]. Operasi *enqueue* harus berjalan dalam waktu rata-rata (*amortised*) $O(1)$; operasi *dequeue* juga harus $O(1)$ secara *amortised*[cite: 4].