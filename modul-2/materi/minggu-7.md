# 📖 Minggu 7: String dan Data Karakter

## 1. Motivasi
Teks ada di mana-mana dalam pemrograman[cite: 2]. C++ menawarkan dua model *string* utama: C-style *string* tingkat rendah (*array* `char` dengan *null terminator*) yang merupakan warisan dari bahasa C, dan *class* `std::string` tingkat tinggi yang mengelola memori secara otomatis[cite: 2]. Memahami keduanya sangat penting untuk membaca kode lama (*legacy code*) dan untuk keperluan pemrograman kompetitif[cite: 2].

## 2. Tata Letak Memori C-Style String
C-style *string* disimpan sebagai *array* dari karakter yang berurutan dan **harus** diakhiri dengan karakter *null* (`\0`)[cite: 2].
* Contoh tata letak untuk `"Hello"`: `H | e | l | l | o | \0`[cite: 2].
* *Null terminator* ini mutlak diperlukan agar fungsi-fungsi C mengetahui di mana akhir dari sebuah teks[cite: 2].

## 3. Perbandingan Fitur C-Style vs. std::string

| Fitur | C-Style (`char[]`) | `std::string` |
| :--- | :--- | :--- |
| **Deklarasi** | `char s[20] = "Halo";`[cite: 2] | `string s = "Halo";`[cite: 2] |
| **Panjang (*Length*)** | `strlen(s)`[cite: 2] | `s.length()` atau `s.size()`[cite: 2] |
| **Penggabungan** | `strcat(dst, src)`[cite: 2] | `s1 + s2` atau `s1 += s2`[cite: 2] |
| **Perbandingan** | `strcmp(a, b) == 0`[cite: 2] | `a == b`[cite: 2] |
| **Substring** | Aritmatika *pointer* manual[cite: 2] | `s.substr(pos, len)`[cite: 2] |
| **Pencarian** | `strstr(s, sub)`[cite: 2] | `s.find(sub)`[cite: 2] |
| **Keamanan** | Risiko *buffer overflow*[cite: 2] | Manajemen batas otomatis[cite: 2] |

---

## 🛠️ Aktivitas Lab Minggu 7 (100 Menit)
1. **Latihan C-Style:** Gunakan `strlen`, `strcpy`, `strcat`, dan `strcmp` pada dua *string*[cite: 2]. Amati apa yang terjadi jika *buffer* tujuan terlalu kecil (simulasi *buffer overflow*)[cite: 2].
2. **Eksplorasi std::string:** Baca satu kalimat utuh dari pengguna[cite: 2]. Cetak panjangnya, balikkan kalimat tersebut, dan hitung jumlah karakter spasinya[cite: 2].
3. **Pemeriksa Palindrom:** Implementasikan fungsi `isPalindrome` dan uji pada setidaknya lima kata yang berbeda[cite: 2].
4. **Frekuensi Kata:** Baca satu baris teks, pisahkan menjadi kata-kata (menggunakan `stringstream`), dan hitung berapa kali setiap kata muncul[cite: 2].

## 📝 Tugas Minggu 7
* **Refleksi:** Mengapa `std::string` umumnya lebih aman daripada `char[]`?[cite: 2] Jelaskan satu skenario di mana C-style *string* mungkin masih lebih disukai[cite: 2].
* **Latihan (Reverse Words):** Tulis fungsi `string reverseWords(string sentence)` yang membalikkan urutan kata dalam sebuah kalimat (misal, `"Halo Dunia"` menjadi `"Dunia Halo"`)[cite: 2].
* **Tantangan (Caesar Cipher):** Implementasikan *Caesar cipher* sederhana: geser setiap huruf sebanyak `k` posisi dan berputar kembali (*wrap around*), sembari membiarkan karakter non-huruf tidak berubah[cite: 2].