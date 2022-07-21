#include "Multime.h"

template<class T>
Multime<T>::Multime() {

}


template<class T>
void Multime<T>::adauga(T elem) {
    elems.add(elem);
}


template<class T>
bool Multime<T>::search(T elem) {
    return elems.cauta(elem);
}


template<class T>
void Multime<T>::remove(T elem) {
    elems.sterge(elem);
}


template<class T>
void Multime<T>::showAll() {
    elems.afisare();
}


template<class T>
void Multime<T>::update(T elem, T newElem) {
    elems.sterge(elem);
    elems.add(newElem);
}


template<class T>
vector<T> Multime<T>::getAll() {
    return this->elems.getAll();
}


template<class T>
int Multime<T>::getSize() {
    return elems.getSize();
}

