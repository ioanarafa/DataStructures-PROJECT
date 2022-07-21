#include "ServiceMesaje.h"

ServiceMesaje::ServiceMesaje() {
    
}


ServiceMesaje::ServiceMesaje(RepositoryMesaje<Mesaje> &repositoryMesaje) {
    this->repositoryMesaje = repositoryMesaje;
}


void ServiceMesaje::adauga(int id1, int id2, string text) {
    Mesaje m(id1, id2, text);
    this->repositoryMesaje.adauga(m);
}


void ServiceMesaje::sterge(int id1, int id2, string text) {
    Mesaje m(id1, id2, text);
    Mesaje m1(id2, id1, text);
    this->repositoryMesaje.sterge(m);
    this->repositoryMesaje.sterge(m1);
}


Mesaje *ServiceMesaje::getAll() {
    return this->repositoryMesaje.getAll();
}


ServiceMesaje::~ServiceMesaje() {

}

int ServiceMesaje::getSize() {
    return this->repositoryMesaje.size();
}
