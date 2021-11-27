#include "string_t.h"
#include <iostream>
using namespace std;

void string_t::print() const
{
    cout << value << " " << flush;
}

Object *string_t::clone()
{
	string_t *bp = new string_t(*this);
	return bp;
}
