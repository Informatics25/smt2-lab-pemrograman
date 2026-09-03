# 📘 Modul 4: Struktur Data Abstrak & Pemecahan Masalah

## 📝 Ikhtisar Modul
Ini adalah modul puncak (*capstone module*) dari mata kuliah Laboratorium Pemrograman[cite: 4]. Membangun di atas materi *struct*, pengurutan, dan pencarian dari Modul 3, mahasiswa kini akan mempelajari struktur data abstrak klasik (*stack*, *queue*, *linked list*, *tree*, dan *graph*) serta menerapkannya pada masalah yang kompleks[cite: 4].

Modul ini diakhiri dengan latihan proyek bergaya CPE (*Competitive Programming Examination*) yang mengintegrasikan setiap konsep dari keseluruhan semester[cite: 4]. Pada akhirnya, mahasiswa diharapkan mampu membaca soal pemrograman kompetitif yang asing, memilih struktur data yang tepat, dan mengimplementasikan solusi yang berfungsi di bawah tekanan waktu[cite: 4].

## 🎯 Capaian Pembelajaran Modul
Setelah menyelesaikan Modul 4, mahasiswa diharapkan mampu:
* **CP1:** Mengimplementasikan struktur data *stack* dan *queue* dari awal serta menggunakan `std::stack`, `std::queue`, dan `std::deque`[cite: 4].
* **CP2:** Mengimplementasikan *singly linked list* dengan operasi penyisipan, penghapusan, dan penelusuran[cite: 4].
* **CP3:** Membedakan kapan harus menggunakan `std::vector`, `std::list`, atau *linked list* buatan sendiri[cite: 4].
* **CP4:** Mendefinisikan pohon biner (*binary tree*) dan melakukan penelusuran *pre-order*, *in-order*, dan *post-order*[cite: 4].
* **CP5:** Mengimplementasikan penyisipan dan pencarian pada *Binary Search Tree* (BST)[cite: 4].
* **CP6:** Merepresentasikan graf menggunakan matriks ketetanggaan (*adjacency matrix*) dan daftar ketetanggaan (*adjacency list*)[cite: 4].
* **CP7:** Mengimplementasikan BFS dan DFS pada graf serta menerapkannya pada masalah konektivitas dan pencarian jalur[cite: 4].
* **CP8:** Menyelesaikan masalah terintegrasi bergaya CPE di bawah tekanan waktu[cite: 4].

---

## 🌍 Mengapa Modul Ini Penting?
Setiap sistem perangkat lunak modern dibangun dari sekumpulan kecil struktur data fundamental ini[cite: 4].
* Tombol *back* pada *browser* adalah sebuah **Stack**[cite: 4].
* Penjadwal tugas sistem operasi (OS *task scheduler*) adalah sebuah **Queue**[cite: 4].
* Hierarki sistem file direktori komputer adalah sebuah **Tree**[cite: 4].
* Jaringan media sosial adalah sebuah **Graph**[cite: 4].

Struktur data abstrak ini juga mencakup inti dari masalah graf dan simulasi pada ujian CPE[cite: 4].

---

## 📅 Navigasi Materi Mingguan

Modul ini membentang dari Minggu ke-12 hingga ke-16. Silakan akses catatan materi dan kode lab pada folder berikut:

* **[Minggu 12: Stack dan Queue](./materi/minggu-12.md)**[cite: 4]
* **[Minggu 13: Linked Lists](./materi/minggu-13.md)**[cite: 4]
* **[Minggu 14: Pengantar Trees (Pohon)](./materi/minggu-14.md)**[cite: 4]
* **[Minggu 15: Graphs dan Penelusuran (Traversal)](./materi/minggu-15.md)**[cite: 4]
* **[Minggu 16: Proyek Puncak (Capstone) - Regional Statistics Explorer](./materi/minggu-16.md)**[cite: 4]

---

## 📊 Penilaian & Kualitas Kode
Pastikan seluruh submisi kode Anda memenuhi rubrik berikut:
* **Output Benar:** Program menghasilkan keluaran yang diharapkan untuk semua *test case*[cite: 4].
* **Struktur Tepat:** Memilih struktur data yang paling efisien dan sesuai untuk masalah yang diberikan[cite: 4].
* **Keamanan Memori:** Tidak ada kebocoran memori (*memory leaks*), diverifikasi menggunakan *AddressSanitizer* jika memungkinkan[cite: 4].
* **Penanganan Kasus Ekstrem (Edge Cases):** Program tidak *crash* (*menangani input kosong, elemen tunggal, atau input masif*)[cite: 4].
* **Keterbacaan:** Nama variabel bermakna, indentasi konsisten, dan logika yang rumit diberi komentar[cite: 4].