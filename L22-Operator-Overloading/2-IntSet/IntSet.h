#ifndef INTSET_H
#define INTSET_H

const int MAXELTS = 100;
    

class IntSet{
// OVERVIEW: a mutable set of integers, |set| <= sizeElts
    int *elts;    // pointer to dynamic array
    int sizeElts; // capacity of array
    int numElts;  // current occupancy

    int indexOf(int v);
    // EFFECTS: returns the index of v if it exists in the
    //          array, sizeElts otherwise.

public:
    IntSet(int size = MAXELTS);  
    // EFFECTS: creates a set with specified capacity.
    // It defaults to MAXELTS if not supplied.
    void insert(int v);
    // MODIFIES: this
    // EFFECTS: this = this + {v} if room, 
    //          throws int sizeElts otherwise.
    void remove(int v);
    // MODIFIES: this
    // EFFECTS: this = this - {v} if v is in this
    //          throws int v otherwise.
    bool query(int v);
    // EFFECTS: returns true if v is in this, false otherwise.
    int  size();
    // EFFECTS: returns |this|.
    void print();
    // MODIFIES: cout
    // EFFECTS: prints out the integers contained in the set in
    //          sequence.
    const int &operator[](int i) const;
    // EFFECTS: returns a const reference to the element at index i 
    //          if i<numElts, throws -1 otherwise
    int &operator[](int i);
    // EFFECTS: returns a reference to the element at index i
    //          if i<numElts, throws -1 otherwise
};

#endif
