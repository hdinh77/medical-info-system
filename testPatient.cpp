// testPatient.cpp
// Heather Dinh 6/23/20
// Unit testing for Patient.h class

#include "Patient.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>

int main() {
    Patient p;
    p.toggleAccess();
    p.enterRecords();
    


    try{
        p.setIdNumber(391092);
    }catch(NoAccessException) {
        std::cout << "No access" << std::endl;
    }
    
    std::cout << p.printRecords() << std::endl;


    std::string expected_1 = "Heather Dinh";
    ASSERT_EQUALS(expected_1, p.getName());

    return 0;
}