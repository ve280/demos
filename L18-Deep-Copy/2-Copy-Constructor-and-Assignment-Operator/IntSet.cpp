#include "IntSet.h"
#include <iostream>

using namespace std;

IntSet::IntSet(int size): elts(new int[size]),
    sizeElts(size), numElts(0){
}

IntSet::IntSet(const IntSet &is): elts(NULL), sizeElts(0), numElts(0){
    cout << "Copy constructor\n";
    copyFrom(is);
}

IntSet& IntSet::operator= (const IntSet &is){
    if(this != &is)
        copyFrom(is);
    return *this;
}

IntSet::~IntSet(){
    cout << "Destructor\n";
    delete[] elts;
}

int IntSet::indexOf(int v){
    for (int i = 0; i < numElts; i++){
        if (elts[i] == v)
            return i;
    }
    return sizeElts;
}

void IntSet::copyFrom(const IntSet &is){
    if (is.sizeElts != sizeElts){ // Resize array
        delete[] elts;
        sizeElts = is.sizeElts;
        elts = new int[sizeElts];
    }
    // Copy array
    for (int i = 0; i < is.sizeElts; i++){ 
        elts[i] = is.elts[i];
    }
    // Establish numElts invariant
    numElts = is.numElts; 
}

int IntSet::size(){
  return numElts;
}

bool IntSet::query(int v){
  return (indexOf(v) != sizeElts);
}

void IntSet::insert(int v){
    if (indexOf(v) == sizeElts){
        if (numElts == sizeElts) 
            throw sizeElts; 
        elts[numElts++] = v;
    }
}

void IntSet::remove(int v){
    int victim = indexOf(v);
    if (victim != sizeElts){
        elts[victim] = elts[numElts-1];
        numElts--;
    }
}

void IntSet::print(){
    for (int i = 0; i < numElts; i++){
        cout << elts[i] << " " << flush;
    }
    cout << endl;
}
