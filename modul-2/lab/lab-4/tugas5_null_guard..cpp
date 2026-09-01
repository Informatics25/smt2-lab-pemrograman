#include <iostream>

void cetakAman(int* ptr) {
    // Penjaga (Guard): Cek apakah pointer valid sebelum melakukan dereference
    if (ptr != nullptr) {
        std::cout << "Nilai aman: " << *ptr << "\n";
    } else {
        std::cout << "Pointer adalah nullptr! Operasi dibatalkan agar tidak crash.\n";
    }
}

int main() {
    int nilai = 99;
    int* ptrValid = &nilai;
    int* ptrKosong = nullptr;

    cetakAman(ptrValid);
    cetakAman(ptrKosong);

    return 0;
}