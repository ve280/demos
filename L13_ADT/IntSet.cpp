#include "IntSet.h"
#include <iostream>

using namespace std;

IntSet::IntSet(): numElts(0){
}

int IntSet::indexOf(int v) const{
    for (int i = 0; i < numElts; i++){
        if (elts[i] == v) return i;
    }
    return MAXELTS;
}

int IntSet::size() const{
  return numElts;
}

bool IntSet::query(int v) const{
  return (indexOf(v) != MAXELTS);
}

void IntSet::insert(int v){
    if (indexOf(v) == MAXELTS){
        if (numElts == MAXELTS) throw MAXELTS; 
        elts[numElts++] = v;
    }
}

void IntSet::remove(int v){
    int victim = indexOf(v);
    if (victim != MAXELTS){
        elts[victim] = elts[numElts-1];
        numElts--;
    }
}

void IntSet::print() const{
    for (int i = 0; i < numElts; i++){
        cout << elts[i] << " " << flush;
    }
    cout << endl;
}
