// Doctor.cpp 
// Heather Dinh 6/23/20

#include "Doctor.h"
#include <iostream>
#include <string>

Doctor::Doctor() {
    access = false;
}

std::string Doctor::getName() const {
    return name;
}

bool Doctor::toggleAccess() {
    std::string guess;
    
    while(!access) {
        std::cout << "Enter password (q to cancel): ";
        std::cin >> guess;
        if(guess == password) {
            access = true;
            return access;
        }else if(guess == 'q') {
            return false;
        }
    }
    
    return access;
}

int Doctor::getIdNumber() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return idNumber;
}

std::string Doctor::getPosition() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return position;
}

std::string Doctor::getCertification() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return certification;
}

std::string Doctor::getMedicalSchool() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return medicalSchool;
}

std::string Doctor::getLocation() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return location;
}

int Doctor::getPhoneNumber() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return phoneNumber;
}

std::string Doctor::getEmail() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    return email;
}
