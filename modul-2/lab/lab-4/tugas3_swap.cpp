#include <iostream>

// Fungsi swap yang menerima pointer (alamat memori)
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Sebelum: x=" << x << " y=" << y << "\n";
    
    // Kita mengirim alamat x dan y
    swap(&x, &y);
    
    std::cout << "Sesudah: x=" << x << " y=" << y << "\n";
    return 0;
}