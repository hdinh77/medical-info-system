// Patient.cpp
// Heather Dinh 6/22/20

#include "Patient.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Patient::Patient() {
    access = false;
}

void Patient::createBasicInfo() {
    cout << "Name: ";
    cin >> name;
    setPassword();
}

void Patient::enterRecords() {
    std::string curString;
    
    cout << "ID Number(format: 123123): ";
    cin >> curString;
    setIdNumber(stoi(curString));

    cout << "Date of Birth(format: MMDDYYYY): ";
    cin >> curString;
    setBirthday(curString.substr(0, 2), curString.substr(2, 2), curString.substr(4, 4));

    cout << "Place of Birth: ";
    cin >> curString;
    setPlaceBirth(curString);

    cout << "Marital Status(true/false): ";
    cin >> curString;
    setMaritalStatus(curString);

    cout << "Email: ";
    cin >> curString;
    setEmail(curString);

    cout << "Phone Number (format: 1234567890): ";
    cin >> curString;
    setPhoneNumber(stoi(curString));

    cout << "Occupation: ";
    cin >> curString;
    setOccupation(curString);

    cout << "Medical Conditions: ";
    cin >> curString;
    setMedicalConditions(curString);

    cout << "Medical History: ";
    cin >> curString;
    setMedicalHistory(curString);

    cout << "Current medications: ";
    cin >> curString;
    setMedications(curString);

    cout << "Primary doctor: ";
    cin >> curString;
    setDoctor(curString);
}

void Patient::setPassword() {
    std::string first = "";
    std::string second = "";

    while(true) {
        cout << "Create a password: ";
        cin >> first;
        cout << "Re-enter your password: ";
        cin >>second;
        if(first == second && first != "" && checkValidPassword(first)) {
            break;
        }
    }

    password = first;
}

bool Patient::checkValidPassword(std::string cur) const {
    // make sure at least 8 characters
    if(cur.size() < 8) {
        std::cout << "Password must be at least 8 characters long\n" << std::endl;
        return false;
    }

    // check for an uppercase, lowercase, and special character
    bool upper = false;
    bool number = false;
    bool special = false;
    std::string specialChars = "!@#$%&*?_";

    for(size_t i = 0; i < cur.size(); i++) {
        char curChar = cur.at(i);
        if(curChar >= 65 && curChar <= 90) {
            upper = true;
        }else if(curChar >= 48 && curChar <= 57) {
            number = true;
        }else if(specialChars.find(curChar) != string::npos) {
            special = true;
        }
    }

    if(!upper) {
        std::cout << "Password must contain at least 1 uppercase character\n" << std::endl;
        return false;
    }else if(!number) {
        std::cout << "Password must contain at least 1 number\n" << std::endl;
        return false;
    }else if(!special) {
        std::cout << "Password must contain at least 1 special character (!@#$%&*?_)\n" << std::endl;
        return false;
    }

    return true;
}

std::string Patient::getName() const {
    return name;
}

bool Patient::toggleAccess() {
    std::string guess;
    
    while(!access) {
        std::cout << "Enter password to access patient(q to cancel): ";
        std::cin >> guess;
        if(guess == password) {
            access = true;
            return access;
        }else if(guess == "q") {
            return false;
        }
        std::cout << "Incorrect, try again\n" << std::endl;
    }
    
    return access;

}

std::string Patient::printMedicalRecords() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    std::ostringstream oss;
    oss << "\n\n";
    oss << "---------------------------------------------------------Patient Records - " << getName() << "--------------------------------------------\n\n";
    oss << "\t\t\t\t\tID Number: " << getIdNumber() << std::endl;
    oss << "\t\t\t\t\tDate of Birth: " << getBirthday() << std::endl;
    oss << "\t\t\t\t\tPlace of Birth: " << getPlaceBirth() << std::endl;
    oss << "\t\t\t\t\tMarital Status: " << getMaritalStatus() << std::endl;
    oss << "\t\t\t\t\tEmail: " << getEmail() << std::endl;
    oss << "\t\t\t\t\tPhone Number: " << getPhoneNumber() << std::endl;
    oss << "\t\t\t\t\tOccupation: " << getOccupation() << std::endl;
    oss << "\t\t\t\t\tMedical Conditions: " << getMedicalConditions() << std::endl;
    oss << "\t\t\t\t\tMedical History: " << getMedicalHistory() << std::endl;
    oss << "\t\t\t\t\tCurrent medications: " << getMedications() << std::endl;
    oss << "\t\t\t\t\tPrimary doctor: " << getDoctorName() << std::endl;
    oss << "\n---------------------------------------------------------------------------------------------------------------------------\n\n";
    return oss.str();
}

int Patient::getIdNumber() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return idNumber;
}

std::string Patient::getBirthday() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return (std::to_string(birthday.month) + "/" + std::to_string(birthday.day) + "/" + std::to_string(birthday.year));
}

std::string Patient::getPlaceBirth() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return placeBirth;
}

std::string Patient::getMaritalStatus() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return maritalStatus;
}

std::string Patient::getEmail() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return email;
}

int Patient::getPhoneNumber() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return phoneNumber;
}

std::string Patient::getOccupation() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return occupation;
}

std::string Patient::getMedicalConditions() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return medicalConditions;
}

std::string Patient::getMedicalHistory() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return medicalHistory;
}

std::string Patient::getMedications() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return medications;
}

std::string Patient::getDoctorName() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException());
    return doctorName;
}

void Patient::setName(std::string curName) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    this->name = curName;
}

void Patient::setIdNumber(int curNum) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    this->idNumber = curNum;
}

void Patient::setBirthday(std::string curMonth, std::string curDay, std::string curYear) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    birthday.month = stoi(curMonth); 
    birthday.day = stoi(curDay);
    birthday.year = stoi(curYear);
}

void Patient::setPlaceBirth(std::string curPlace) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    placeBirth = curPlace;
}

void Patient::setMaritalStatus(std::string curStatus) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    maritalStatus = curStatus;
}

void Patient::setEmail(std::string curEmail) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    email = curEmail;
}

void Patient::setPhoneNumber(int curNumber) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    phoneNumber = curNumber;
}

void Patient::setOccupation(std::string curOccupation) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    occupation = curOccupation;
}

void Patient::setMedicalConditions(std::string curCondition) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    medicalConditions = curCondition;
}

void Patient::setMedicalHistory(std::string curHistory) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    medicalHistory = curHistory;
}

void Patient::setMedications(std::string curMedication) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    medications = curMedication;
}

void Patient::setDoctor(std::string curDoctor) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    doctorName = curDoctor;
}