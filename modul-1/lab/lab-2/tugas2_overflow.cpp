#include <iostream>
#include <climits> // Untuk menggunakan nilai INT_MAX

int main() {
    int max_val = INT_MAX; // 2147483647
    std::cout << "Nilai maksimal int: " << max_val << "\n";
    
    // Memaksa terjadinya overflow
    max_val = max_val + 1;
    
    std::cout << "Setelah ditambah 1 (Overflow): " << max_val << "\n";
    // Nilainya akan berputar menjadi negatif!
    return 0;
}