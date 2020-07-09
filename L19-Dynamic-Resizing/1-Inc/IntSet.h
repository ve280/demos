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

    void copyFrom(const IntSet &is);
    // MODIFIES: this
    // EFFECTS:  copies is contents to this

    void grow();
    // MODIFIES: this
    // EFFECTS:  enlarge the elts array, 
    // 		 preserving current content
public:
    IntSet(int size = MAXELTS);  
    // EFFECTS: create a set with specified capacity.
    // It defaults to MAXELTS if not supplied.

    IntSet(const IntSet &is); // copy constructor

    IntSet& operator= (const IntSet& is); // assigment operator

    ~IntSet(); // Destroy this IntSet

    void insert(int v);
    // MODIFIES: this
    // EFFECTS: this = this + {v}
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
    // EFFECTS: print out the integers contained in the set in
    //          sequence.
};

#endif
