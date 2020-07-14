#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

class listIsEmpty {}; // An exception class

template <class T>
class List{
    struct node{
        node *next;
        T     value;
    };
    node *first;
    void removeAll();
    void copyList(node *list);

public:
    bool isEmpty();
    // EFFECTS: returns true if list is empty, false otherwise
    void insert(T v);
    // MODIFIES: this
    // EFFECTS: inserts v into the front of the list
    T remove();
    // MODIFIES: this
    // EFFECTS: if list is empty, throw listIsEmpty.
    //          Otherwise, remove and return the first 
    //          element of the list
    void print();
    // MODIFIES: cout
    // EFFECTS: print the int list

    List();
    // default constructor
    List(const List& l);
    // copy constructor
    ~List();
    // destructor
    List &operator=(const List &l); 
    // assignment operator
};

template <class T>
bool List<T>::isEmpty(){
    return !first;
}

template <class T>
void List<T>::insert(T v){
    node *np = new node;
    np->value = v;
    np->next = first;
    first = np;
}

template <class T>
T List<T>::remove(){
    if (isEmpty()){
        listIsEmpty e;
        throw e;
    }
    node *victim = first;
    T result;
    first = victim->next;
    result = victim->value;
    delete victim;
    return result;
}

template <class T>
List<T>::List(): first(0){
}

template <class T>
void List<T>::removeAll(){
    while(!isEmpty()){
        remove();
    }
}

template <class T>
List<T>::~List(){
    removeAll();
}

template <class T>
void List<T>::copyList(node *list){
    if (!list) return; // Base case
    copyList(list->next);
    insert(list->value);
}

template <class T>
List<T>::List(const List<T> &l): first (0){
    copyList(l.first);
}

template <class T>
List<T> &List<T>::operator= (const List<T> &l){
    if (this != &l){
        removeAll();
        copyList(l.first);
    }
    return *this;
}

template <class T>
void List<T>::print(){
    node *p = first;
    while(p){
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}
#endif
