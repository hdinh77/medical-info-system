// main.cpp
// Heather Dinh
// Medical Information System
// 5/9/20
#include <iostream>
#include <sstream>
#include <string>
#include "Node.h"
#include "Database.h"
#include "Patient.h"
#include "Doctor.h"

#define EXIT 5

int displayMenu() {
    std::ostringstream oss;

    oss << "\n-------------------------------------------Heather Dinh's Medical Information System-------------------------------------------\n\n";
    oss << "Enter an option: \n"
        << "1) New patient\n"
        << "2) Existing patient records\n"
        << "3) New doctor\n"
        << "4) Existing doctor records"
        << "5) Exit";
    std::cout << oss.str() << std::endl;

    int choice;
    std::cin >> choice;
    return choice;
}



int main(int argc, char* argv[]) {
    // Using a linked list hash table to store patients and doctors
    // import whatever was in the file entered in argv
    // 1. each patient can only have one doctor
    // 2. each doctor can have a few patients
    // make sure to put this into the new file!!!
    Database 

    
    //display the menu
    int choice;
    while(choice != EXIT) {
        choice = displayMenu();
        switch(choice) {
            case EXIT:
                break;
            case 1:
                //add a new patient to hash table

            case 2:
                // access a patient from hash table

            case 3:
                // add a new doctor to hash table

            case 4:
                // access a doctor from hash table
            default:
                std::cout << "Invalid response" << std::endl;
                break;
        }
    }

    return 0;
}