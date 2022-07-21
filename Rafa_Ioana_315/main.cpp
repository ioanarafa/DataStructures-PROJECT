#include <iostream>
#include "Domain/Utilizator.h"
#include "Service/ServiceUtilizator.h"
#include "UI/Ui.h"
#include "Tests/Teste.h"
#include "UI/Ui.cpp"
#include "Service/ServiceUtilizator.cpp"


using namespace std;


int main() {


    RepositoryUtilizator<Utilizator> RepositoryUtilizator;
    RepositoryPrieteni<Prieteni> RepositoryPrieteni;
    RepositoryMesaje<Mesaje> RepositoryMesaje;

    ServiceUtilizator ServiceUilizator(RepositoryUtilizator);
    ServicePrieteni ServicePrieteni(RepositoryPrieteni);
    ServiceMesaje ServiceMesaje(RepositoryMesaje);
    Ui ui(ServiceUilizator, ServicePrieteni, ServiceMesaje);


    ui.showMenu();


    cout << "-" << endl;
    return 0;
}
