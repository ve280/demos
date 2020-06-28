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

    cout << "insert 5" << endl;
    foo.insert(5);
    foo.print();

    cout << "The max value is " << foo.max() << endl;

    return 0;
}
