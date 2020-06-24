// Doctor.h
// Heather Dinh 6/20/20

#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
class NoAccessException{};

class Doctor {
    public:
        Doctor();
        bool toggleAccess();

        // Getter methods
        std::string getName() const;
        int getIdNumber() const throw(NoAccessException);
        std::string getPosition() const throw(NoAccessException);
        std::string getCertification() const throw(NoAccessException);
        std::string getMedicalSchool() const throw(NoAccessException);
        std::string getLocation() const throw(NoAccessException);
        int getPhoneNumber() const throw(NoAccessException);
        std::string getEmail() const throw(NoAccessException);

    private:
        void setPassword();
        bool access;
        std::string password;

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