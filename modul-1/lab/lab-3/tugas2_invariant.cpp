#include <iostream>
#include <cmath>

int sumDigitsWhile(int n) {
    n = std::abs(n);
    int sum = 0;
    
    // INVARIANT: 'sum' selalu berisi jumlah dari digit yang sudah diproses
    while (n > 0) {
        sum += n % 10; // Tambah digit terakhir
        n /= 10;       // Hapus digit terakhir
        // INVARIANT tetap berlaku di titik ini setelah setiap iterasi
    }
    return sum;
}

int main() {
    int angka = 1234;
    std::cout << "Jumlah digit dari " << angka << " adalah " << sumDigitsWhile(angka) << "\n";
    return 0;
}