#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string& expr) {
    stack<char> s;
    for (char c : expr) {
        // Jika kurung buka, masukkan ke stack
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }
        // Jika kurung tutup, periksa kecocokannya
        else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) return false; // Ada tutup tapi tidak ada buka

            char open = s.top();
            s.pop();

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false; // Kurung tidak cocok (mismatched)
                }
        }
    }
    // Harus kosong di akhir jika semua kurung seimbang
    return s.empty();
}

int main() {
    string testCases[] = {
        "({[]})",   // Seimbang
        "({[})",    // Tidak seimbang
        "((()))",   // Seimbang
        "(()",      // Tidak seimbang (kurang tutup)
        ")()("      // Tidak seimbang (terbalik)
    };

    for (const string& expr : testCases) {
        cout << expr << " -> " << (isBalanced(expr) ? "Seimbang" : "TIDAK Seimbang") << "\n";
    }

    return 0;
}