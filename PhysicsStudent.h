#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H

#include "Student.h"

class PhysicsStudent : public Student {
private:
    std::string concentration; // (Biophysics/Earth/Planetary Sciences)

public:
    PhysicsStudent(); // Default constructor

    // Setter and getter used for concetration
    void setConcentration(const std::string &conc);
    std::string getConcentration() const;
    std::string getStudentInfo()  const override; // Override --> getStudentInfo
};
#endif