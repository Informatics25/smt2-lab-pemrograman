#include <iostream>
using namespace std;

class IntQueue {
private:
    static const int CAP = 1000;
    int data[CAP];
    int frontIdx, backIdx, count;

public:
    IntQueue() : frontIdx(0), backIdx(0), count(0) {}

    void enqueue(int x) {
        if (count == CAP) { 
            cout << "Queue full!\n"; 
            return; 
        }
        data[backIdx] = x;
        backIdx = (backIdx + 1) % CAP; // Circular wrap-around
        count++;
    }

    int dequeue() {
        if (count == 0) { 
            cout << "Queue empty!\n"; 
            return -1; 
        }
        int x = data[frontIdx];
        frontIdx = (frontIdx + 1) % CAP; // Circular wrap-around
        count--;
        return x;
    }

    bool empty() const { return count == 0; }
    int size() const { return count; }
};

int main() {
    IntQueue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout << "Isi queue (dequeue satu per satu): ";
    while (!q.empty()) {
        cout << q.dequeue() << " ";
    }
    cout << "\n";
    // Output: 10 20 30
    
    return 0;
}