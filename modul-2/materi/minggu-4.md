# 📖 Minggu 4: Pointer dan Alamat Memori

## 1. Motivasi
Setiap variabel tersimpan di suatu tempat di dalam RAM. Sebuah *pointer* adalah variabel yang menyimpan lokasi tersebut (alamat memori), bukan nilai biasa. Memahami *pointer* adalah kunci utama untuk menguasai memori dinamis, pengiriman argumen fungsi yang efisien, dan pembuatan struktur data di C++.

## 2. Operator Pointer Utama

| Sintaks | Nama | Arti |
| :--- | :--- | :--- |
| `&x` | *Address-of* | Mengembalikan alamat memori tempat variabel `x` disimpan[cite: 2]. |
| `*ptr` | *Dereference* | Mengembalikan nilai yang tersimpan di alamat yang dipegang oleh `ptr`[cite: 2]. |
| `ptr++` | Aritmatika *pointer* | Memajukan `ptr` sebesar ukuran `sizeof(*ptr)` dalam hitungan *byte*[cite: 2]. |
| `ptr->m` | Akses anggota | Singkatan dari `(*ptr).m` saat bekerja dengan *struct* atau *class*[cite: 2]. |

## 3. Hubungan Array dan Pointer
Nama sebuah *array* (misalnya `arr`) secara otomatis meluruh (*decay*) menjadi *pointer* yang menunjuk ke elemen pertamanya[cite: 2]. Oleh karena itu, pengindeksan `arr[i]` sebenarnya sepenuhnya setara dengan aritmatika *pointer* `*(arr + i)`[cite: 2].

---

## 🛠️ Aktivitas Lab Minggu 4 (100 Menit)
1. **Penjelajah Alamat:** Deklarasikan tiga variabel bertipe berbeda, cetak alamatnya menggunakan `&`, dan amati jarak antar alamat tersebut di memori[cite: 2].
2. **Latihan Dereference:** Buat *pointer* ke sebuah variabel `int`, ubah nilainya melalui *pointer* tersebut, dan verifikasi bahwa nilai variabel asli ikut berubah[cite: 2].
3. **Fungsi Swap:** Implementasikan fungsi `void swap(int*, int*)` untuk menukar nilai dua variabel dan uji dengan tiga pasang nilai yang berbeda[cite: 2].
4. **Aritmatika Pointer:** Telusuri *array* berisi 5 elemen secara manual hanya menggunakan aritmatika *pointer* (tanpa menggunakan tanda kurung siku `[]`)[cite: 2].
5. **Penjaga Null Pointer:** Tulis fungsi yang menerima *pointer* dan mencetak nilainya HANYA jika *pointer* tersebut bukan `nullptr`[cite: 2].

## 📝 Tugas Minggu 4
* **Refleksi:** Dengan kata-kata Anda sendiri, jelaskan perbedaan antara nilai variabel dan alamatnya[cite: 2]. Kapan Anda akan menggunakan *pointer* daripada variabel biasa?[cite: 2]
* **Latihan (MinMax):** Tulis fungsi `void minmax(int* arr, int n, int* mn, int* mx)` yang mencari nilai minimum dan maksimum dari sebuah *array* dan mengembalikan keduanya melalui parameter *pointer*[cite: 2].
* **Tantangan:** Implementasikan fungsi yang membalik *array* secara *in-place* HANYA dengan menggunakan aritmatika *pointer*[cite: 2].