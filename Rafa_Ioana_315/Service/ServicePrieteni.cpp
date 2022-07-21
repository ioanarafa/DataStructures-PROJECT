#include "ServicePrieteni.h"


ServicePrieteni::ServicePrieteni() {
}


ServicePrieteni::ServicePrieteni(RepositoryPrieteni<Prieteni> &repository) {
    this->repository = repository;
}


void ServicePrieteni::add(string nume1, string nume2) {
    Prieteni f(nume1, nume2);
    this->repository.adauga(f);
}


void ServicePrieteni::sterge(string nume1, string nume2) {
    Prieteni f(nume1, nume2);
    Prieteni f2(nume2, nume1);
    this->repository.sterge(f);
    this->repository.sterge(f2);
}


Prieteni* ServicePrieteni::getAll() {
    return this->repository.getAll();
}


ServicePrieteni::~ServicePrieteni() {

}


int ServicePrieteni::getSize() {
    return this->repository.size();
}

