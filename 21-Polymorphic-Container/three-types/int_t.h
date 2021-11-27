#ifndef INT_T_H
#define INT_T_H
#include "object_t.h"

class int_t: public Object
{
private:
	int value;

public:
	int_t(int v = 0): value(v) {}
	int_t(const int_t &b): value(b.value) {}
	~int_t() {}

	Object *clone();
	int get_value() { return value; }
    void print() const;
};

#endif
