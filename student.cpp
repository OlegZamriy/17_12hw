
#include "student.h"
#include <iostream>

int Student::studentCount = 0;

Student::Student() {
    studentCount++;
}

Student::Student(const std::string& name, const std::string& birthdate, const std::string& contact,
    const std::string& city, const std::string& country, const std::string& univName,
    const std::string& univCity, const std::string& univCountry, const std::string& group)
    : fullName(name), birthDate(birthdate), contactNumber(contact), city(city), country(country),
    universityName(univName), universityCity(univCity), universityCountry(univCountry), groupNumber(group) {
    studentCount++;
}

void Student::input() {
    std::cout << "Enter full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Enter birth date: ";
    std::getline(std::cin, birthDate);

    std::cout << "Enter contact number: ";
    std::getline(std::cin, contactNumber);

    std::cout << "Enter city: ";
    std::getline(std::cin, city);

    std::cout << "Enter country: ";
    std::getline(std::cin, country);

    std::cout << "Enter university name: ";
    std::getline(std::cin, universityName);

    std::cout << "Enter university city: ";
    std::getline(std::cin, universityCity);

    std::cout << "Enter university country: ";
    std::getline(std::cin, universityCountry);

    std::cout << "Enter group number: ";
    std::getline(std::cin, groupNumber);
}

void Student::display() const {
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Birth Date: " << birthDate << "\n";
    std::cout << "Contact Number: " << contactNumber << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "Country: " << country << "\n";
    std::cout << "University Name: " << universityName << "\n";
    std::cout << "University City: " << universityCity << "\n";
    std::cout << "University Country: " << universityCountry << "\n";
    std::cout << "Group Number: " << groupNumber << "\n";
}

int Student::getStudentCount() {
    return studentCount;
}
