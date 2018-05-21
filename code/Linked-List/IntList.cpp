#include "IntList.h"
#include <iostream>
using namespace std;

bool IntList::isEmpty() const {
    return first == nullptr;
}

IntList::IntList(): first(nullptr) {}

IntList::~IntList() { removeAll(); }

void IntList::removeAll() {
     while(!isEmpty()) remove(); 
}

void IntList::insert(int v){
    node *np = new node;      // Gaining Ownership
    np->value = v;
    np->next = first;         // Keep it in mind!
    first = np;               // Also keep that in mind!
}
int IntList::remove() {
    if (isEmpty()) throw listIsEmpty();
    int result = first->value; // None empty, always possible
    node *victim = first;      // Whay save to victim?
    first = first->next;     
    delete victim;             // Giving up ownership
    return result;             // Value container
}

IntList::IntList(const IntList &l)
    : first (0) { 
        copyList(l.first);
    }

void IntList::copyList(node *list) {
    if (!list) return; // Base case
    copyList(list->next);
    insert(list->value);
}


IntList &IntList::operator= (const IntList &l) {
    if (this != &l) {
        removeAll();
        copyList(l.first);
    }
    return *this;
}

void IntList::print() const {
    node *p = first;
    while(p)
    {
        cout << p->value << " ";
        p = p->next;
    }
    cout << endl;
}
