// Patient.h
// Heather Dinh 6/20/20

#ifndef PATIENT_H
#define PATIENT_H

#include <string>

struct DOB {
    int day;
    int month;
    int year;
};

class Patient {
    public:
        Patient();
    private:
        std::string name;
        int idNumber;
        DOB birthday; 
        std::string doctorName;
};



#endif