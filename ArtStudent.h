#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H

#include  "Student.h"

class ArtStudent : public Student {
private:
    std::string artEmphasis; // (Art Studio/Art History/Art Education)

public:
    ArtStudent(); // Default constructor

    // Setters and geter for the art emphasis
    void setArtEmphasis(const std::string &emphasis);
    std::string getArtEmphasis() const;
    std::string getStudentInfo() const override; // Override getStudentInfo
};
#endif