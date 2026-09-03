#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    // Membuat salinan dari setengah bagian kiri dan kanan
    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    int i = 0, j = 0, k = left;
    
    // Gabungkan kembali (Merge)
    while (i < (int)L.size() && j < (int)R.size()) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    // Salin elemen yang tersisa dari L (jika ada)
    while (i < (int)L.size()) arr[k++] = L[i++];
    
    // Salin elemen yang tersisa dari R (jika ada)
    while (j < (int)R.size()) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return; // Base case
    
    int mid = left + (right - left) / 2;
    
    // Divide (Bagi)
    mergeSort(arr, left, mid);      // Urutkan paruh kiri
    mergeSort(arr, mid + 1, right); // Urutkan paruh kanan
    
    // Combine (Gabung)
    merge(arr, left, mid, right);
}

int main() {
    vector<int> v = {38, 27, 43, 3, 9, 82, 10};
    
    mergeSort(v, 0, v.size() - 1);
    
    cout << "Hasil Merge Sort: ";
    for (int x : v) cout << x << " ";
    // Output: 3 9 10 27 38 43 82
    cout << "\n";
    
    return 0;
}