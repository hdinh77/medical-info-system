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
        bool enterRecords();
        void setPassword();
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
        bool getMaritalStatus() const throw(NoAccessException);
        std::string getEmail() const throw(NoAccessException);
        int getPhoneNumber() const throw(NoAccessException);
        std::string getOccupation() const throw(NoAccessException);
        std::string getMedicalCondition() const throw(NoAccessException);
        std::string getMedicalHistory() const throw(NoAccessException);
        std::string getMedications() const throw(NoAccessException);

        std::string getDoctorName() const throw(NoAccessException);

        // Setter functions
        void setName(std::string curName) throw(NoAccessException);
        void setIdNumber(int curNum) throw(NoAccessException);
        void setBirthday(std::string curMonth, std::string curDay, std::string curYear) throw(NoAccessException);
        void setPlaceBirth(std::string curPlace) throw(NoAccessException);
        void setMaritalStatus(bool curStatus) throw(NoAccessException);
        void setEmail(std::string curEmail) throw(NoAccessException);
        void setPhoneNumber(int curNumber) throw(NoAccessException);
        void setOccupation(std::string curOccupation) throw(NoAccessException);
        void setMedicalCondition(std::string curCondition) throw(NoAccessException);
        void setMedicalHistory(std::string curHistory) throw(NoAccessException);
        void setMedications(std::string curMedication) throw(NoAccessException);
        void setDoctor(std::string curDoctor) throw(NoAccessException);

    private:
        std::string name;
        std::string password;
        bool access;

        // Personal information
        int idNumber;
        DOB birthday; 
        std::string placeBirth;
        bool maritalStatus;
        std::string email;
        int phoneNumber;
        std::string occupation;

        // Medical information
        std::string medicalCondition;
        std::string medicalHistory;
        std::string medications;
        
        // Family doctor's name
        std::string doctorName;
};



#endif