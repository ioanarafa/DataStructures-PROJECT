#pragma once
#include "iostream"
using namespace std;


template <class T>
class Lista{
private:
    T* elems;
    int capacitate;
    int noElems;
    void resize();
public:
    Lista();
    void adauga(T elem);
    void sterge(T elem);
    int lungime();
    T* getAll();
    T operator[](int index);
    ~Lista();

};

template<class T>
Lista<T>::Lista() {
    capacitate = 10;
    noElems = 0;
    this->elems = new T[capacitate];
}

template<class T>
void Lista<T>::adauga(T elem) {
    if (capacitate == noElems)
        resize();
    elems[noElems] = elem;
    noElems ++;
}

template<class T>
void Lista<T>::resize() {
    T* newElems = new T[capacitate * 2];
    for (int i = 0; i < noElems; i++)
        newElems[i] = elems[i];
    capacitate = capacitate * 2;
    delete[] elems;
    elems = newElems;
}


template<class T>
int Lista<T>::lungime() {
    return noElems;
}

template<class T>
void Lista<T>::sterge(T elem) {
    for (int i = 0; i < noElems; i++)
        if (elems[i] == elem){
            for (int j = i; j < noElems-1; j++)
                elems[j] = elems[j+1];
            noElems --;
        }
}

template<class T>
T* Lista<T>::getAll() {
    return  this->elems;
}

template<class T>
T Lista<T>::operator[](int index) {
    return elems[index];
}

template<class T>
Lista<T>::~Lista() {
    delete [] elems;
    capacitate = 10;
    noElems = 0;
}
