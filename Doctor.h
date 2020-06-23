// Doctor.h
// Heather Dinh 6/20/20

#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
    public:
        Doctor();
        ~Doctor();
        std::string getName() const;
        bool toggleAccess();

        int getIdNumber() const;
    private:
        // Professional information
        std::string name;
        int idNumber;
        std::string position;
        std::string certification;
        std::string medicalSchool;

        // Contact information
        std::string location;
        int phoneNumber;
        std::string email;

        // Array stores the names of patients they have
        std::string patientNames[];
};


#endif