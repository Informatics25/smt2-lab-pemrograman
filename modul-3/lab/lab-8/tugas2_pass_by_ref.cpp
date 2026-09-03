#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    double gpa;
};

// Fungsi menerima struct dengan Pass-by-Reference (memakai &)
// Sehingga perubahan di dalam fungsi akan mengubah data aslinya
void updateGPA(Student& s, double newGPA) {
    s.gpa = newGPA;
    std::cout << ">> Di dalam fungsi: IPK " << s.name << " diubah menjadi " << s.gpa << "\n";
}

int main() {
    Student s1 = {101, "Alice", 3.75};
    
    std::cout << "Sebelum fungsi: IPK " << s1.name << " adalah " << s1.gpa << "\n";
    
    updateGPA(s1, 4.00);
    
    std::cout << "Setelah fungsi: IPK " << s1.name << " menjadi " << s1.gpa << "\n";
    
    return 0;
}