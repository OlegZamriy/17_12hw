
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    static int studentCount;

public:
    std::string fullName;
    std::string birthDate;
    std::string contactNumber;
    std::string city;
    std::string country;
    std::string universityName;
    std::string universityCity;
    std::string universityCountry;
    std::string groupNumber;

    Student();
    Student(const std::string& name, const std::string& birthdate, const std::string& contact,
        const std::string& city, const std::string& country, const std::string& univName,
        const std::string& univCity, const std::string& univCountry, const std::string& group);

    void input();
    void display() const;

    static int getStudentCount();
};

#endif // STUDENT_H
