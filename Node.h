// node.h
// Heather Dinh 6/20/20

#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
    public:
        Node(T& dataNode = NULL, Node<T>* nextNode = NULL) {data = dataNode; next = nextNode;}
        T& getData() const {return data;}
        Node<T>* getNext() const {return next;}
    private:
        T data;
        Node<T>* next;
};

#endif