#ifndef STRING_T_H
#define STRING_T_H
#include "object_t.h"
#include <string>
using namespace std;

class string_t: public Object
{
private:
	string value;

public:
	string_t(string v = 0): value(v) {}
	string_t(const string_t &b): value(b.value) {}
	~string_t() {}

	Object *clone();
	string get_value() { return value; }
    void print() const;
};

#endif
