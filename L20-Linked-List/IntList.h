#ifndef INTLIST_H
#define INTLIST_H

class listIsEmpty {}; // An exception class

struct node{
    node *next;
    int   value;
};

class IntList{
    node *first;
    void removeAll();
    void copyList(node *list);

public:
    bool isEmpty();
    // EFFECTS: returns true if list is empty, false otherwise
    void insert(int v);
    // MODIFIES: this
    // EFFECTS: inserts v into the front of the list
    int remove();
    // MODIFIES: this
    // EFFECTS: if list is empty, throw listIsEmpty.
    //          Otherwise, remove and return the first 
    //          element of the list
    void print();
    // MODIFIES: cout
    // EFFECTS: print the int list

    IntList();
    // default constructor
    IntList(const IntList& l);
    // copy constructor
    ~IntList();
    // destructor
    IntList &operator=(const IntList &l); 
    // assignment operator
};

#endif
