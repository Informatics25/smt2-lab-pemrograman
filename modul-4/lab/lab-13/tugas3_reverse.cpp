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
    ~LinkedList() {
        while (head) { Node* tmp = head; head = head->next; delete tmp; }
    }
    void pushFront(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
    }
    void print() const {
        for (Node* cur = head; cur; cur = cur->next) cout << cur->data << " -> ";
        cout << "NULL\n";
    }

    // Membalik urutan Linked List secara in-place (O(N) waktu, O(1) memori tambahan)
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;  // Simpan node berikutnya
            current->next = prev;  // Putar arah pointer ke node sebelumnya
            prev = current;        // Majukan prev
            current = next;        // Majukan current
        }
        head = prev; // Update head ke elemen terakhir yang menjadi elemen pertama
    }
};

int main() {
    LinkedList list;
    list.pushFront(40);
    list.pushFront(30);
    list.pushFront(20);
    list.pushFront(10);

    cout << "Sebelum dibalik:\n";
    list.print();

    list.reverse();

    cout << "Setelah dibalik:\n";
    list.print();

    return 0;
}