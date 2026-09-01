# 📖 Minggu 5: Memori Dinamis (Heap)

## 1. Motivasi
Memori *Stack* memang cepat, namun ukurannya terbatas dan secara otomatis dibebaskan saat suatu fungsi selesai dieksekusi (kembali)[cite: 2]. Sebaliknya, memori *Heap* bertahan hingga Anda membebaskannya secara eksplisit[cite: 2]. Hal ini memberikan kendali penuh atas masa hidup suatu objek, namun kekuatan ini datang dengan tanggung jawab besar: setiap penggunaan `new` harus dipasangkan dengan `delete`[cite: 2].

## 2. Alur Kerja Alokasi Dinamis
Saat bekerja dengan memori *Heap*, biasakan menggunakan alur kerja berikut agar aman:
1. **Alokasi:** Pesan memori dengan `int* p = new int;`[cite: 2].
2. **Gunakan:** Lakukan operasi seperti `*p = 100;`[cite: 2].
3. **Bebaskan:** Hapus dari memori dengan `delete p;`[cite: 2]. (Jika Anda lupa melakukan ini, akan terjadi kebocoran memori atau *memory leak*!)[cite: 2].
4. **Null-kan:** Atur *pointer* menjadi `p = nullptr;` untuk mencegah *dangling pointer*[cite: 2].

## 3. Perbandingan Stack vs. Heap

| Fitur | Stack | Heap |
| :--- | :--- | :--- |
| **Alokasi** | Otomatis (saat pemanggilan fungsi)[cite: 2]. | Manual (menggunakan `new`)[cite: 2]. |
| **De-alokasi** | Otomatis (saat fungsi selesai)[cite: 2]. | Manual (menggunakan `delete`)[cite: 2]. |
| **Batas Ukuran** | Kecil (~1-8 MB)[cite: 2]. | Sangat besar (dibatasi oleh kapasitas RAM)[cite: 2]. |
| **Kecepatan** | Sangat cepat[cite: 2]. | Sedikit lebih lambat[cite: 2]. |
| **Masa Hidup** | Terikat pada *scope* atau blok kode[cite: 2]. | Bertahan sampai `delete` dipanggil[cite: 2]. |
| **Risiko Utama** | *Stack overflow* (akibat rekursi terlalu dalam)[cite: 2]. | *Memory leak* dan *dangling pointer*[cite: 2]. |

## 4. Kesalahan Umum pada Memori Dinamis
* **Memory Leak:** Memanggil `new` tanpa pasangan `delete`[cite: 2].
* **Double Free:** Memanggil `delete` pada *pointer* yang sama dua kali, yang akan menyebabkan perilaku tidak terdefinisi (*undefined behaviour*)[cite: 2].
* **Dangling Pointer:** Menggunakan *pointer* yang memorinya sudah di-*delete*[cite: 2]. Selalu set *pointer* ke `nullptr` setelah dibebaskan[cite: 2].
* **Kesalahan Array:** Menggunakan `delete` biasa (bukan `delete[]`) pada *array* yang dialokasikan secara dinamis[cite: 2].

---

## 🛠️ Aktivitas Lab Minggu 5 (100 Menit)
1. **Alokasi Tunggal:** Alokasikan sebuah `int` di *Heap*, beri nilai, cetak nilainya, lalu bebaskan dengan `delete`[cite: 2]. Verifikasi praktiknya dengan pengecekan `nullptr`[cite: 2].
2. **Array Dinamis:** Minta pengguna memasukkan nilai `N`[cite: 2]. Alokasikan *array* `int[N]`, isi dengan nilai kuadrat (i * i), cetak, lalu bebaskan memorinya[cite: 2].
3. **Deteksi Kebocoran:** Sengaja hilangkan perintah `delete` pada sebuah program[cite: 2]. Jalankan program tersebut dengan alat seperti Valgrind (Linux) atau Dr. Memory (Windows) dan amati laporan kebocorannya[cite: 2].
4. **Demo Dangling Pointer:** Setelah melakukan `delete`, cetak nilai *pointer* sebelum dan sesudah di-set ke `nullptr`[cite: 2]. Diskusikan apa potensi bahayanya[cite: 2].

## 📝 Tugas Minggu 5
* **Refleksi:** Jelaskan dengan kata-kata Anda sendiri apa itu *memory leak*[cite: 2]. Berikan sebuah analogi kejadian tersebut dalam kehidupan nyata[cite: 2].
* **Latihan (createRange):** Tulis fungsi `int* createRange(int start, int end)` yang mengalokasikan dan mengembalikan *array* di *Heap* berisi urutan nilai dari `start` sampai `end`[cite: 2]. Pemanggil (*caller*) bertanggung jawab untuk membebaskannya[cite: 2].
* **Tantangan (Stack Dinamis):** Implementasikan *stack* dinamis sederhana (`push` / `pop`) menggunakan *array* di *Heap* yang akan menggandakan kapasitasnya otomatis saat penuh[cite: 2].