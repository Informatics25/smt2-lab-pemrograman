#include <iostream>
#include <list>

using namespace std;

int main() {
    // std::list adalah implementasi Doubly Linked List di C++
    list<int> dll = {10, 20, 30};
    
    dll.push_front(5);  // O(1)
    dll.push_back(40);  // O(1)

    cout << "Isi std::list:\n";
    for (int x : dll) {
        cout << x << " ";
    }
    cout << "\n";
    // Output: 5 10 20 30 40

    // Menggunakan iterator untuk menyisipkan di tengah dengan O(1)
    auto it = dll.begin();
    ++it; 
    ++it; // Iterator sekarang menunjuk ke angka 20

    // Menyisipkan angka 15 tepat sebelum 20
    dll.insert(it, 15); 
    
    cout << "Setelah disisipkan 15 di tengah:\n";
    for (int x : dll) cout << x << " ";
    cout << "\n";

    return 0;
}