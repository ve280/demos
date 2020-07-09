#ifndef INTSET_H
#define INTSET_H

const int MAXELTS = 1000000;

class IntSet
{
    // OVERVIEW: a mutable set of integers, |set| <= MAXELTS
    int       elts[MAXELTS];
    int       numElts;
    int       indexOf(int v);
    // EFFECTS: returns the index of v if it exists in the
    //          array, MAXELTS otherwise.
public:
    IntSet();
    // EFFECTS: default constructor. Creates an empty IntSet.
    void insert(int v);
    // MODIFIES: this
    // EFFECTS: this = this + {v} if room, 
    //          throws int MAXELTS otherwise.
    void remove(int v);
    // MODIFIES: this
    // EFFECTS: this = this - {v} if v is in this
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
