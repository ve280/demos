#ifndef BIGTHING_T_H
#define BIGTHING_T_H
#include "object_t.h"

class BigThing: public Object
{
private:
	int value;

public:
	BigThing(int v = 0): value(v) {}
	BigThing(const BigThing &b): value(b.value) {}
	~BigThing() {}

	Object *clone();
	int get_value() { return value; }
    void print() const;
};

#endif
