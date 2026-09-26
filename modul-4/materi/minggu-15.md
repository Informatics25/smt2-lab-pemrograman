# 📖 Minggu 15: Graphs dan Penelusuran (Traversal)

## 1. Motivasi
Graf (*graph*) adalah struktur data yang paling umum: kumpulan simpul (*vertices*) yang dihubungkan oleh sisi (*edges*)[cite: 3]. Pohon sebenarnya hanyalah kasus khusus dari graf (yaitu graf yang asiklik, terhubung, dan berakar)[cite: 3]. Masalah-masalah graf mendominasi tingkat kesulitan paruh atas dalam pemrograman kompetitif dan mendasari segala hal mulai dari jejaring sosial hingga navigasi GPS[cite: 3].

## 2. Representasi Graf

| Representasi | Penyimpanan | Pengecekan Sisi (Edge Check) |
| :--- | :--- | :--- |
| **Adjacency Matrix** (Matriks) | *Array* boolean (atau bobot) berukuran $N \times N$[cite: 3]. | $O(1)$[cite: 3] |
| **Adjacency List** (Daftar) | Daftar tetangga untuk setiap simpul[cite: 3]. | $O(\text{derajat simpul})$[cite: 3] |
| **Edge List** (Daftar Sisi) | Satu daftar tunggal berisi pasangan $(u, v)$[cite: 3]. | $O(E)$[cite: 3] |

## 3. BFS vs. DFS
* **Breadth-First Search (BFS):** Mengeksplorasi secara melebar menggunakan antrean (`queue`)[cite: 3]. Digunakan untuk mencari jalur terpendek (*shortest paths*) pada graf tak berbobot, masalah "tingkatan", atau "jumlah langkah minimum"[cite: 3].
* **Depth-First Search (DFS):** Mengeksplorasi secara mendalam menggunakan tumpukan (`stack` eksplisit) atau rekursi[cite: 3]. Digunakan untuk mengecek konektivitas, deteksi siklus, pengurutan topologis, *backtracking*, dan pertanyaan "apakah jalur ada"[cite: 3].

> Keduanya berjalan dalam waktu $O(V+E)$ jika menggunakan *Adjacency List*[cite: 3].

---

## 🛠️ Aktivitas Lab Minggu 15 (100 Menit)
1. **Bangun Graf:** Buat graf 4-simpul menggunakan *adjacency list*[cite: 3].
2. **Jalankan BFS:** Lakukan penelusuran BFS dimulai dari simpul 0[cite: 3]. Verifikasi urutan penelusurannya[cite: 3].
3. **Jalankan DFS:** Jalankan DFS versi rekursif dan iteratif[cite: 3]. Bandingkan urutannya[cite: 3].
4. **Komponen Terhubung:** Bangun graf dengan 6 simpul dan 2 komponen yang terputus (tidak saling terhubung)[cite: 3]. Hitung jumlah komponen tersebut[cite: 3].

## 📝 Tugas Minggu 15
* **Refleksi:** Jelaskan mengapa BFS menggunakan `queue` sedangkan DFS menggunakan `stack` (atau rekursi)[cite: 3]. Sifat apa dari struktur tersebut yang membuatnya paling cocok?[cite: 3]
* **Latihan:** Diberikan graf tak berarah dan dua simpul $s$ dan $t$, tentukan apakah ada jalur dari $s$ ke $t$[cite: 3].
* **Tantangan:** Implementasikan fungsi yang mendeteksi apakah suatu graf tak berarah mengandung siklus (putaran) menggunakan DFS[cite: 3].