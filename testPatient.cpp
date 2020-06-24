// testPatient.cpp
// Heather Dinh 6/23/20
// Unit testing for Patient.h class

#include "Patient.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>

int main() {
    Patient p;
    p.enterRecords();
    p.toggleAccess();
    try{
        p.setName("Heather");
    }catch(NoAccessException) {
        std::cout << "No access" << std::endl;
    }
    




    return 0;
}