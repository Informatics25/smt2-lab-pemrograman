#include <iostream>
#include <string>

int main() {
    std::string kalimat;
    int jumlahSpasi = 0;

    std::cout << "Masukkan sebuah kalimat: ";
    // Menggunakan getline agar spasi ikut terbaca
    std::getline(std::cin, kalimat); 

    std::cout << "Panjang kalimat: " << kalimat.length() << " karakter\n";

    // Menghitung jumlah spasi
    for (char c : kalimat) {
        if (c == ' ') {
            jumlahSpasi++;
        }
    }
    std::cout << "Jumlah spasi: " << jumlahSpasi << "\n";

    // Membalikkan kalimat secara manual
    std::string kalimatDibalik = "";
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        kalimatDibalik += kalimat[i];
    }
    std::cout << "Kalimat dibalik: " << kalimatDibalik << "\n";

    return 0;
}