#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(const vector<int>& arr, int target) {
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2; // Menghindari overflow
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main() {
    int N = 1000000; // 10^6 elemen
    vector<int> data(N);
    
    // Mengisi array agar terurut (0, 1, 2, 3, ...)
    for (int i = 0; i < N; i++) data[i] = i;

    int target = N - 1; // Mencari elemen paling akhir (kasus terburuk)

    // Waktu Linear Search
    auto startL = high_resolution_clock::now();
    linearSearch(data, target);
    auto stopL = high_resolution_clock::now();
    auto durationL = duration_cast<microseconds>(stopL - startL);

    // Waktu Binary Search
    auto startB = high_resolution_clock::now();
    binarySearch(data, target);
    auto stopB = high_resolution_clock::now();
    auto durationB = duration_cast<microseconds>(stopB - startB);

    cout << "Waktu Linear Search : " << durationL.count() << " microseconds\n";
    cout << "Waktu Binary Search : " << durationB.count() << " microseconds\n";

    return 0;
}