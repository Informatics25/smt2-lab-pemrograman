#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr; // p menunjuk ke arr[0]

    std::cout << "Menelusuri array tanpa tanda kurung siku [] :\n";
    for (int i = 0; i < 5; i++) {
        // *(p + i) melompat sebanyak i buah integer di memori, lalu mengambil nilainya
        std::cout << "Elemen ke-" << i << " = " << *(p + i) << "\n";
    }

    return 0;
}