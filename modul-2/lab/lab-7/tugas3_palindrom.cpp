#include <iostream>
#include <string>

bool isPalindrome(const std::string& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    // Menguji pada 5 kata yang berbeda
    std::string kataUji[] = {"katak", "makan", "malam", "program", "kasurrusak"};

    for (const std::string& kata : kataUji) {
        std::cout << kata << " -> ";
        if (isPalindrome(kata)) {
            std::cout << "Palindrom\n";
        } else {
            std::cout << "Bukan Palindrom\n";
        }
    }

    return 0;
}