#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

// Fungsi sorting sederhana (hanya Bubble Sort untuk contoh lab)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    // Generate data acak
    int N = 5000; // Coba ubah menjadi 1000 atau 10000
    vector<int> data(N);
    for (int i = 0; i < N; i++) data[i] = rand() % 10000;

    // Hitung waktu Bubble Sort
    auto start = high_resolution_clock::now();
    
    bubbleSort(data); // Eksekusi
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Waktu Bubble Sort (N=" << N << "): " << duration.count() << " ms\n";
    
    // TUGAS: Tambahkan penghitungan waktu untuk Selection, Insertion, dan std::sort!

    return 0;
}