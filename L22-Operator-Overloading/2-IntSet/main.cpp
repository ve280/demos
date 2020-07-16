#include <iostream>
#include "IntSet.h"

using namespace std;

int main(){
    //IntSet bar; // capacity is MAXELTS
    IntSet foo(50);
    cout << "insert 7" << endl;
    foo.insert(7);
    foo.print();

    cout << "insert 3" << endl;
    foo.insert(3);
    foo.print();

    cout << "insert 4" << endl;
    foo.insert(4);
    foo.print();

    cout << "insert 5" << endl;
    foo.insert(5);
    foo.print();

    cout << "insert 7" << endl;
    foo.insert(7);
    foo.print();

    cout << "insert 8" << endl;
    foo.insert(8);
    foo.print();

    cout << "remove 5" << endl;
    foo.remove(5);
    foo.print();

    cout << "remove 8" << endl;
    foo.remove(8);
    foo.print();

    cout << foo [1] << endl;
    foo[1] = 18;

    const IntSet &bar = foo;
    cout << bar[1] << endl;

    return 0;
}
