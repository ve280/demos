#ifndef LIST_T_H
#define LIST_T_H
#include "object_t.h"

class listIsEmpty
{
};

class List
{
public:
	bool isEmpty() const;
    void print() const;
	void insert(Object *v);
	Object *remove();

	List();
	List(const List &l);
	List &operator=(const List &l);
	~List();

private:
	struct node
	{
		Object *value;
		node *next;
	};

	node *first;

	void removeAll();
	void copyList(node *listfirst);
};

#endif
