#include "ArtStudent.h"

ArtStudent::ArtStudent() : artEmphasis("Unknown") {} // Default constructor

// Setter
void ArtStudent::setArtEmphasis(const std::string &emphasis) {
    artEmphasis = emphasis;
}


// Getter
std::string ArtStudent::getArtEmphasis() const {
    return artEmphasis;
}
std::string ArtStudent::getStudentInfo() const { // Override getStudentInfo
    return getName() + ", GPA: " + std::to_string(getGPA()) +
           ", Enrolled: " + getEnrollmentInfo() +
           ", Graduation: " + getGraduationInfo() +
           ", Degree: " + getDegreeType() +
           ", Emphasis: " + artEmphasis;
}
