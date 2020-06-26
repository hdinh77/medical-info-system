// Doctor.h
// Heather Dinh 6/20/20

#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

class Doctor : public Person{
    public:
        Doctor();
        void enterRecords();
        std::string printRecords() const throw(NoAccessException)

        // Getter methods
        std::string getPosition() const throw(NoAccessException);
        std::string getCertification() const throw(NoAccessException);
        std::string getMedicalSchool() const throw(NoAccessException);
        std::string getLocation() const throw(NoAccessException);
        int getPhoneNumber() const throw(NoAccessException);
        std::string getEmail() const throw(NoAccessException);

        // Setter methods
        void setEmail(std::string curEmail) throw(NoAccessException);                               // check if has @ . com/org/etc
        void setPhoneNumber(int curNumber) throw(NoAccessException);                                // need to separate to area code and number (overflow)
        void setPosition(std::string curPosition) throw(NoAccessException);
        void setMedicalSchool(std::string curMedicalSchool) throw(NoAccessException);
        void setLocation(std::string curLocation) throw(NoAccessException);
        void setCertification(std::string curCertification) throw (NoAccessException);

    private:
        // Professional information
        std::string position;
        std::string certification;
        std::string medicalSchool;

        // Contact information
        std::string location;
        int phoneNumber;
        std::string email;

        // Array stores the names of patients they have
        std::string patientNames[101];
};


#endif