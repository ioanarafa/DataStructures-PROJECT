#pragma once

#include "../Repository/RepositoryPrieteni.h"
#include "../Domain/Prieteni.h"

class ServicePrieteni{
private:
    RepositoryPrieteni<Prieteni> repository;
public:
    ServicePrieteni();
    ServicePrieteni(RepositoryPrieteni<Prieteni> &repository);

    void add(string nume1, string nume2);
    void sterge(string nume1, string nume2);
    int getSize();
    Prieteni* getAll();
    ~ServicePrieteni();
};