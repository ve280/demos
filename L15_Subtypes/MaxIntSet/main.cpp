#include <iostream>
#include "IntSet.h"

using namespace std;

int main(){
    IntSet foo;
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

    cout << "remove 6" << endl;
    foo.remove(6);
    foo.print();

    return 0;
}
