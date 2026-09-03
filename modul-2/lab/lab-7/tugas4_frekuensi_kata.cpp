#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
    std::string barisTeks;
    std::cout << "Masukkan satu baris teks: ";
    std::getline(std::cin, barisTeks);

    // Stringstream sangat berguna untuk memecah kalimat menjadi kata-kata berdasarkan spasi
    std::stringstream ss(barisTeks);
    std::string kata;
    
    // Menggunakan std::map untuk menyimpan pasangan <kata, jumlahKemunculan>
    std::map<std::string, int> frekuensi;

    while (ss >> kata) {
        frekuensi[kata]++;
    }

    std::cout << "\nFrekuensi kemunculan kata:\n";
    // Iterasi untuk mencetak isi map
    for (const auto& pasangan : frekuensi) {
        std::cout << pasangan.first << " : " << pasangan.second << " kali\n";
    }

    return 0;
}
