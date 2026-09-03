#include <iostream>

class Counter {
private:
    int count; // Data ini dienkapsulasi, tidak bisa diakses langsung dari luar

public:
    // Konstruktor
    Counter() : count(0) {}

    void increment() {
        count++;
    }

    void decrement() {
        // Melindungi agar tidak turun di bawah nol
        if (count > 0) {
            count--;
        } else {
            std::cout << "[Peringatan] Counter tidak bisa kurang dari 0!\n";
        }
    }

    // Fungsi "Getter" untuk membaca nilai
    int getValue() const {
        return count;
    }
};

int main() {
    Counter hitung;

    hitung.increment();
    hitung.increment();
    std::cout << "Nilai sekarang: " << hitung.getValue() << "\n"; // 2

    hitung.decrement();
    hitung.decrement();
    std::cout << "Nilai sekarang: " << hitung.getValue() << "\n"; // 0

    // Uji batas aman
    hitung.decrement(); // Akan mencetak peringatan
    std::cout << "Nilai akhir: " << hitung.getValue() << "\n"; // Tetap 0

    return 0;
}