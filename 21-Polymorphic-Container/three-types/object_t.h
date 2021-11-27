#ifndef OBJECT_T_H
#define OBJECT_T_H

class Object
{
public:
	virtual Object *clone() = 0;
	virtual ~Object() {}

    virtual void print() const = 0;
};

#endif
