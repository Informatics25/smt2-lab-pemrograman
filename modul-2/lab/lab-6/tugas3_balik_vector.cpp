#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50, 60};

    std::cout << "Sebelum dibalik: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    // Membalik elemen menggunakan pendekatan dua penunjuk (Two Pointers)
    int left = 0;
    int right = v.size() - 1;
    
    while (left < right) {
        // Swap manual
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        
        left++;
        right--;
    }

    std::cout << "Setelah dibalik: ";
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}