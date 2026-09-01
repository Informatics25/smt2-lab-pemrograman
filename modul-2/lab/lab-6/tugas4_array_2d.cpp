#include <iostream>

int main() {
    // Array 2 dimensi berukuran 3x3
    int matriks[3][3];
    int angka = 1;
    int sumDiagonal = 0;

    // Mengisi array dengan angka 1 sampai 9
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            matriks[baris][kolom] = angka++;
        }
    }

    // Mencetak grid dan menghitung diagonal utama (baris == kolom)
    std::cout << "Grid Matriks:\n";
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            std::cout << matriks[baris][kolom] << " ";
            
            // Elemen diagonal utama adalah (0,0), (1,1), dan (2,2)
            if (baris == kolom) {
                sumDiagonal += matriks[baris][kolom];
            }
        }
        std::cout << "\n";
    }

    std::cout << "Jumlah elemen diagonal utama: " << sumDiagonal << "\n";

    return 0;
}