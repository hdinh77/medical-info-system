// Doctor.cpp 
// Heather Dinh 6/23/20

#include "Doctor.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Doctor::Doctor() {
    
}

void Doctor::enterRecords() {
    std::string curString;
    
    cout << "ID Number(format: 123123): ";
    cin >> curString;
    setIdNumber(stoi(curString));

    cout << "Position: ";
    cin >> curString;
    setPosition(curString);

    cout << "Certification: ";
    cin >> curString;
    setCertification(curString);

    cout << "Medical School: ";
    cin >> curString;
    setMedicalSchool(curString);

    cout << "Location: ";
    cin >> curString;
    setLocation(curString);

    cout << "Email: ";
    cin >> curString;
    setEmail(curString);

    cout << "Phone Number (format: 1234567890): ";
    cin >> curString;
    setPhoneNumber(stoi(curString));
}

std::string Doctor::printRecords() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    std::ostringstream oss;
    oss << "\n\n";
    oss << "---------------------------------------------------------Doctor Records - " << getName() << "--------------------------------------------\n\n";
    oss << "\t\t\t\t\tID Number: " << getIdNumber() << std::endl;
    oss << "\t\t\t\t\tPosition: " << getPosition() << std::endl;
    oss << "\t\t\t\t\tCertification: " << getCertification() << std::endl;
    oss << "\t\t\t\t\tMedical School: " << getMedicalSchool() << std::endl;
    oss << "\t\t\t\t\tLocation: " << getLocation() << std::endl;
    oss << "\t\t\t\t\tEmail: " << getEmail() << std::endl;
    oss << "\t\t\t\t\tPhone Number: " << getPhoneNumber() << std::endl;
    oss << "\n---------------------------------------------------------------------------------------------------------------------------\n\n";
    return oss.str();
}

//Getter methods
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

//Setter methods
    void Doctor::setEmail(std::string curEmail) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        email = curEmail;
    }   

    void Doctor::setPhoneNumber(int curNumber) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        phoneNumber = curNumber;
    }   

    void Doctor::setPosition(std::string curPosition) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        position = curPosition;
    }

    void Doctor::setMedicalSchool(std::string curMedicalSchool) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        medicalSchool = curMedicalSchool;
    }

    void Doctor::setLocation(std::string curLocation) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        location = curLocation;
    }

    void Doctor::setCertification(std::string curCertification) throw (NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        certification = curCertification;
    }