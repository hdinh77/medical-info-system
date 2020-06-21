// Doctor.h
// Heather Dinh 6/20/20

#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
    public:
        Doctor();

    private:
        std::string name;
        std::string patientNames[];
};


#endif