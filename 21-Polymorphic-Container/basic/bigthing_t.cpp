#include "bigthing_t.h"
#include <iostream>
using namespace std;

void BigThing::print() const
{
    cout << value << " " << flush;
}

Object *BigThing::clone()
{
	BigThing *bp = new BigThing(*this);
	return bp;
}
