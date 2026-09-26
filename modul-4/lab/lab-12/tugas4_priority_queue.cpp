#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Diberikan N bilangan bulat, cetak secara menurun.
    // std::priority_queue adalah max-heap secara default, 
    // jadi nilai terbesar akan selalu berada di posisi "top".
    
    priority_queue<int> pq;
    
    pq.push(15);
    pq.push(42);
    pq.push(8);
    pq.push(99);
    pq.push(23);

    cout << "Dicetak menggunakan priority_queue (Otomatis menurun):\n";
    while (!pq.empty()) {
        cout << pq.top() << " "; 
        pq.pop(); // Hapus nilai terbesar, heap akan mengatur ulang elemen terbesarnya
    }
    cout << "\n";
    // Output: 99 42 23 15 8

    return 0;
}