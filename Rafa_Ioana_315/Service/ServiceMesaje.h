#pragma once

#include "../Domain/Mesaje.h"
#include "../Repository/RepositoryMesaje.h"

class ServiceMesaje{
private:
    RepositoryMesaje<Mesaje> repositoryMesaje;
public:
    ServiceMesaje();
    ServiceMesaje(RepositoryMesaje<Mesaje>& repositoryMesaje);

    void adauga(int id1, int id2, string text);
    void sterge(int id1, int id2, string text);
    int getSize();
    Mesaje* getAll();
    ~ServiceMesaje();

};