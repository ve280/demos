#ifndef DYN_T_H
#define DYN_T_H
#include "object_t.h"

class dyn_t: public Object
{
private:
	int *pv;

public:
	dyn_t(int v = 0): pv(new int(v)) {}
	dyn_t(const dyn_t &b): pv(new int(*b.pv)) {}
	~dyn_t() { delete pv; }

	Object *clone();
	int get_value() { return *pv; }
    void print() const;
};

#endif
