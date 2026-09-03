# 📖 Minggu 9: Algoritma Pengurutan

## 1. Motivasi
Pengurutan (*sorting*) adalah operasi algoritmik yang paling fundamental[cite: 3]. Hampir setiap aplikasi—mulai dari hasil pencarian *e-commerce* hingga pengacakan data pelatihan AI—bergantung pada data yang terurut[cite: 3]. Memahami pengurutan dari dasar akan mengungkap mengapa algoritma dengan kompleksitas $O(N^2)$ kesulitan pada data besar dan mengapa algoritma $O(N \log N)$ mendominasi[cite: 3].

## 2. Perbandingan Algoritma Pengurutan

| Algoritma | Kasus Terbaik (*Best*) | Kasus Rata-rata | Kasus Terburuk (*Worst*) |
| :--- | :--- | :--- | :--- |
| **Bubble Sort** | $O(N)$[cite: 3] | $O(N^2)$[cite: 3] | $O(N^2)$[cite: 3] |
| **Selection Sort**| $O(N^2)$[cite: 3] | $O(N^2)$[cite: 3] | $O(N^2)$[cite: 3] |
| **Insertion Sort**| $O(N)$[cite: 3] | $O(N^2)$[cite: 3] | $O(N^2)$[cite: 3] |
| **std::sort** | $O(N \log N)$[cite: 3] | $O(N \log N)$[cite: 3] | $O(N \log N)$[cite: 3] |

> **Kapan $O(N^2)$ dapat diterima?**
> *Insertion Sort* sebenarnya lebih cepat daripada *Merge Sort* untuk *array* berukuran sangat kecil ($N < 20$) karena memiliki *overhead* yang rendah dan perilaku *cache* yang sangat baik[cite: 3]. Implementasi dunia nyata dari `std::sort` (seperti Introsort) akan beralih ke *Insertion Sort* saat ukuran partisi turun di bawah ambang batas tertentu[cite: 3].

## 3. Komparator Kustom dengan std::sort
Dalam C++, kita bisa mengurutkan objek kompleks (seperti `struct`) menggunakan `std::sort` yang dikombinasikan dengan fungsi komparator atau ekspresi *lambda*[cite: 3]. Kita bahkan dapat mengurutkan berdasarkan banyak bidang (*multiple fields*)—misalnya, mengurutkan IPK secara menurun, lalu menggunakan nama secara menaik sebagai *tie-break* (penentu jika IPK sama)[cite: 3].

## 4. Stabilitas dalam Pengurutan
Sebuah algoritma pengurutan disebut **stabil** jika elemen-elemen dengan kunci (*key*) yang sama mempertahankan urutan relatif aslinya setelah diurutkan[cite: 3].
* *Bubble Sort* dan *Insertion Sort* bersifat stabil, sedangkan *Selection Sort* tidak[cite: 3].
* STL menyediakan `std::stable_sort` untuk kasus-kasus di mana stabilitas ini diwajibkan[cite: 3].

---

## 🛠️ Aktivitas Lab Minggu 9 (100 Menit)
1. **Implementasi Ketiganya:** Implementasikan *Bubble*, *Selection*, dan *Insertion Sort* dari awal[cite: 3]. Uji setiap algoritma pada *array* input yang sama[cite: 3].
2. **Perbandingan Waktu:** Catat waktu eksekusi ketiga algoritma tersebut pada *array* berukuran 1000, 5000, dan 10000 elemen[cite: 3]. Catat hasilnya dalam sebuah tabel[cite: 3].
3. **Mengurutkan Struct:** Buat `vector` yang berisi `struct Student`[cite: 3]. Urutkan mahasiswa berdasarkan IPK (*GPA*) secara menurun menggunakan `std::sort` dengan ekspresi *lambda*[cite: 3].
4. **Uji Stabilitas:** Urutkan mahasiswa dengan nilai IPK yang sama berdasarkan namanya[cite: 3]. Amati apakah urutan aslinya dipertahankan jika menggunakan `std::sort` dibandingkan dengan `std::stable_sort`[cite: 3].

## 📝 Tugas Minggu 9
* **Refleksi:** Dengan kata-kata Anda sendiri, jelaskan mengapa *Insertion Sort* memiliki kompleksitas kasus terbaik $O(N)$[cite: 3]. Di bawah kondisi input seperti apa hal ini terjadi?[cite: 3]
* **Latihan:** Tulis program yang membaca $N$ integer, mengurutkannya, dan mencetak hasilnya[cite: 3]. Gunakan fungsi *sort* buatan Anda sendiri untuk $N \le 1000$, dan gunakan `std::sort` untuk input yang lebih besar[cite: 3].
* **Tantangan:** Implementasikan *Counting Sort* untuk bilangan bulat dalam rentang $[0, K]$[cite: 3]. Bandingkan kinerjanya dengan `std::sort` untuk data berukuran $N = 10^6$[cite: 3].