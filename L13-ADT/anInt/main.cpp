#include <iostream>
#include "anInt.h"
using namespace std;

void addOne(anInt i){
    i.setValue(i.getValue()+1);
}

int main(){
   anInt o;
   o.setValue(0);
   //cout << o.v << endl;
   addOne(o);
   cout << o.getValue() << endl;
}

