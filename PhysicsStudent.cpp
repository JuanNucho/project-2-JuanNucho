#include "PhysicsStudent.h"




PhysicsStudent::PhysicsStudent() : concentration("Unknown") {} // Default constructor

// Setter
void PhysicsStudent::setConcentration(const std::string &conc) {
    concentration = conc;
}
// Getter
std::string PhysicsStudent::getConcentration() const {
    return concentration;
}

std::string PhysicsStudent::getStudentInfo() const { // Override getStudentInfo
    return getName() + ", GPA: " + std::to_string(getGPA()) +
           ", Enrolled: " + getEnrollmentInfo() +
           ", Graduation: " + getGraduationInfo() +
           ", Degree: " + getDegreeType() +
           ", Concentration: " + concentration;
}