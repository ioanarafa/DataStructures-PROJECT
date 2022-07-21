#pragma once
#include "../Domain/Lista.h"

const int l = 100;

template <class T>
class RepositoryMesaje {
private:
    Lista<T> listaMessage;
public:
    RepositoryMesaje() {
    }

    void adauga(const T& elem) {
        listaMessage.adauga(elem);
    }

    void sterge(const T& elem) {
        listaMessage.sterge(elem);
    }

    T* getAll() {
        return this->listaMessage.getAll();
    }

    int size() {
        return this->listaMessage.lungime();
    }


    ~RepositoryMesaje(){};
};