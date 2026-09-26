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

    // Mengembalikan true jika target ada di dalam list
    bool contains(int target) const {
        Node* cur = head;
        while (cur != nullptr) {
            if (cur->data == target) {
                return true; // Ditemukan
            }
            cur = cur->next; // Pindah ke simpul berikutnya
        }
        return false; // Tidak ditemukan hingga ujung
    }
};

int main() {
    LinkedList list;
    list.pushFront(30);
    list.pushFront(20);
    list.pushFront(10);

    cout << "Apakah 20 ada di list? " << (list.contains(20) ? "Ya" : "Tidak") << "\n";
    cout << "Apakah 99 ada di list? " << (list.contains(99) ? "Ya" : "Tidak") << "\n";

    return 0;
}