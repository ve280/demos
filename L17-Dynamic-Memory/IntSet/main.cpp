#include <iostream>
#include "IntSet.h"

using namespace std;

int main() {
    IntSet* ip = new IntSet(50);
    cout << "insert 7" << endl;
    ip->insert(7);
    ip->print();

    cout << "insert 3" << endl;
    ip->insert(3);
    ip->print();

    cout << "insert 5" << endl;
    ip->insert(5);
    ip->print();

    cout << "insert 7" << endl;
    ip->insert(7);
    ip->print();

    cout << "remove 5" << endl;
    ip->remove(5);
    ip->print();

    delete ip;

    return 0;
}
