#include <iostream>

int main() {
    // 1. Alokasi di Heap
    int* p = new int(42); 
    
    std::cout << "Nilai awal di Heap: " << *p << "\n";
    
    // 2. Gunakan / Ubah
    *p = 99;
    std::cout << "Nilai setelah diubah: " << *p << "\n";
    
    // 3. Bebaskan (Wajib!)
    delete p; 
    
    // 4. Null-kan untuk keamanan
    p = nullptr; 

    // Verifikasi
    if (p == nullptr) {
        std::cout << "Pointer berhasil diamankan (nullptr).\n";
    }

    return 0;
}