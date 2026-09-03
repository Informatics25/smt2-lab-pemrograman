#include <iostream>
#include <vector>

using namespace std;

// Memodifikasi fungsi merge untuk mengembalikan jumlah inversi
long long mergeCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    long long inv = 0;
    int i = 0, j = 0, k = left;
    
    while (i < (int)L.size() && j < (int)R.size()) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            // INTI ALGORITMA: Jika elemen Kanan lebih kecil dari elemen Kiri,
            // maka elemen Kanan tersebut lebih kecil dari SEMUA sisa elemen di Kiri
            inv += L.size() - i; 
        }
    }
    
    while (i < (int)L.size()) arr[k++] = L[i++];
    while (j < (int)R.size()) arr[k++] = R[j++];
    
    return inv;
}

// Memodifikasi mergeSort agar mengembalikan total inversi
long long countInversions(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;
    
    int mid = left + (right - left) / 2;
    long long inv = 0;
    
    inv += countInversions(arr, left, mid);       // Hitung inversi di paruh kiri
    inv += countInversions(arr, mid + 1, right);  // Hitung inversi di paruh kanan
    inv += mergeCount(arr, left, mid, right);     // Hitung inversi saat digabungkan
    
    return inv;
}

int main() {
    vector<int> v = {2, 4, 1, 3, 5};
    
    cout << "Jumlah Inversi: " << countInversions(v, 0, v.size() - 1) << "\n";
    // Output yang diharapkan: 3 (Pasangan inversi: (2,1), (4,1), (4,3))
    
    return 0;
}
