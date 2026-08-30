#include <iostream>

// Fungsi yang bersih: melakukan satu hal dengan baik
int hitungLuas(int panjang, int lebar) {
    return panjang * lebar;
}

int hitungKeliling(int panjang, int lebar) {
    return 2 * (panjang + lebar);
}

void cetakHasil(int luas, int keliling) {
    std::cout << "Luas: " << luas << "\n";
    std::cout << "Keliling: " << keliling << "\n";
}

int main() {
    int p = 10;
    int l = 5;
    
    // Program utama menjadi sangat mudah dibaca (Refactored)
    int luas = hitungLuas(p, l);
    int keliling = hitungKeliling(p, l);
    cetakHasil(luas, keliling);
    
    return 0;
}