#include <iostream>

// Fungsi DIDEKLARASIKAN, tapi tidak pernah DIDEFINISIKAN isinya
int add(int a, int b);

int main() {
    // Kompiler akan lolos, tapi LINKER akan gagal karena tidak bisa
    // menemukan kode asli dari fungsi add()
    std::cout << "Hasil add: " << add(3, 4) << std::endl;
    return 0;
}