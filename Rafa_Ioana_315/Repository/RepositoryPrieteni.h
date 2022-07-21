#pragma once
#include "../Domain/Lista.h"
#include "RepositoryUtilizator.h"
#include "../Domain/Prieteni.h"


template <class T>
class RepositoryPrieteni {
private:
    Lista<T> listaFriendship;
    RepositoryUtilizator<Utilizator> r;
public:
    RepositoryPrieteni() {
    }

    void adauga(const T& elem) {
        listaFriendship.adauga(elem);
    }

    void sterge(const T& elem) {
        listaFriendship.sterge(elem);
    }

    T* getAll() {
        return this->listaFriendship.getAll();
    }

    int size() {
        return this->listaFriendship.lungime();
    }

    ~RepositoryPrieteni(){};
};