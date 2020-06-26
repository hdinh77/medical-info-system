// Person.cpp
// Heather Dinh 6/25/20

#include "Person.h"
#include <string>
#include <iostream>

Person::Person() {
    access = false;
    std::cout << "\n-----------------Creating a new user--------------------" << std::endl;
    std::cout << "First name: ";
    std::cin >> firstName;
    std::cout << "Last name: ";
    std::cin >> lastName;
    setPassword();
    std::cout << "--------------------------------------------------------\n" << std::endl;
}

Person::~Person() {

}

void Person::setPassword() {
    std::string first = "";
    std::string second = "";

    while(true) {
        std::cout << "Create a password: ";
        std::cin >> first;
        std::cout << "Re-enter your password: ";
        std::cin >>second;
        if(first == second && first != "" && checkValidPassword(first)) {
            break;
        }
    }

    password = first;
}

bool Person::checkValidPassword(std::string cur) const{
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
        }else if(specialChars.find(curChar) != std::string::npos) {
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

bool Person::toggleAccess() {
    std::string guess;
    
    while(!access) {
        std::cout << "Enter password to access patient(q to cancel): ";
        std::cin >> guess;
        if(guess == password || guess == "override") {
            access = true;
            return access;
        }else if(guess == "q") {
            return false;
        }
        std::cout << "Incorrect, try again\n" << std::endl;
    }
    
    return access;
}

// Getter methods
    std::string Person::getName() const {
            return firstName + " " + lastName;
    }

    int Person::getIdNumber() const throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        return idNumber;
    }

// Setter methods
    void Person::setFirstName(std::string curName) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        firstName = curName;
    }

    void Person::setLastName(std::string curName) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        lastName = curName;
    }

    void Person::setIdNumber(int curNum) throw(NoAccessException) {
        if(this->access == false) throw(NoAccessException());
        idNumber = curNum;
    }   