#include <iostream>
#include <cmath> // Untuk std::abs

int main() {
    double x = 0.1 + 0.2;
    
    // Pembuktian bahwa perbandingan == gagal
    if (x == 0.3) {
        std::cout << "x sama dengan 0.3 (Salah)\n";
    } else {
        std::cout << "x TIDAK sama dengan 0.3! Nilai x sebenarnya: " << x << "\n";
    }
    
    // Perbandingan menggunakan EPSILON
    const double EPS = 1e-9;
    if (std::abs(x - 0.3) < EPS) {
        std::cout << "Dengan epsilon: x dianggap sama dengan 0.3 (Benar)\n";
    }
    
    return 0;
}