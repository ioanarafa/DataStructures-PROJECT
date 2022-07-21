
#pragma once

#include "../Repository/RepositoryUtilizator.h"
#include "../Domain/Utilizator.h"

class ServiceUtilizator {
private:
    RepositoryUtilizator <Utilizator> repository;
public:
    ServiceUtilizator();
    ServiceUtilizator(RepositoryUtilizator <Utilizator>& repository);

    void adauga(int id, string nume);
    void del(int id, string nume);
    void update(int id, string nume,
                int newId, string newNume);

    void showAll();
    int getSize();
    vector<Utilizator> getAll();
    ~ServiceUtilizator();
};
