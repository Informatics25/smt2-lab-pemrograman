#include <iostream>

// Fungsi yang seharusnya mengembalikan int, tapi tidak ada 'return'
int fungsiTanpaReturn() {
    int x = 10; // Variabel dideklarasikan tapi tidak pernah dipakai
}

int main() {
    std::cout << "Program ini bisa jalan, tapi mengandung bad practice." << std::endl;
    // Latihan: Kompilasi dengan `g++ -Wall -Wextra tugas4_flag_warning.cpp`
    // dan perhatikan peringatan (warning) yang muncul di terminal!
    
    return 0;
}
