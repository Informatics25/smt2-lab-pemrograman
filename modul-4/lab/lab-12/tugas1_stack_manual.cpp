#include <iostream>
using namespace std;

class IntStack {
private:
    int data[1000];
    int topIdx; // Indeks dari elemen teratas; -1 jika kosong

public:
    IntStack() : topIdx(-1) {}

    void push(int x) {
        if (topIdx >= 999) {
            cout << "Stack overflow!\n";
            return;
        }
        data[++topIdx] = x;
    }

    int pop() {
        if (topIdx < 0) {
            cout << "Stack underflow!\n";
            return -1;
        }
        return data[topIdx--];
    }

    int top() const { return data[topIdx]; }
    bool empty() const { return topIdx < 0; }
    int size() const { return topIdx + 1; }
};

int main() {
    IntStack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Isi stack (pop satu per satu): ";
    while (!s.empty()) {
        cout << s.pop() << " ";
    }
    cout << "\n";
    // Output: 30 20 10
    
    return 0;
}