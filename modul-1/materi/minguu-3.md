# 📖 Minggu 3: Alur Kontrol, Fungsi, dan Pemrograman Terstruktur

## 1. Motivasi
Menulis kode yang berhasil berjalan satu kali saja tidaklah cukup[cite: 1]. Pemrogram harus belajar menulis kode yang benar secara desain dengan menggunakan *loop invariant*, dekomposisi fungsi yang bersih, dan *debugging* yang disiplin[cite: 1].

## 2. Pass-by-Value vs. Pass-by-Reference

Dalam bahasa C++, terdapat dua cara utama untuk melewatkan argumen ke dalam sebuah fungsi:

| Pendekatan | Karakteristik Utama |
| :--- | :--- |
| **Pass-by-Value** | Salinan (*copy*) argumen dibuat di memori[cite: 1]. Perubahan di dalam fungsi tidak memengaruhi variabel pemanggil[cite: 1]. Lebih aman karena tidak ada efek samping[cite: 1]. Sintaks: `void f(int x)`[cite: 1]. |
| **Pass-by-Reference** | Fungsi menerima akses langsung ke variabel asli[cite: 1]. Perubahan di dalam fungsi akan memengaruhi variabel pemanggil[cite: 1]. Efisien untuk objek data berukuran besar[cite: 1]. Sintaks: `void g(int& x)`[cite: 1]. |

## 3. Loop Invariant
*Loop invariant* adalah sebuah kondisi logis yang bernilai benar sebelum *loop* dimulai, tetap benar setelah setiap iterasi berjalan, dan bernilai benar saat *loop* berakhir[cite: 1]. Teknik ini sangat membantu untuk menalar tentang kebenaran logika sebuah program dan menghindari *bug* seperti *off-by-one*[cite: 1].

## 4. Rekursi vs. Iterasi

Pemrograman kompetitif sering kali menuntut pemilihan struktur alur kontrol yang tepat antara rekursi dan iterasi (*loop*):

| Karakteristik | Rekursif | Iteratif (*for* / *while*) |
| :--- | :--- | :--- |
| **Keterbacaan** | Seringkali lebih bersih untuk masalah pohon/graf (*Divide & Conquer*)[cite: 1]. | Lebih bersih untuk perulangan linear dan sederhana[cite: 1]. |
| **Penggunaan Stack** | Menggunakan *call stack* memori yang memiliki risiko *stack overflow*[cite: 1]. | Menggunakan ruang *stack* yang konstan sehingga sangat andal[cite: 1]. |
| **Performa** | Memiliki *overhead* per panggilan fungsi (umumnya lebih lambat)[cite: 1]. | Umumnya lebih cepat dieksekusi[cite: 1]. |
| **Debugging** | Lebih sulit dilacak (*trace*) langkah demi langkah[cite: 1]. | Lebih mudah dilacak secara sekuensial[cite: 1]. |

> **Aturan Praktis:** Untuk tugas sekuensial seperti penjumlahan digit, pilih *while loop* karena andal[cite: 1]. Gunakan rekursi ketika struktur masalah secara alami bersifat rekursif seperti DFS atau *Tree Traversal*[cite: 1].

---

## 🛠️ Aktivitas Lab Minggu 3 (100 Menit)
1. **Lab Refactoring:** Ambil program satu fungsi besar dan dekomposisi (pecah) menjadi 3-4 fungsi kecil yang dinamai dengan baik[cite: 1].
2. **Lab Invariant:** Implementasikan penjumlahan digit angka berbasis *loop* dan tulis invariant-nya sebagai komentar kode[cite: 1].
3. **Lab Rekursi:** Implementasikan perhitungan Faktorial dan deret Fibonacci menggunakan metode rekursif maupun iteratif[cite: 1]. Bandingkan *output* dan risiko kedalaman *stack*-nya[cite: 1].
4. **Lab Debugging:** Diberikan program yang mengandung *bug*, temukan cara reproduksi *bug* tersebut, lokalisasi, perbaiki, dan tulis penjelasan satu paragraf tentang akar masalahnya[cite: 1].

## 📝 Tugas Minggu 3
* **Pemahaman Invariant:** Jelaskan singkat "Apa itu loop invariant?" dan berikan satu contoh pada *loop* pilihan Anda[cite: 1].
* **Latihan Template:** Bangun *template* solusi gaya UVA yang dapat digunakan berulang kali: membaca *input*, memanggil `solve()`, dan mencetak *output*[cite: 1].
* **Masalah CPE:** Selesaikan 1-2 masalah dari UVA yang membutuhkan manipulasi alur kontrol yang cermat, seperti *Relational Operator* atau simulasi sederhana[cite: 1].