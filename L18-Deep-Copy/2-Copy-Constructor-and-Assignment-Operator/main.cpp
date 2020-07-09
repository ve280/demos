#include <iostream>
#include "IntSet.h"

using namespace std;

void foo(IntSet x){
}

int main() {
    IntSet s(10);
    s.insert(5);
    s.print();

    foo(s);
    s.query(5);
    s.print();

    {
        IntSet x;
        x = s;
        x.print();
    }

    s.query(5);
    s.print();

    return 0;
}
