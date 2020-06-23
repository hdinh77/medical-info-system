// Patient.cpp
// Heather Dinh 6/22/20

#include "Patient.h"
#include <iostream>
#include <sstream>
#include <string>

Patient::Patient() {
    access = false;
}

bool enterRecords() {
    std::string curString;
    int curInt;
    bool curBool;

    cout << "Name: ";
    cin >> curString;
    setName(curString);
    
    cout << "\nID Number: ";
    cin >> atoi(curInt);
    setIdNumber(curInt);

    cout << "\nDate of Birth(format: MMDDYYYY): ";
    cin >> curString;
    setBirthday(curString[0, 2], curString[2, 4], curString[4]);

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
    cin >> atoi(curInt);
    setPhoneNumber(curInt);

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
        }else if(guess == 'q') {
            return false;
        }
    }
    
    return access;

}

std::string Patient::printMedicalRecords() const throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    std::ostringstream oss;
    oss << "Name: " << getName() << endl;
    oss << "ID Number: " << getIdNumber() << endl;
    oss << "Date of Birth: " << getBirthday() << endl;
    oss << "Place of Birth: " << getPlaceBirth() << endl;
    oss << "Marital Status: " << getMaritalStatus() << endl;
    oss << "Email: " << getEmail() << endl;
    oss << "Phone Number: " << getPhoneNumber() << endl;
    oss << "Occupation: " << getOccupation() << endl;
    oss << "Medical Conditions: " << getMedicalCondition() << endl;
    oss << "Medical History: " << getMedicalHistory() << endl;
    oss << "Current medications: " << getMedications() << endl;
    oss << "Primary doctor: " << getDoctorName() << endl;
    return oss.str();
}

int Patient::getIdNumber() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return idNumber;
}

std::string Patient::getBirthday() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return (DOB.month + "/" + DOB.day + "/" + DOB.year);
}

std::string Patient::getPlaceBirth() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return placeBirth;
}

bool Patient::getMaritalStatus() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return maritalStatus;
}

std::string Patient::getEmail() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return email;
}

int Patient::getPhoneNumber() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return phoneNumber;
}

std::string Patient::getOccupation() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return occupation;
}

std::string Patient::getMedicalCondition() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return medicalCondition;
}

std::string Patient::getMedicalHistory() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return medicalHistory;
}

std::string Patient::getMedications() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return medications;
}

std::string Patient::getDoctorName() const throw(NoAccessException){
    if(this->access == false) throw(NoAccessException);
    return doctorName;
}

void setName(std::string curName) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    this->name = curName;
}

void setIdNumber(int curNum) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    this->idNumber = curNum;
}

void setBirthday(std::string curMonth, std::string curDay, std::string curYear) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    birthday.month = curMonth; 
    birthday.day = curDay;
    birthday.year = curYear;
}

void setPlaceBirth(std::string curPlace) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    placeBirth = curPlace;
}

void setMaritalStatus(bool curStatus) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    maritalStatus = curStatus;
}

void setEmail(std::string curEmail) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    email = curEmail;
}

void setPhoneNumber(int curNumber) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    phoneNumber = curNumber;
}

void setOccupation(std::string curOccupation) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    occupation = curOccupation;
}

void setMedicalCondition(std::string curCondition) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    medicalCondition = curCondition;
}

void setMedicalHistory(std::string curHistory) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    medicalHistory = curHistory;
}

void setMedications(std::string curMedication) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    medications = curMedication;
}

void setDoctor(std::string curDoctor) throw(NoAccessException) {
    if(this->access == false) throw(NoAccessException);
    doctorName = curDoctor;
}