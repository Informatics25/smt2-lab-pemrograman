# 📖 Minggu 13: Linked Lists (Senarai Berantai)

## 1. Motivasi
*Array* dan `std::vector` menyimpan elemen secara berurutan (*contiguous*) di dalam memori, sehingga menyisipkan elemen di tengah akan memakan biaya waktu $O(N)$[cite: 4]. *Linked list* memecahkan masalah ini dengan menyimpan setiap elemen di dalam **simpul (node)** miliknya sendiri, yang dihubungkan menggunakan *pointer*[cite: 4]. Operasi penyisipan dan penghapusan menjadi $O(1)$ jika Anda memiliki *pointer* ke simpul tersebut, tetapi akses acak (*random access*) akan memburuk menjadi $O(N)$[cite: 4].

## 2. Singly Linked List (Senarai Berantai Tunggal)
Setiap simpul pada *singly linked list* berisi dua hal: **data** dan **pointer `next`** yang menunjuk ke simpul berikutnya[cite: 4].
* **Menyisipkan di depan (`pushFront`):** Sangat cepat, $O(1)$[cite: 4].
* **Menyisipkan di akhir (`pushBack`):** Memakan waktu $O(N)$ jika kita tidak menyimpan *pointer* khusus ke ekor (*tail*)[cite: 4].

> **Pengingat Keamanan Memori!**
> Setiap `new Node(...)` yang Anda alokasikan **harus** dibebaskan pada akhirnya dengan `delete`[cite: 4]. Sebuah kelas `LinkedList` harus memiliki destruktor (`~LinkedList()`) yang menelusuri senarai dan membebaskan setiap simpul untuk mencegah kebocoran memori[cite: 4].

## 3. Perbandingan Vector vs. Linked List

| Operasi / Sifat | `std::vector` | Linked List |
| :--- | :--- | :--- |
| **Akses indeks `[i]`** | $O(1)$[cite: 4] | $O(N)$[cite: 4] |
| **Sisip di akhir** | $O(1)$ *amortised*[cite: 4] | $O(N)$ tanpa *pointer tail*[cite: 4] |
| **Sisip di depan** | $O(N)$[cite: 4] | $O(1)$[cite: 4] |
| **Sisip di tengah** | $O(N)$[cite: 4] | $O(1)$ (jika posisi diketahui)[cite: 4] |
| **Overhead memori** | 4-8 *byte* per elemen[cite: 4] | 12-16 *byte* (butuh memori untuk *pointer*)[cite: 4] |
| **Lokalitas Cache** | Sangat Baik (Cepat)[cite: 4] | Buruk (Tersebar di memori)[cite: 4] |

## 4. Doubly Linked List dan std::list
Jika *singly linked list* hanya bisa maju, *doubly linked list* memiliki *pointer* `prev` dan `next`, sehingga bisa ditelusuri mundur[cite: 4]. Dalam C++ STL, struktur ini diimplementasikan sebagai `std::list`[cite: 4].
* Gunakan `std::vector` sebagai pilihan *default* untuk data berurutan[cite: 4].
* Gunakan `std::list` HANYA jika Anda sangat sering melakukan operasi sisip/hapus $O(1)$ di posisi yang sudah diketahui, dan sama sekali tidak membutuhkan akses acak[cite: 4].

---

## 🛠️ Aktivitas Lab Minggu 13 (100 Menit)
1. **Bangun LinkedList:** Implementasikan *singly linked list* dengan metode `pushFront`, `pushBack`, `print`, dan destruktor yang tepat untuk membersihkan memori[cite: 4].
2. **Pencarian:** Tambahkan metode `bool contains(int target)` yang mengembalikan nilai *true* jika suatu nilai ada di dalam *linked list*[cite: 4].
3. **Membalik (Reverse):** Implementasikan metode yang membalikkan urutan *linked list* secara *in-place* HANYA menggunakan manipulasi *pointer* (tanpa membuat *linked list* baru)[cite: 4].
4. **Pemeriksaan Memori:** Jalankan kode *linked list* Anda menggunakan *AddressSanitizer* atau Valgrind[cite: 4]. Konfirmasikan bahwa tidak ada kebocoran memori (*memory leaks*)[cite: 4].

## 📝 Tugas Minggu 13
* **Refleksi:** Dalam skenario apa sebuah *linked list* lebih baik daripada *vector*?[cite: 4] Dan dalam skenario apa *vector* lebih baik meskipun program membutuhkan penyisipan data?[cite: 4]
* **Latihan (Merge):** Tulis fungsi yang menggabungkan dua *linked list* yang sudah terurut menjadi satu *linked list* terurut (mirip dengan langkah *merge* pada *Merge Sort*)[cite: 4].
* **Tantangan (LRU Cache):** Implementasikan *LRU Cache* sederhana dengan kapasitas $K$[cite: 4]. Gunakan *doubly linked list* berisi pasangan `(key, value)` yang digabungkan dengan `unordered_map`[cite: 4]. Fungsi `get` dan `put` harus berjalan dalam waktu $O(1)$[cite: 4].