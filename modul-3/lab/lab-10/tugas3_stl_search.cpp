#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Array harus terurut untuk menggunakan binary_search, lower_bound, upper_bound
    vector<int> v = {1, 3, 3, 3, 5, 7, 9};

    int target = 3;

    // 1. Mengecek keberadaan
    if (binary_search(v.begin(), v.end(), target)) {
        cout << "Angka " << target << " ada di dalam array.\n";
    }

    // 2. Mencari posisi awal dan akhir menggunakan lower_bound & upper_bound
    auto lo = lower_bound(v.begin(), v.end(), target);
    auto hi = upper_bound(v.begin(), v.end(), target);

    // 3. Menghitung jumlah kemunculan
    // Iterator bisa dikurangkan untuk mengetahui jarak antar elemen
    int count = hi - lo; 
    
    cout << "Posisi elemen pertama (lower_bound) : Indeks " << (lo - v.begin()) << "\n";
    cout << "Posisi elemen tepat setelah target (upper_bound) : Indeks " << (hi - v.begin()) << "\n";
    cout << "Jumlah angka " << target << " di array adalah : " << count << " buah\n";

    return 0;
}