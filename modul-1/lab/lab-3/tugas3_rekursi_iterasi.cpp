#include <iostream>

// Pendekatan Rekursif (Bisa memicu tumpukan call stack besar)
int fibRekursif(int n) {
    if (n <= 1) return n;
    return fibRekursif(n - 1) + fibRekursif(n - 2);
}

// Pendekatan Iteratif (Penggunaan stack konstan, jauh lebih efisien)
int fibIteratif(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n = 10;
    std::cout << "Fibonacci ke-" << n << " (Rekursif) : " << fibRekursif(n) << "\n";
    std::cout << "Fibonacci ke-" << n << " (Iteratif) : " << fibIteratif(n) << "\n";
    return 0;
}