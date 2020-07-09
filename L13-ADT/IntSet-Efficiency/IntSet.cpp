#include "IntSet.h"
#include <iostream>

using namespace std;

IntSet::IntSet(): numElts(0){
}

int IntSet::indexOf(int v){
    int left = 0;
    int right = numElts-1;

    while (right >= left){
        int size = right - left + 1;
        int middle = left + size/2;

        if (elts[middle] == v)
          return middle;
        else if (elts[middle] < v)
          left = middle+1;
        else
          right = middle-1;
    }
    return MAXELTS;
}

int IntSet::size(){
  return numElts;
}

bool IntSet::query(int v){
  return (indexOf(v) != MAXELTS);
}

void IntSet::insert(int v){
    if (indexOf(v) == MAXELTS){ 
      // duplicate not found
        if (numElts == MAXELTS) throw MAXELTS; // no room

        int cand = numElts-1; // largest (last) element
        while ((cand >= 0) && elts[cand] > v){
            elts[cand+1] = elts[cand];
            cand--;
        }
        // Now, cand points to the left of the "gap".
        elts[cand+1] = v;
        numElts++; // repair invariant
    }
}

void IntSet::remove(int v){
    int victim = indexOf(v);
    if (victim != MAXELTS){ 
        // victim points at hole
        numElts--; // one less element
        while (victim < numElts){
            // there are elts to our right
            elts[victim] = elts[victim+1];
            victim++;
        }
    }
}

void IntSet::print(){
    for (int i = 0; i < numElts; i++){
        cout << elts[i] << " " << flush;
    }
    cout << endl;
}
