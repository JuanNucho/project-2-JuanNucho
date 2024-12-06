#include "Student.h"

// Default constructor
Student::Student()
    : firstName("Unknown"), lastName("Unknown"), gpa(0.0),
      graduationYear (0), graduationSemester ("Unknown"),
      enrolledYear(0), enrolledSemester("Unknown"), degreeType("Unknown") {}

// Destructor
Student::~Student() {}

// Setters
void Student::setName(const std::string &first, const std::string &last) {
    firstName = first;
    lastName = last;
}

void Student::setGPA(double gpaValue) {
    gpa = gpaValue;
}

void Student::setGraduationInfo(int year, const std::string &semester) {
    graduationYear = year;
    graduationSemester = semester;
}

void Student::setEnrollmentInfo(int year, const std::string &semester) {
    enrolledYear = year;
    enrolledSemester = semester;
}

void Student::setDegreeType(const std::string &type) {
    degreeType = type;
}



// Getters
std::string Student::getName() const {
    return firstName + " "  + lastName;
}
double Student::getGPA() const {
    return gpa;
}

std::string Student::getGraduationInfo() const {
    return graduationSemester + " "  + std::to_string(graduationYear);
}

std::string Student::getEnrollmentInfo() const {
    return enrolledSemester + " "  + std::to_string(enrolledYear);
}

std::string Student::getDegreeType() const {
    return degreeType;
}
