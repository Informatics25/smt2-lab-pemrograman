#include <iostream>
#include <vector>

using namespace std;

// Fungsi pencarian biner menggunakan rekursi
int binarySearchRec(const vector<int>& arr, int target, int lo, int hi) {
    if (lo > hi) return -1; // Basis: target tidak ditemukan

    int mid = lo + (hi - lo) / 2;

    if (arr[mid] == target) {
        return mid; // Ditemukan
    } else if (arr[mid] < target) {
        // Cari di setengah bagian kanan
        return binarySearchRec(arr, target, mid + 1, hi);
    } else {
        // Cari di setengah bagian kiri
        return binarySearchRec(arr, target, lo, mid - 1);
    }
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 15, 23, 37, 45, 60};
    
    // Uji 5 target berbeda
    vector<int> targets = {15, 2, 60, 10, 100}; // 3 ada, 2 tidak ada

    for (int t : targets) {
        int idx = binarySearchRec(arr, t, 0, arr.size() - 1);
        if (idx != -1) {
            cout << "Target " << t << " ditemukan di indeks " << idx << "\n";
        } else {
            cout << "Target " << t << " TIDAK ditemukan!\n";
        }
    }

    return 0;
}