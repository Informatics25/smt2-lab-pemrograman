#include <iostream>

int main() {
    int n;
    std::cout << "Masukkan ukuran array: ";
    std::cin >> n;

    // Alokasi array dinamis di Heap sebesar N
    int* arr = new int[n]; 

    // Isi array dengan nilai kuadrat
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    std::cout << "Isi array dinamis: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // INGAT: Array harus dibebaskan dengan delete[], bukan delete biasa!
    delete[] arr; 
    arr = nullptr;

    return 0;
}