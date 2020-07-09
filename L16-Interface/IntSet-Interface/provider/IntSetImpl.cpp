#include <iostream>
#include "IntSet.h"

using namespace std;

const int MAXELTS = 100;

string IntSetFullException::what(){
   return "IntSet is full.";
}

class IntSetImpl: public IntSet{
    // OVERVIEW: a mutable set of integers, |set| <= MAXELTS
    int       elts[MAXELTS];
    int       numElts;
    int       indexOf(int v) const;
    // EFFECTS: returns the index of v if it exists in the
    //          array, MAXELTS otherwise.
public:
    IntSetImpl();
    // EFFECTS: default constructor. Creates an empty IntSet.
    void insert(int v); 
    // MODIFIES: this
    // EFFECTS: this = this + {v} if room, 
    //          throws IntSetFullException otherwise.
    void remove(int v); 
    // MODIFIES: this
    // EFFECTS: this = this - {v} if v is in this
    bool query(int v) const;
    // EFFECTS: returns true if v is in this, false otherwise.
    int  size() const;
    // EFFECTS: returns |this|.
    void print() const;
    // MODIFIES: cout
    // EFFECTS: print out the integers contained in the set in
    //          sequence.
};

IntSetImpl::IntSetImpl(): numElts(0){
}

int IntSetImpl::indexOf(int v) const{
    for (int i = 0; i < numElts; i++){
        if (elts[i] == v) return i;
    }
    return MAXELTS;
}

int IntSetImpl::size() const{
  return numElts;
}

bool IntSetImpl::query(int v) const{
  return (indexOf(v) != MAXELTS);
}

void IntSetImpl::insert(int v){
    if (indexOf(v) == MAXELTS){
        if (numElts == MAXELTS) throw MAXELTS; 
        elts[numElts++] = v;
    }
}

void IntSetImpl::remove(int v){
    int victim = indexOf(v);
    if (victim != MAXELTS){
        elts[victim] = elts[numElts-1];
        numElts--;
    }
}

void IntSetImpl::print() const{
    for (int i = 0; i < numElts; i++){
        cout << elts[i] << " " << flush;
    }
    cout << endl;
}

static IntSetImpl intSet;

IntSet *getIntSet(){
   return &intSet;
}
