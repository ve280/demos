#include <iostream>
#include "IntSet.h"

using namespace std;

int main() {
    PosIntSet s;
    try {
        cout << "Insert -1 through s itself" << endl;
        s.insert(-1);
        cout << "Insertion successful!" << endl;
    } catch (int i) {
        cout << "Exception thrown" << endl;
        cout << "Insertion failed!" << endl;
    }
    IntSet& r = s;
    try {
        cout << "Insert -2 through the reference to s" << endl;
        r.insert(-2);
        cout << "Insertion successful!" << endl;
    } catch (int i) {
        cout << "Exception thrown" << endl;
        cout << "Insertion failed!" << endl;
    }
    IntSet* p = &s;
    try {
        cout << "Insert -3 through the pointer to s" << endl;
        p->insert(-3);
        cout << "Insertion successful!" << endl;
    } catch (int i) {
        cout << "Exception thrown" << endl;
        cout << "Insertion failed!" << endl;
    }

    s.print();
    return 0;
}
