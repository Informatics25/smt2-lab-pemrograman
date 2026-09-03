#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double gpa;
};

int main() {
    vector<Student> roster = {
        {"Alice", 3.75}, 
        {"Bob", 3.50}, 
        {"Carol", 3.90}
    };

    // Urutkan berdasarkan GPA secara menurun menggunakan lambda
    sort(roster.begin(), roster.end(), [](const Student& a, const Student& b) {
        return a.gpa > b.gpa; 
    });

    cout << "Daftar Terurut Berdasarkan IPK (Menurun):\n";
    for (const auto& s : roster) {
        cout << s.name << " \t| IPK: " << s.gpa << "\n";
    }

    return 0;
}