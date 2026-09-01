#include <iostream>

int main() {
    int* p = new int(123);
    std::cout << "Nilai p: " << *p << " | Alamat yang disimpan: " << p << "\n";

    // Kita bebaskan memori p, tapi kita TIDAK men-set p ke nullptr
    delete p;
    
    // Sekarang p adalah DANGLING POINTER. Ia masih menyimpan alamat lama,
    // padahal memori di alamat tersebut sudah dikembalikan ke OS.
    std::cout << "Setelah delete, p masih menyimpan alamat: " << p << "\n";
    
    // BERBAHAYA: Mengakses atau mengubah *p sekarang bisa menyebabkan program crash (Segfault)
    // *p = 999; // JANGAN LAKUKAN INI
    
    // Praktek yang benar:
    p = nullptr;
    std::cout << "Setelah diset nullptr, alamat p adalah: " << p << "\n";

    return 0;
}
