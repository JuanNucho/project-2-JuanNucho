#include "ArtStudent.h"
#include "PhysicsStudent.h"
#include <vector>
#include <fstream>
#include  <iostream>

int main() {
    std::vector<ArtStudent *> artStudents; // Creates vectors for the students
    std::vector<PhysicsStudent *> physicsStudents;

    for (int i = 0; i < 5; i++) { // add in the Art students
        ArtStudent *art = new ArtStudent();
        art->setName("ArtFirst" + std::to_string(i), "ArtLast" + std::to_string(i));
        art->setGPA(3.0 + i * 0.1);
        art->setEnrollmentInfo(2020, "Fall");
        art->setGraduationInfo(2024, "Spring");
        art->setDegreeType("Undergrad");
        art->setArtEmphasis("Art Studio");
        artStudents.push_back(art);
    }

    // Add Physics Students
    for (int i = 0; i < 5; i++) {
        PhysicsStudent *phys = new PhysicsStudent();
        phys->setName("PhysFirst" + std::to_string(i), "PhysLast" + std::to_string(i));
        phys->setGPA(3.5 - i * 0.1);
        phys->setEnrollmentInfo(2019, "Spring");
        phys->setGraduationInfo(2023, "Fall");
        phys->setDegreeType("Grad");
        phys->setConcentration("Biophysics");
        physicsStudents.push_back(phys);
    }


    // Write students into teh file
    std::ofstream outFile("student_info.dat");
    for (const auto &student : artStudents) {
        outFile << student->getStudentInfo() << std::endl;
        delete student; // Free memory
    }
    for (const auto &student : physicsStudents) {
        outFile << student->getStudentInfo() << std::endl;
        delete student; // Free memory
    }

    
outFile.close();

    return 0;
}