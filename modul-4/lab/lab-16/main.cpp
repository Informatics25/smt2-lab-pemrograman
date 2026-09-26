#include <iostream>
#include <vector>
#include <algorithm>
#include "Region.h"

// Deklarasi fungsi muat dari Database.cpp
std::vector<Region*> loadFromCSV(const std::string& filename);

int main() {
    // Pastikan path CSV sesuai dengan struktur direktori proyek Anda
    std::vector<Region*> db = loadFromCSV("data/regions.csv");
    std::cout << "Berhasil memuat " << db.size() << " data daerah.\n";

    int choice;
    do {
        std::cout << "\n=== Regional Statistics Explorer ===\n";
        std::cout << "1. Tampilkan semua daerah\n";
        std::cout << "2. Cari berdasarkan nama\n";
        std::cout << "3. Filter berdasarkan provinsi\n";
        std::cout << "4. Urutkan berdasarkan HDI (menurun)\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (Region* r : db) {
                    r->displayInfo(); // Polimorfisme bekerja di sini!
                }
                break;
                // case 2: // Logika pencarian diimplementasikan mahasiswa
                // case 3: // Logika filter diimplementasikan mahasiswa
                // case 4: // Logika std::sort dengan lambda diimplementasikan mahasiswa
            case 5:
                std::cout << "Menyimpan dan keluar...\n";
                // Logika saveToCSV di sini
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 5);

    // Bersihkan memori Heap
    for (Region* r : db) {
        delete r;
    }

    return 0;
}