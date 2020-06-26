// Person.h
// Heather Dinh 6/25/20

#ifndef PERSON_H
#define PERSON_H
#include <string>

class NoAccessException{};

class Person {
    public:
        Person();
        ~Person();
        bool toggleAccess();        // this toogles the access bool if the correct password is entered
                                    // makes sure only the user can access his or her information
                                    // also has an override value "override" for administrators'
        void setPassword();
        bool checkValidPassword(std::string cur) const;

        virtual void enterRecords() = 0;
        virtual std::string printRecords() const throw (NoAccessException) = 0;
        std::string getName() const;
        int getIdNumber() const throw(NoAccessException);
        void setFirstName(std::string curName) throw(NoAccessException);
        void setLastName(std::string curName) throw(NoAccessException);
        void setIdNumber(int curNum) throw(NoAccessException);

    protected:
        std::string firstName;
        std::string lastName;
        int idNumber;
        std::string password;
        bool access;
};

#endif