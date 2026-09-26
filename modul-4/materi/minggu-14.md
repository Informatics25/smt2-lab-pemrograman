# 📖 Minggu 14: Pengantar Trees (Pohon)

## 1. Motivasi
*Tree* (pohon) adalah struktur data non-linear di mana setiap simpul (node) memiliki nol atau lebih anak (*children*)[cite: 4]. Pohon memodelkan hierarki: sistem file direktori komputer, struktur HTML DOM, bagan organisasi, hingga pengambilan keputusan dalam AI[cite: 4].

Sebuah **Binary Search Tree (BST)** menambahkan aturan pengurutan khusus yang membuat pencarian, penyisipan, dan penghapusan dapat dilakukan dalam waktu rata-rata $O(\log N)$[cite: 4].

## 2. Terminologi Pohon Biner
| Istilah | Makna |
| :--- | :--- |
| **Root (Akar)** | Simpul paling atas dari pohon[cite: 4]. |
| **Leaf (Daun)** | Simpul yang tidak memiliki anak sama sekali[cite: 4]. |
| **Parent / Child** | Koneksi langsung antara simpul atas (induk) dan simpul bawah (anak) di dalam pohon[cite: 4]. |
| **Depth (Kedalaman)** | Jarak dari *root* (akar memiliki kedalaman 0)[cite: 4]. |
| **Height (Tinggi)** | Jalur terpanjang dari sebuah simpul turun hingga ke daun[cite: 4]. |
| **Sifat BST** | Untuk setiap simpul: semua elemen di sub-pohon kiri $<$ nilai simpul $<$ semua elemen di sub-pohon kanan[cite: 4]. |

## 3. Penelusuran Pohon (Tree Traversals)
Terdapat tiga urutan penelusuran *depth-first* klasik, yang dibedakan dari kapan simpul saat ini dikunjungi relatif terhadap sub-pohonnya[cite: 4]:
* **Pre-order:** Kunjungi simpul -> Kiri -> Kanan[cite: 4].
* **In-order:** Kiri -> Kunjungi simpul -> Kanan[cite: 4].
* **Post-order:** Kiri -> Kanan -> Kunjungi simpul[cite: 4].

> **Sifat Kunci:** Penelusuran *In-Order* pada sebuah BST akan selalu menghasilkan elemen dalam keadaan **terurut (sorted)**[cite: 4]. Ini adalah salah satu sifat BST yang paling berguna dalam praktiknya[cite: 4].

## 4. Kinerja BST & Pohon Merosot (Degenerate Tree)
Sebuah BST yang seimbang memberikan performa penyisipan dan pencarian $O(\log N)$[cite: 4]. Namun, jika Anda menyisipkan data yang sudah terurut ke dalam BST dasar, pohon tersebut akan merosot (*degenerate*) menjadi mirip seperti *linked list*, dengan performa memburuk menjadi $O(N)$[cite: 4].

*Catatan:* Di dunia produksi, digunakan pohon yang bisa menyeimbangkan dirinya sendiri (*self-balancing trees*) seperti `std::set` dan `std::map` (yang dibangun di atas *Red-Black trees*) untuk menjamin performa $O(\log N)$ di kasus terburuk[cite: 4].

---

## 🛠️ Aktivitas Lab Minggu 14 (100 Menit)
1. **Bangun sebuah BST:** Sisipkan nilai 50, 30, 70, 20, 40, 60, 80 ke dalam BST[cite: 4]. Lakukan penelusuran *in-order* dan verifikasi bahwa outputnya terurut[cite: 4].
2. **Tiga Penelusuran:** Implementasikan penelusuran *pre-order*, *in-order*, dan *post-order*[cite: 4]. Cetak ketiga hasilnya untuk BST Anda[cite: 4].
3. **Tinggi & Jumlah:** Hitung tinggi (*height*) dan jumlah simpul (*node count*) dari BST Anda[cite: 4].
4. **Uji Pohon Merosot:** Sisipkan nilai 1, 2, 3, 4, 5 secara berurutan ke dalam pohon baru[cite: 4]. Cetak tingginya dan diskusikan mengapa hasilnya 4 alih-alih $\lceil \log_2 5 \rceil = 3$[cite: 4].

## 📝 Tugas Minggu 14
* **Refleksi:** Mengapa penelusuran *in-order* pada BST menghasilkan urutan yang terurut?[cite: 4] Jelaskan dengan kata-kata Anda sendiri menggunakan sifat BST[cite: 4].
* **Latihan:** Tulis fungsi `bool isBST(TreeNode* root)` yang memeriksa apakah suatu pohon biner memenuhi sifat BST[cite: 4].
* **Tantangan:** Implementasikan penghapusan simpul pada BST[cite: 4]. Tangani tiga kasus: simpul daun, simpul dengan satu anak, dan simpul dengan dua anak (gunakan *in-order successor*)[cite: 4].