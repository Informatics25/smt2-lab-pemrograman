#include <iostream>

int main() {
    int angkaMisterius; // Sengaja tidak diberi nilai awal
    
    // Nilai yang dicetak adalah nilai sampah (garbage value) yang kebetulan ada di memori
    std::cout << "Isi variabel tanpa nilai awal: " << angkaMisterius << "\n";
    
    // Coba kompilasi dengan g++ -Wall tugas5_uninitialized.cpp
    return 0;
}
