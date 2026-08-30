#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int total = 0;
    
    // BUG: Akses di luar batas memori (Out-of-bounds)
    // Kondisi i <= 5 akan mengakses arr[5] yang merupakan elemen ke-6 (tidak eksis).
    // TUGAS: Ubah 'i <= 5' menjadi 'i < 5'.
    for (int i = 0; i <= 5; i++) {
        total += arr[i];
    }
    
    std::cout << "Total elemen array: " << total << "\n";
    return 0;
}
