#include <iostream>

int main() {
    int x = 42;
    int* ptr = &x; // ptr menyimpan alamat x

    std::cout << "Nilai awal x: " << x << "\n";
    
    // Mengubah nilai x secara tidak langsung melalui dereference pointer
    *ptr = 100;
    
    std::cout << "Nilai x setelah diubah via ptr: " << x << "\n"; 
    return 0;
}