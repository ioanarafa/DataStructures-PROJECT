#include "ServiceUtilizator.h"


ServiceUtilizator::ServiceUtilizator() {
}


ServiceUtilizator::ServiceUtilizator(RepositoryUtilizator<Utilizator> &repository) {
    this->repository = repository;
}


void ServiceUtilizator::adauga(int id, string nume) {
    Utilizator u(id, nume);
    this->repository.adauga(u);
}


void ServiceUtilizator::del(int id, string nume) {
    Utilizator u(id, nume);
    this->repository.sterge(u);
}


void ServiceUtilizator::update(int id, string nume, int newId, string newNume) {
    Utilizator u1(id, nume);
    Utilizator u2(newId, newNume);
    this->repository.modifica(u1, u2);

}


ServiceUtilizator::~ServiceUtilizator() {

}


void ServiceUtilizator::showAll() {
    this->repository.showAll();
}


vector<Utilizator>ServiceUtilizator::getAll() {
    return this->repository.getAll();
}


int ServiceUtilizator::getSize() {
    return this->repository.getSize();
}
