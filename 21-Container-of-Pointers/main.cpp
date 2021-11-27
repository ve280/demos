#include <iostream>
#include <cassert>
#include "bigthing_t.h"
#include "list_t.h"
using namespace std;

int main(int argc, char *argv[])
{
	List l;
    cout << "l insert 5 at the front. l is" << endl;
	BigThing *a = new BigThing(5); // Must dynamically allocate the object
	l.insert(a);
    l.print();
    // l is (5)

	List ll;
    cout << "ll insert 4 at the front. ll is" << endl;
	BigThing *b = new BigThing(4);
	ll.insert(b);
    // ll is (4)
    ll.print();
    
    cout << "Assign ll as a copy of l. ll is" << endl;
	ll = l; // call assignment operator
    // ll is (5)
    ll.print();

    cout << "ll insert 3 at the front. ll is" << endl;
	BigThing *c = new BigThing(3);
	ll.insert(c);
    ll.print();

    cout << "Remove the front of ll. ll is" << endl;
	BigThing *d = ll.remove();
	delete d; // Must delete d!
    ll.print();

	return 0;
}
