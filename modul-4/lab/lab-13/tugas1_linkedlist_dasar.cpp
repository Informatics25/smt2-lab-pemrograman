#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Menyisipkan di depan: O(1)
    void pushFront(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
    }

    // Menyisipkan di akhir: O(N) karena harus mencari node paling ujung
    void pushBack(int x) {
        Node* n = new Node(x);
        if (!head) {
            head = n;
            return;
        }
        Node* cur = head;
        while (cur->next) {
            cur = cur->next;
        }
        cur->next = n;
    }

    // Mencetak isi linked list
    void print() const {
        for (Node* cur = head; cur; cur = cur->next) {
            cout << cur->data << " -> ";
        }
        cout << "NULL\n";
    }

    // Destruktor: Wajib untuk mencegah kebocoran memori (Memory Leak)
    ~LinkedList() {
        while (head) {
            Node* tmp = head;
            head = head->next;
            delete tmp; // Hapus dari memori Heap
        }
        // TUGAS 4: Coba hapus/comment bagian delete tmp ini, lalu jalankan dengan Valgrind. 
        // Anda akan melihat laporan kebocoran memori!
    }
};

int main() {
    LinkedList list;
    
    list.pushFront(30);
    list.pushFront(20);
    list.pushFront(10);
    list.pushBack(40);
    
    cout << "Isi Linked List:\n";
    list.print(); // Output: 10 -> 20 -> 30 -> 40 -> NULL
    
    return 0;
}