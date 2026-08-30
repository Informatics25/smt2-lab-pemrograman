#include <iostream>

void fungsiBar() {
    int c = 0;
    std::cout << "Alamat memori c (di fungsiBar): " << &c << "\n";
}

void fungsiFoo() {
    int b = 10;
    std::cout << "Alamat memori b (di fungsiFoo): " << &b << "\n";
    fungsiBar();
}

int main() {
    int a = 5;
    std::cout << "Alamat memori a (di main): " << &a << "\n";
    fungsiFoo();
    // Perhatikan bahwa alamat memorinya akan berdekatan namun semakin menurun/mengecil (stack tumbuh ke bawah)
    return 0;
}