#ifndef INTSET_H
#define INTSET_H

const int MAXELTS = 100;

class IntSet{
    // OVERVIEW: a mutable set of integers, |set| <= MAXELTS
protected:
    int       elts[MAXELTS];
    int       numElts;
    int       indexOf(int v);
    // EFFECTS: returns the index of v if it exists in the
    //          array, MAXELTS otherwise.
public:
    IntSet();
    // EFFECTS: default constructor. Creates an empty IntSet.
    virtual void insert(int v);
    // void insert(int v);
    // MODIFIES: this
    // EFFECTS: this = this + {v} if room, 
    //          throws int MAXELTS otherwise.
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

class PosIntSet : public IntSet{
    // OVERVIEW: a subclass, but not a subtype
public:
    void insert(int v);
    // EFFECTS: if v is non-negative,
    //          and s has room to include it,
    //          s = s + {v}.
    //          if v is negative throw int -1
    //          if s is full thrown int MAXELTS
};

#endif
