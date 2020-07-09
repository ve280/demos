#ifndef INTSET_H
#define INTSET_H

#include <exception>

class IntSetFullException: public std::exception{
public:
   std::string what();
};

class IntSet{
    // OVERVIEW: a mutable set of integers, |set| <= MAXELTS
public:
    virtual void insert(int v) = 0;
    // MODIFIES: this
    // EFFECTS: this = this + {v} if room, 
    //          throws IntSetFullException otherwise.
    virtual void remove(int v) = 0;
    // MODIFIES: this
    // EFFECTS: this = this - {v} if v is in this
    virtual bool query(int v) const = 0;
    // EFFECTS: returns true if v is in this, false otherwise.
    virtual int  size() const = 0;
    // EFFECTS: returns |this|.
    virtual void print() const = 0;
    // MODIFIES: cout
    // EFFECTS: print out the integers contained in the set in
    //          sequence.
};

IntSet *getIntSet();
   // EFFECTS: returns a pointer to the IntSet
#endif
