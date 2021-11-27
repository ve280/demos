#include "dyn_t.h"
#include <iostream>
using namespace std;

void dyn_t::print() const
{
    cout << *pv << " " << flush;
}

Object *dyn_t::clone()
{
	dyn_t *bp = new dyn_t(*this);
	return bp;
}
