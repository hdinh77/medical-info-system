// Patient.h
// Heather Dinh 6/20/20

#ifndef PATIENT_H
#define PATIENT_H

#include <string>

#define NONE "N/A"

class NoAccessException{};

struct DOB {
    int day;
    int month;
    int year;
};

class Patient {
    public:
        Patient();
        void createBasicInfo();
        void enterRecords();
        std::string getName() const;
        bool toggleAccess();        // this toogles the access bool if the correct password is entered
                                    // makes sure only the user can access his or her information
                                    // also has an override value "override" for administrators'
        // the following functions will only execute if access = true

        // Getter functions
        std::string printMedicalRecords() const throw(NoAccessException);
        int getIdNumber() const throw(NoAccessException);
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
        void setName(std::string curName) throw(NoAccessException);
        void setIdNumber(int curNum) throw(NoAccessException);                                     // check 6 numbers
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
        void setPassword();
        bool checkValidPassword(std::string cur) const;
        std::string password;
        bool access;

        // Personal information
        std::string name;
        int idNumber;
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