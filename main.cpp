
#include "student.h"
#include <iostream>

int main() {
    Student student1, student2;

    std::cout << "Enter details for student 1:\n";
    student1.input();

    std::cout << "\nEnter details for student 2:\n";
    student2.input();

    std::cout << "\nDetails for student 1:\n";
    student1.display();

    std::cout << "\nDetails for student 2:\n";
    student2.display();

    std::cout << "\nTotal number of students: " << Student::getStudentCount() << "\n";

    return 0;
}
