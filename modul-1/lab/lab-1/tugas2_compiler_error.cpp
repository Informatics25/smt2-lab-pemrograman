#include <iostream>

int main() {
    // Sengaja menghilangkan titik koma di akhir baris
    // Saat dikompilasi, g++ akan menunjukkan nomor baris yang error
    int angka = 5

    std::cout << "Angka: " << angka << std::endl;
    return 0;
}