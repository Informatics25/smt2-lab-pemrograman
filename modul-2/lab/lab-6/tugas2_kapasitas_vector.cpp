#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    size_t lastCap = 0;

    std::cout << "Mengamati pertumbuhan kapasitas std::vector:\n";
    
    for (int i = 0; i < 20; i++) {
        v.push_back(i);
        
        // Cetak hanya jika kapasitasnya berubah (bertambah)
        if (v.capacity() != lastCap) {
            std::cout << "Size = " << v.size() << " | Capacity = " << v.capacity() << "\n";
            lastCap = v.capacity();
        }
    }

    // Perhatikan bahwa kapasitas tidak bertambah +1 setiap saat, melainkan digandakan!
    return 0;
}