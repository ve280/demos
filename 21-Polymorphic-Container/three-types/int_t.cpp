#include "int_t.h"
#include <iostream>
using namespace std;

void int_t::print() const
{
    cout << value << " " << flush;
}

Object *int_t::clone()
{
	int_t *bp = new int_t(*this);
	return bp;
}
