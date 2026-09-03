#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
};

// Fungsi pencarian biner kustom untuk Struct Student berdasarkan ID
int searchStudentById(const vector<Student>& arr, int targetId) {
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid].id == targetId) return mid;
        else if (arr[mid].id < targetId) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main() {
    vector<Student> roster = {
        {105, "Eve"}, {101, "Alice"}, {104, "Dave"}, {102, "Bob"}, {103, "Carol"}
    };

    // Langkah 1: URUTKAN BERDASARKAN ID sebelum bisa dilakukan pencarian biner
    sort(roster.begin(), roster.end(), [](const Student& a, const Student& b) {
        return a.id < b.id;
    });

    cout << "Daftar telah diurutkan berdasarkan ID.\n";

    // Langkah 2: Lakukan pencarian biner
    int targetId = 104;
    int index = searchStudentById(roster, targetId);

    if (index != -1) {
        cout << "Ditemukan! ID " << targetId << " adalah milik " << roster[index].name << "\n";
    } else {
        cout << "Mahasiswa dengan ID " << targetId << " tidak ditemukan.\n";
    }

    return 0;
}
