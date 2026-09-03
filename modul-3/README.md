# 📘 Modul 3: Data Terstruktur & Pencarian / Pengurutan

## 📝 Ikhtisar Modul
Modul ini melanjutkan fondasi memori dan data dari Modul 2 dengan memperkenalkan tipe data terstruktur (*struct* dan dasar OOP), algoritma pengurutan dan pencarian klasik, serta paradigma *divide-and-conquer*[cite: 3]. Kita tidak hanya akan mempelajari cara kerja algoritma ini, tetapi juga melihat penerapannya pada perangkat lunak dunia nyata—mulai dari model catatan basis data hingga *pipeline* pelatihan Kecerdasan Buatan (AI)[cite: 3]. Setiap konsep akan disertai dengan contoh kode yang berfungsi dan tugas laboratorium langsung[cite: 3].

## 🎯 Capaian Pembelajaran Modul
Setelah menyelesaikan Modul 3, mahasiswa diharapkan mampu:
* **CP1:** Mendefinisikan dan menggunakan `struct` serta tipe `class` sederhana untuk memodelkan catatan data di dunia nyata[cite: 3].
* **CP2:** Mengimplementasikan *Bubble Sort*, *Selection Sort*, dan *Insertion Sort* dari awal serta menganalisis kompleksitasnya[cite: 3].
* **CP3:** Menggunakan `std::sort` dengan komparator kustom, termasuk menggunakan ekspresi *lambda*[cite: 3].
* **CP4:** Mengimplementasikan pencarian linear dan pencarian biner baik secara iteratif maupun rekursif[cite: 3].
* **CP5:** Menggunakan utilitas pencarian dari *Standard Template Library* (STL): `std::binary_search`, `std::lower_bound`, dan `std::upper_bound`[cite: 3].
* **CP6:** Menjelaskan paradigma *divide-and-conquer* dan mengimplementasikan *Merge Sort*[cite: 3].
* **CP7:** Menyelesaikan relasi rekurensi dalam bentuk $T(n)=2T(n/2)+O(n)$[cite: 3].

---

## 🌍 Mengapa Modul Ini Penting?
Algoritma yang dipelajari di modul ini adalah fondasi bagi berbagai industri teknologi[cite: 3]. Berikut adalah peta penerapannya di dunia nyata:

1. **Pengembangan Perangkat Lunak (Software Development):**
    * Pemodelan catatan basis data menggunakan *struct* (misalnya: *User*, *Product*, *Order*)[cite: 3].
    * Pengurutan daftar antarmuka (*UI*) atau tabel pada dasbor *e-commerce*[cite: 3].
    * Fitur pencarian dan pelengkapan otomatis (*autocomplete*) menggunakan indeks yang sudah terurut[cite: 3].
    * Alat penggabungan (*merge*) dan perbandingan (*diff*) file, seperti Git *diff*, yang didasarkan pada *merge sort*[cite: 3].

2. **Kecerdasan Buatan (AI) & Machine Learning:**
    * Memodelkan vektor fitur untuk sampel data pelatihan (*training data*) menggunakan *struct*[cite: 3].
    * *Pipeline* data pelatihan yang mengurutkan sampel berdasarkan kelas atau label[cite: 3].
    * Algoritma *k-Nearest Neighbours* (k-NN) yang mengandalkan pencarian biner pada jarak yang terurut[cite: 3].
    * *Merge sort* dalam MapReduce untuk pelatihan model terdistribusi[cite: 3].

3. **Jaringan & Sistem Terdistribusi (Networking):**
    * Struktur paket dan *header* TCP/IP yang didefinisikan sebagai *struct* C di sistem operasi[cite: 3].
    * Antrean prioritas (*priority queue*) yang mengurutkan paket jaringan berdasarkan kepentingannya[cite: 3].
    * Pencarian tabel perutean (*routing table*) menggunakan pencarian biner pada prefiks IP[cite: 3].
    * Resolusi DNS yang menggunakan prinsip *divide-and-conquer* hierarkis pada nama domain[cite: 3].

> **Catatan Ekstra:** Algoritma pengurutan dan pencarian biner mencakup sekitar 40% dari tipe masalah di ujian *Competitive Programming* (CPE)[cite: 3].

---

## 📅 Navigasi Materi Mingguan

Modul ini membentang dari Minggu ke-8 hingga ke-11. Silakan akses catatan materi dan kode lab pada folder berikut:

* **[Minggu 8: Structs dan Pengantar OOP](./materi/minggu-8.md)**[cite: 3]
* **[Minggu 9: Algoritma Pengurutan (Sorting)](./materi/minggu-9.md)**[cite: 3]
* **[Minggu 10: Algoritma Pencarian (Searching)](./materi/minggu-10.md)**[cite: 3]
* **[Minggu 11: Paradigma Divide and Conquer](./materi/minggu-11.md)**[cite: 3]