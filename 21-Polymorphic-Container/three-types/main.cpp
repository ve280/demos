#include <iostream>
#include <cassert>
#include "int_t.h"
#include "string_t.h"
#include "dyn_t.h"
#include "list_t.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "l insert an int object 5 at the front" << endl;
	List l;
	int_t *a = new int_t(5); // Must dynamically allocate the object
	l.insert(a);

    cout << "l insert a string object 'four' at the front" << endl;
    string_t *b = new string_t("four");
    l.insert(b);
    // l is (four 5)

    cout << "l insert a dynamic int object 4 at the front" << endl;
    dyn_t *c = new dyn_t(4);
    l.insert(c);

    l.print();

    cout << "Assign ll as a copy of l" << endl;
	List ll;
    ll = l;
    ll.print();

    cout << "Remove the front of ll" << endl;
	dyn_t *d = dynamic_cast<dyn_t*>(ll.remove());
	assert(d);
	delete d; // Must delete d!

    ll.print();
    /*
	List ll;
	BigThing *b = new BigThing(4);
	ll.insert(b);
    // ll is (4)
	ll = l; // call assignment operator
    // ll is (5)
	BigThing *c = new BigThing(3);
	ll.insert(c);
    // ll is (3 5)

    ll.print();

	BigThing *d = dynamic_cast<BigThing*>(ll.remove());
	assert(d);
	delete d; // Must delete d!
    */

	return 0;
}
