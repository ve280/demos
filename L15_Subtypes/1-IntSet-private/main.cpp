#include <iostream>
#include "IntSet.h"

using namespace std;

int main() {
    MaxIntSet foo;
    cout << "insert 7" << endl;
    foo.insert(7);
    foo.print();

    cout << "insert 3" << endl;
    foo.insert(3);
    foo.print();

    cout << "insert 4" << endl;
    foo.insert(4);
    foo.print();

    cout << "insert 2147473203" << endl;
    foo.insert(2147473203);
    foo.print();

    cout << "The max value is " << foo.max() << endl;

/*
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
*/
    return 0;
}
