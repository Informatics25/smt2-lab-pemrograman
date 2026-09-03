# 📖 Minggu 11: Divide and Conquer

## 1. Motivasi
*Divide and conquer* (Bagi dan Taklukkan) adalah salah satu strategi algoritmik yang paling kuat: pecah masalah menjadi sub-masalah yang lebih kecil, selesaikan secara rekursif, lalu gabungkan hasilnya[cite: 3]. *Merge Sort* adalah contoh kanonikalnya—algoritma ini mengurutkan data dengan jaminan waktu eksekusi $O(N \log N)$ dan memperkenalkan ide-ide kunci yang digunakan dalam sistem terdistribusi (seperti MapReduce) dan geometri komputasional[cite: 3].

## 2. Paradigma Divide and Conquer
Paradigma ini beroperasi dalam tiga langkah utama:
1. **Divide (Bagi):** Memecah masalah menjadi sub-masalah[cite: 3].
2. **Conquer (Taklukkan):** Menyelesaikan sub-masalah secara rekursif[cite: 3].
3. **Combine (Gabung):** Menggabungkan hasil-hasil sub-masalah menjadi solusi akhir[cite: 3].

### Contoh Algoritma Lainnya:
* **Merge Sort:** Membagi *array* menjadi dua, waktu $O(N \log N)$[cite: 3].
* **Quick Sort:** Mempartisi elemen di sekitar titik pivot, waktu rata-rata $O(N \log N)$[cite: 3].
* **Binary Search:** Membuang setengah bagian pada setiap langkah, waktu $O(\log N)$[cite: 3].
* **Strassen:** Mempartisi matriks, waktu $O(N^{2.81})$[cite: 3].

## 3. Relasi Rekurensi & Master Theorem
Kompleksitas waktu dari *Merge Sort* dideskripsikan oleh relasi rekurensi:
$$T(n) = 2T(n/2) + O(n)$$[cite: 3]

Kita bisa menyelesaikan rekurensi bentuk $T(n) = aT(n/b) + O(n^c)$ menggunakan *Master Theorem* (Teorema Master):
* Jika $\log_b a < c$ : $T(n) = O(n^c)$[cite: 3]
* Jika $\log_b a = c$ : $T(n) = O(n^c \log n)$[cite: 3]
* Jika $\log_b a > c$ : $T(n) = O(n^{\log_b a})$[cite: 3]

Untuk *Merge Sort*, $a=2$, $b=2$, dan $c=1$[cite: 3]. Karena $\log_2 2 = 1 = c$, maka kompleksitasnya adalah $T(n) = O(n \log n)$[cite: 3].

## 4. Penerapan: Menghitung Inversi (Counting Inversions)
Selain mengurutkan, *Merge Sort* yang dimodifikasi dapat digunakan untuk menghitung **inversi** di dalam sebuah *array*[cite: 3]. Jumlah inversi mengukur seberapa "tidak terurut" sebuah *array*[cite: 3]. Ini sering digunakan dalam sistem rekomendasi (membandingkan peringkat preferensi pengguna), statistik, dan masalah kontes *Competitive Programming*[cite: 3].

---

## 🛠️ Aktivitas Lab Minggu 11 (100 Menit)
1. **Merge Sort:** Implementasikan *Merge Sort*[cite: 3]. Uji pada *array* berukuran 10, 100, dan 1000 untuk memverifikasi kebenarannya[cite: 3].
2. **Perbandingan Waktu:** Bandingkan *Merge Sort* dengan *Insertion Sort* pada *array* berukuran 100, 1000, 10000, dan 100000[cite: 3]. Catat hasilnya dalam sebuah tabel[cite: 3].
3. **Menghitung Inversi:** Implementasikan algoritma penghitungan inversi[cite: 3]. Uji pada *array* `{2, 4, 1, 3, 5}` (hasil yang diharapkan: 3)[cite: 3].
4. **Latihan Rekurensi:** Identifikasi nilai $a, b, c$ dan terapkan *Master Theorem* untuk rekurensi berikut:
    * $T(n) = 4T(n/2) + O(n)$[cite: 3]
    * $T(n) = 2T(n/2) + O(n^2)$[cite: 3]
    * $T(n) = T(n/2) + O(1)$[cite: 3]

## 📝 Tugas Minggu 11
* **Refleksi:** Jelaskan dengan kata-kata Anda sendiri mengapa *Merge Sort* dijamin memiliki kompleksitas $O(N \log N)$ sedangkan *Quick Sort* dapat memburuk menjadi $O(N^2)$[cite: 3]. Apa yang menentukan perbedaan ini?[cite: 3]
* **Latihan:** Implementasikan fungsi `vector<int> merge(vector<int> a, vector<int> b)` yang menggabungkan dua *vector* yang sudah terurut menjadi satu *vector* terurut dalam waktu $O(N+M)$[cite: 3].
* **Tantangan:** Buat program yang mencari jumlah *subarray* maksimum (Maximum Subarray Sum) menggunakan paradigma *Divide and Conquer*[cite: 3].