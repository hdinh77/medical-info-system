// Database.h
// Heather Dinh 6/20/20

#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include "Node.h"

int CAPACITY = 100;

template<class T>
class Database {
    public:
        Database();
        void insertEntry(T data);  
        void deleteEntry(std::string name);
        T getEntry(std::string name) const;

    private:
        size_t const static CAPACITY = 101;
        Node<T>* hashTable[];
        size_t hash(std::string name) const;

};
#endif