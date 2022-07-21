#pragma once
#include "Tree.h"

template<class T>
class Multime{
private:
    Tree<T> elems;
public:
    Multime();
    void adauga(T elem);
    void update(T elem, T newElem);
    bool search(T elem);
    void remove(T elem);
    void showAll();
    int getSize();
    vector<T> getAll();
};
