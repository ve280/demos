#include <iostream>
#include "IntSet.h"

using namespace std;

void foo(IntSet x){
}

int main(){
    IntSet s;
    s.insert(5);
    s.print();

    foo(s);

//    {
//        IntSet x;
//        x = s;
//    }
    s.print();

    return 0;
}
