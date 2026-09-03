#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

// --- [Tempel fungsi merge dan mergeSort dari Tugas 1 di sini] ---
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0, j = 0, k = left;
    while (i < (int)L.size() && j < (int)R.size()) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < (int)L.size()) arr[k++] = L[i++];
    while (j < (int)R.size()) arr[k++] = R[j++];
}
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// --- [Insertion Sort] ---
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N = 10000; // Coba ubah menjadi 100, 1000, 10000, 100000
    vector<int> data_asli(N);
    for (int i = 0; i < N; i++) data_asli[i] = rand() % 100000;

    vector<int> data1 = data_asli;
    vector<int> data2 = data_asli;

    // Waktu Merge Sort
    auto startM = high_resolution_clock::now();
    mergeSort(data1, 0, data1.size() - 1);
    auto stopM = high_resolution_clock::now();
    auto durM = duration_cast<milliseconds>(stopM - startM);

    // Waktu Insertion Sort
    auto startI = high_resolution_clock::now();
    insertionSort(data2);
    auto stopI = high_resolution_clock::now();
    auto durI = duration_cast<milliseconds>(stopI - startI);

    cout << "Banyak Data: " << N << "\n";
    cout << "Waktu Merge Sort     : " << durM.count() << " ms\n";
    cout << "Waktu Insertion Sort : " << durI.count() << " ms\n";
    // Untuk N = 100000, Insertion Sort akan sangat lambat, sedangkan Merge Sort akan tetap cepat.

    return 0;
}