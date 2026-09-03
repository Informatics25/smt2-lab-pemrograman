#include <iostream>
#include <string>
#include <vector>

// Mendefinisikan struct Student
struct Student {
    int id;
    std::string name;
    double gpa;
};

int main() {
    // Membuat array (atau vector) yang berisi 5 mahasiswa menggunakan aggregate initialization
    std::vector<Student> roster = {
        {101, "Alice", 3.75},
        {102, "Bob", 3.50},
        {103, "Carol", 3.90},
        {104, "David", 3.20},
        {105, "Eve", 3.85}
    };

    std::cout << "Daftar Mahasiswa:\n";
    // Menggunakan perulangan range-based untuk mencetak
    for (const auto& s : roster) {
        std::cout << "ID: " << s.id << " | Nama: " << s.name << " | GPA: " << s.gpa << "\n";
    }

    return 0;
}