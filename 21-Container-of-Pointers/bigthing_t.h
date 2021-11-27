#ifndef BIGTHING_T_H
#define BIGTHING_T_H

class BigThing
{
private:
	int value;

public:
	BigThing(int v = 0): value(v) {}

	int get_value() { return value; }
    void print() const;
};

#endif
