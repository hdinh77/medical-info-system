// main.cpp
// Heather Dinh
// Medical Information System
// 5/9/20
#include <iostream>
#include <sstream>
#include <string>
#include "dnode.h"

#define EXIT 4

int displayMenu() {
    std::ostringstream oss;

    oss << "\n-------------------------------------------Heather Dinh's Medical Information System-------------------------------------------\n\n";
    oss << "Enter an option: \n"
        << "1) New patient\n"
        << "2) Existing patient records\n"
        << "3) New doctor\n"
        << "4) Exit";
    std::cout << oss.str() << std::endl;

    int choice;
    std::cin >> choice;
    return choice;
}



int main() {
    
    int choice;
    while(choice != EXIT) {
        choice = displayMenu();
        switch(choice) {
            case EXIT:
                break;
            case 2:

            case 3:

            case 4:

        }
    }

    return 0;
}