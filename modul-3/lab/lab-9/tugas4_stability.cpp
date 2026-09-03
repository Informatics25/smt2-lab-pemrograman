#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double gpa;
};

int main() {
    // Perhatikan: Dave dan Eve memiliki IPK yang sama (3.50)
    // Di urutan awal, Dave masuk lebih dulu daripada Eve.
    vector<Student> roster = {
        {"Alice", 3.75}, 
        {"Dave", 3.50}, 
        {"Eve", 3.50},
        {"Carol", 3.90}
    };

    // Gunakan std::stable_sort untuk mempertahankan posisi Dave di atas Eve (karena IPK mereka sama)
    stable_sort(roster.begin(), roster.end(), [](const Student& a, const Student& b) {
        return a.gpa > b.gpa;
    });

    cout << "Daftar dengan Stable Sort:\n";
    for (const auto& s : roster) {
        cout << s.name << " \t| IPK: " << s.gpa << "\n";
    }
    
    // TUGAS: Ganti `stable_sort` menjadi `sort` biasa dan lihat apakah ada perbedaan pada kompilermu.

    return 0;
}
