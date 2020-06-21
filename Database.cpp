// database.cpp
// Heather Dinh 6/20/20

#include "node.h"
#include "database.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
Database::Database() {
    // initialize the dynamic memory
    hashTable = new T[CAPACITY];
}

template <class T>
size_t Database::hash(const std::string& name) const{
    size_t accumulator = 0;
    for(size_t i = 0; i < name.size(); i++) {
        accumulator += name.at(i);
    }

    return accumulator % CAPACITY;
}

template <class T>
void Database::insertEntry(T& data) {
    int hashIndex = hash(data.name());
    Node<T>* n = new Node<T>(data, NULL);
    Node<T>* cur = hashTable[hashIndex];
    while(!cur->getNext()) {
        cur = cur->getNext();
    }
    cur->setNext(n);
}

template <class T>
void Database::deleteEntry(std::string name) {

}

template <class T>
T Database::getEntry(std::string name) const {
    int hashIndex = hash(name);
    
}