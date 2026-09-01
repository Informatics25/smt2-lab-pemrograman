#include <iostream>

int main() {
    const int N = 5;
    int arr[N];
    int sum = 0, minVal, maxVal;

    std::cout << "Masukkan " << N << " buah bilangan bulat:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        sum += arr[i];
        
        // Inisialisasi min dan max dengan elemen pertama
        if (i == 0) {
            minVal = maxVal = arr[i];
        } else {
            if (arr[i] < minVal) minVal = arr[i];
            if (arr[i] > maxVal) maxVal = arr[i];
        }
    }

    double average = (double)sum / N;

    std::cout << "Jumlah    : " << sum << "\n";
    std::cout << "Rata-rata : " << average << "\n";
    std::cout << "Minimum   : " << minVal << "\n";
    std::cout << "Maksimum  : " << maxVal << "\n";

    return 0;
}