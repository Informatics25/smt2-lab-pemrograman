#include <iostream>
#include <cstring>

int main() {
    char kata1[20] = "Pemrograman";
    char kata2[] = " C++";

    std::cout << "Panjang kata1: " << strlen(kata1) << "\n";

    // Penggabungan (Concatenation)
    strcat(kata1, kata2);
    std::cout << "Hasil strcat : " << kata1 << "\n";

    // Perbandingan
    if (strcmp(kata1, "Pemrograman C++") == 0) {
        std::cout << "String sama persis!\n";
    }

    // SIMULASI BUFFER OVERFLOW (Hati-hati!)
    char bufferKecil[5];
    // Menyalin kata yang panjangnya lebih dari 5 ke bufferKecil
    // Ini berbahaya dan bisa menyebabkan program crash (Segmentation fault)
    // strcpy(bufferKecil, "Teks yang sangat panjang"); 
    
    return 0;
}