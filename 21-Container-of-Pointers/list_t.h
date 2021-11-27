#ifndef LIST_T_H
#define LIST_T_H
#include "bigthing_t.h"

class listIsEmpty
{
};

struct node
{
    BigThing *value;
    node *next;
};

class List
{
	node *first;
	void removeAll();
	void copyList(node *listfirst);

public:
	bool isEmpty() const;
	void insert(BigThing *v);
	BigThing *remove();
    void print() const;

	List();
	List(const List &l);
	List &operator=(const List &l);
	~List();
};

#endif
