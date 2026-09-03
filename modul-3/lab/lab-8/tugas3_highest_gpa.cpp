#include <iostream>
#include <string>
#include <vector>

struct Student {
    int id;
    std::string name;
    double gpa;
};

// Fungsi mengembalikan struct Student
Student getBestStudent(const std::vector<Student>& arr) {
    // Asumsikan mahasiswa pertama memiliki IPK tertinggi pada awalnya
    Student best = arr[0]; 
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i].gpa > best.gpa) {
            best = arr[i];
        }
    }
    return best;
}

int main() {
    std::vector<Student> roster = {
        {101, "Alice", 3.75},
        {102, "Bob", 3.50},
        {103, "Carol", 3.90}, 
        {104, "David", 3.20}
    };

    Student terbaik = getBestStudent(roster);
    
    std::cout << "Mahasiswa dengan IPK tertinggi:\n";
    std::cout << "Nama: " << terbaik.name << " (IPK: " << terbaik.gpa << ")\n";

    return 0;
}