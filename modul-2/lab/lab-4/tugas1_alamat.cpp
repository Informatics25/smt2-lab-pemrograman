#include <iostream>

int main() {
    int a = 10;
    double b = 3.14;
    char c = 'Z';

    std::cout << "Nilai a: " << a << " | Alamat a: " << &a << "\n";
    std::cout << "Nilai b: " << b << " | Alamat b: " << &b << "\n";
    // Untuk char, kita harus casting ke (void*) agar cout mencetak alamat memori, bukan karakternya
    std::cout << "Nilai c: " << c << " | Alamat c: " << (void*)&c << "\n";

    return 0;
}