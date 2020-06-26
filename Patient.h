// Patient.h
// Heather Dinh 6/20/20

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "Person.h"

#define NONE "N/A"

struct DOB {
    int day;
    int month;
    int year;
};

class Patient : public Person{
    public:
        Patient();
        ~Patient();
        void enterRecords();
        std::string printRecords() const throw(NoAccessException);

        // Getter functions
        std::string getBirthday() const throw(NoAccessException);
        std::string getPlaceBirth() const throw(NoAccessException);
        std::string getMaritalStatus() const throw(NoAccessException);
        std::string getEmail() const throw(NoAccessException);
        int getPhoneNumber() const throw(NoAccessException);
        std::string getOccupation() const throw(NoAccessException);
        std::string getMedicalConditions() const throw(NoAccessException);
        std::string getMedicalHistory() const throw(NoAccessException);
        std::string getMedications() const throw(NoAccessException);
        std::string getDoctorName() const throw(NoAccessException);

        // Setter functions
        void setBirthday(std::string curMonth, std::string curDay, std::string curYear) throw(NoAccessException);   //check valid dates
        void setPlaceBirth(std::string curPlace) throw(NoAccessException);
        void setMaritalStatus(std::string curStatus) throw(NoAccessException);                      // only true or false
        void setEmail(std::string curEmail) throw(NoAccessException);                               // check if has @ . com/org/etc
        void setPhoneNumber(int curNumber) throw(NoAccessException);                                // need to separate to area code and number (overflow)
        void setOccupation(std::string curOccupation) throw(NoAccessException);
        void setMedicalConditions(std::string curCondition) throw(NoAccessException);
        void setMedicalHistory(std::string curHistory) throw(NoAccessException);
        void setMedications(std::string curMedication) throw(NoAccessException);
        void setDoctor(std::string curDoctor) throw(NoAccessException);

    private:
        // Personal information
        DOB birthday; 
        std::string placeBirth;
        std::string maritalStatus;
        std::string email;
        int phoneNumber;
        std::string occupation;

        // Medical information
        std::string medicalConditions;
        std::string medicalHistory;
        std::string medications;
        
        // Family doctor's name
        std::string doctorName;
};



#endif