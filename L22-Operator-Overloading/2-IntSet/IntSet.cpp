#include "IntSet.h"
#include <iostream>

using namespace std;

IntSet::IntSet(int size): elts(new int[size]),
    sizeElts(size), numElts(0){
}

int IntSet::indexOf(int v){
    for (int i = 0; i < numElts; i++){
        if (elts[i] == v)
            return i;
    }
    return sizeElts;
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
    } else{
        throw v;
    }
}

void IntSet::print(){
    for (int i = 0; i < numElts; i++){
        cout << elts[i] << " " << flush;
    }
    cout << endl;
}

int &IntSet::operator [](int i){
    cout << "non const version" << endl;
    if(i >= 0 && i < numElts) return elts[i];
    else throw -1; 
}

const int &IntSet::operator[](int i) const{
    cout << "const version" << endl;
    if(i >= 0 && i < numElts) return elts[i];
    else throw -1; 
}

