#include "IntList.h"
#include <iostream>
using namespace std;

bool IntList::isEmpty(){
    return !first;
}

void IntList::insert(int v){
    node *np = new node;
    np->value = v;
    np->next = first;
    first = np;
}

int IntList::remove(){
    node *victim = first;
    int result;

    if (isEmpty())
    {
        listIsEmpty e;
        throw e;
    }

    first = victim->next;
    result = victim->value;
    delete victim;
    return result;
}

IntList::IntList(): first(0){
}

void IntList::removeAll(){
    while(!isEmpty()){
        remove();
    }
}

IntList::~IntList(){
    removeAll();
}

void IntList::copyList(node *list){
    if (!list) return; // Base case
    copyList(list->next);
    insert(list->value);
}

IntList::IntList(const IntList &l): first (0){
    copyList(l.first);
}

IntList &IntList::operator= (const IntList &l){
    if (this != &l){
        removeAll();
        copyList(l.first);
    }
    return *this;
}

void IntList::print(){
    node *p = first;
    while(p){
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}
