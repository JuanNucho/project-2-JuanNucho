#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
protected:
    std::string firstName;
    std::string lastName;
    double gpa;
    int graduationYear;
    std::string graduationSemester;
    int enrolledYear;
    std::string enrolledSemester;
    std::string degreeType; // Undergrador Grad

public:
    Student();// Default Constructor
    virtual ~Student(); // Destructor

    // Setters
    void setName(const std::string &first, const std::string &last);
    void setGPA(double gpaValue);
    void setGraduationInfo(int year, const std::string &semester);
    void setEnrollmentInfo(int year, const std::string &semester);
    void setDegreeType(const std::string &type);

    
    // Getters
    std::string getName() const;
    double getGPA() const;
    std::string getGraduationInfo() const;
    std::string getEnrollmentInfo() const;
    std::string getDegreeType() const;
    virtual std::string getStudentInfo() const = 0;  // Virtual function to extrapulate student information
};

#endif 