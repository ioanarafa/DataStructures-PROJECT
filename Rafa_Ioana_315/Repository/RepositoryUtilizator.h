#pragma once

#include "../Domain/Multime.cpp"
#include "../Domain/Utilizator.h"
#include <vector>

template <class T>
class RepositoryUtilizator {
private:
    Multime <T> lista;
public:
    RepositoryUtilizator() {
    }


    bool search(const T& elem){
        return lista.search(elem);
    }


    void adauga(const T& elem) {
        if (!lista.search(elem))
            lista.adauga(elem);
    }


    void sterge(const T& elem) {
        lista.remove(elem);
    }


    void showAll() {
        lista.showAll();
    }


    vector<T> getAll(){
        return this->lista.getAll();
    }


    int getSize(){
        return lista.getSize();
    }


    void modifica(const T& elem, const T& elemNou) {
        if (!lista.search(elemNou))
            lista.update(elem, elemNou);
    }

    ~RepositoryUtilizator(){};
};
