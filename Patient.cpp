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

void Patient::enterRecords() {
    std::string curString;
    bool curBool;

    cout << "Name: ";
    cin >> curString;
    setName(curString);
    
    cout << "\nID Number: ";
    cin >> curString;
    setIdNumber(stoi(curString));

    cout << "\nDate of Birth(format: MMDDYYYY): ";
    cin >> curString;
    setBirthday(curString.substr(0, 2), curString.substr(2, 2), curString.substr(4, 4));

    cout << "\nPlace of Birth: ";
    cin >> curString;
    setPlaceBirth(curString);

    cout << "\nMarital Status(true/false): ";
    cin >> curBool;
    setMaritalStatus(curBool);

    cout << "\nEmail: ";
    cin >> curString;
    setEmail(curString);

    cout << "\nPhone Number (1234567890): ";
    cin >> curString;
    setPhoneNumber(stoi(curString));

    cout << "\nOccupation: ";
    cin >> curString;
    setOccupation(curString);

    cout << "\nMedical Conditions: ";
    cin >> curString;
    setMedicalConditions(curString);

    cout << "\nMedical History: ";
    cin >> curString;
    setMedicalHistory(curString);

    cout << "\nCurrent medications: ";
    cin >> curString;
    setMedications(curString);

    cout << "\nPrimary doctor: ";
    cin >> curString;
    setDoctor(curString);
}

void Patient::setPassword() {
    std::string first = "";
    std::string second = " ";

    while(first != second) {
        cout << "Create a password: ";
        cin >> first;
        cout << "\nRe-enter your password: ";
        cin >>second;
        cout << "\n";
    }

    password = first;
}

std::string Patient::getName() const {
    return name;
}

bool Patient::toggleAccess() {
    std::string guess;
    
    while(!access) {
        std::cout << "Enter password (q to cancel): ";
        std::cin >> guess;
        if(guess == password) {
            access = true;
            return access;
        }else if(guess == "q") {
            return false;
        }
    }
    
    return access;

}

std::string Patient::printMedicalRecords() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException());
    std::ostringstream oss;
    oss << "Name: " << getName() << std::endl;
    oss << "ID Number: " << getIdNumber() << std::endl;
    oss << "Date of Birth: " << getBirthday() << std::endl;
    oss << "Place of Birth: " << getPlaceBirth() << std::endl;
    oss << "Marital Status: " << getMaritalStatus() << std::endl;
    oss << "Email: " << getEmail() << std::endl;
    oss << "Phone Number: " << getPhoneNumber() << std::endl;
    oss << "Occupation: " << getOccupation() << std::endl;
    oss << "Medical Conditions: " << getMedicalConditions() << std::endl;
    oss << "Medical History: " << getMedicalHistory() << std::endl;
    oss << "Current medications: " << getMedications() << std::endl;
    oss << "Primary doctor: " << getDoctorName() << std::endl;
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

bool Patient::getMaritalStatus() const throw(NoAccessException){
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

void Patient::setMaritalStatus(bool curStatus) throw(NoAccessException) {
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