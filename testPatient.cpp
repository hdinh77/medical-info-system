// testPatient.cpp
// Heather Dinh 6/23/20
// Unit testing for Patient.h class

#include "Patient.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>

int main() {
    Patient p;
    p.createBasicInfo();
    p.toggleAccess();
    p.enterRecords();
    
    try{
        p.setName("Heather");
    }catch(NoAccessException) {
        std::cout << "No access" << std::endl;
    }
    
    std::cout << p.printMedicalRecords() << std::endl;




    return 0;
}