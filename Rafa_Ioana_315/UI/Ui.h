#pragma once

#include "../Service/ServiceUtilizator.h"
#include "../Service/ServiceMesaje.h"
#include "../Service/ServicePrieteni.h"

class Ui {
private:
    ServiceUtilizator serviceUtilizator;
    ServiceMesaje serviceMesaje;
    ServicePrieteni servicePrieteni;
    void meniuUtilizator();
    void meniuPrieteni();
    void meniuMesaje();
    void adaugaUtilizator();
    void stergeUtilizator();
    void modificaUtilizator();
    void showAllUtilizatori();
    void adaugareMesaj();
    void stergeMesaj();
    void showAllMesaje();
    void adaugarePrieteni();
    void stergePrieteni();
    void showAllPrieteni();

public:
    Ui();
    Ui(ServiceUtilizator& serviceUtilizator, ServicePrieteni& servicePrieteni, ServiceMesaje& serviceMesaje);
    void showMenu();

    ~Ui();

};
