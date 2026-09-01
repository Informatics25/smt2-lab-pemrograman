#include <iostream>

int main() {
    // Kita memesan memori 100 integer di Heap
    int* bocor = new int[100];
    
    bocor[0] = 500;
    std::cout << "Data diakses: " << bocor[0] << "\n";

    // KESENGAJAAN: Kita lupa memanggil delete[] bocor;
    // Saat program selesai, memori ini tidak dikembalikan ke sistem (Memory Leak).

    std::cout << "Program selesai, namun memori tidak dibebaskan!\n";
    
    /* 
       LATIHAN: Kompilasi kode ini (g++ tugas3_memory_leak.cpp).
       Lalu jalankan menggunakan Valgrind di Linux:
       valgrind --leak-check=full ./a.out
       Amati laporannya!
    */
    
    return 0;
}