#include "Ui.h"
#include <iostream>
using namespace std;

Ui::Ui() {
    this->serviceUtilizator = serviceUtilizator;
    this->servicePrieteni = servicePrieteni;
    this->serviceMesaje = serviceMesaje;
}

void Ui::showMenu() {
    int opt = 99;

    while (opt != 0){
        cout << "1. Utilizatori: " << endl;
        cout << "2. Prieteni: " << endl;
        cout << "3. Mesaje: " << endl;
        cout << "4. Iesire" << endl;

        cout << "Dati optiunea: " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {meniuUtilizator(); break;}
            case 2: {meniuPrieteni(); break;}
            case 3: {meniuMesaje(); break;}
            case 4: return;
            default: cout << "Optiune gresita! Reincercati " << endl;
        }
    }
}


void Ui::meniuUtilizator() {
    int opt = 99;

    while (opt != 0){
        cout << "1. Adaugare utlizator. " << endl;
        cout << "2. Stergere utlizator. " << endl;
        cout << "3. Actualizare utilizator. " << endl;
        cout << "4. Afisare utilizatori. " << endl;
        cout << "5. Inapoi " << endl;
        cout << "Dati optiunea: " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {adaugaUtilizator();break;}
            case 2: {stergeUtilizator();break;}
            case 3: {modificaUtilizator(); break;}
            case 4: {showAllUtilizatori(); break;}
            case 5: {showMenu(); break;}
            default: cout << "Optiune gresita! Reincercati " << endl;
        }
    }
}


void Ui::meniuPrieteni() {
    int opt = 99;

    while (opt != 0) {
        cout << "1. Adaugare prieten. " << endl;
        cout << "2. Stergere prieten. " << endl;
        cout << "3. Afisare prieteni. " << endl;
        cout << "4. Inapoi. " << endl;
        cout << "Dati optiunea: " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {adaugarePrieteni();break;}
            case 2: {stergePrieteni();break;}
            case 3: {showAllPrieteni(); break;}
            case 4: {showMenu(); break;}
            default: cout << "Optiune gresita! Reincercati " << endl;
        }
    }
}


void Ui::meniuMesaje() {
    int opt = 99;

    while (opt != 0) {
        cout << "1. Adaugare mesaj. " << endl;
        cout << "2. Stergere mesaj. " << endl;
        cout << "3. Afisare mesaje. " << endl;
        cout << "4. Inapoi " << endl;
        cout << "Dati optiunea: " << endl;
        cin >> opt;
        switch (opt) {
            case 1: {adaugareMesaj();break;}
            case 2: {stergeMesaj();break;}
            case 3: {showAllMesaje(); break;}
            case 4: {showMenu(); break;}
            default: cout << "Optiune gresita! Reincercati " << endl;
        }
    }
}


void Ui::adaugaUtilizator() {
    int id;
    string nume;
    cout << "Dati id-ul utilizatorului de adaugat: "<< endl;
    cin >> id;
    cout << "Dati numele utilizatorului de adaugat: "<< endl;
    cin >> nume;

    this->serviceUtilizator.adauga(id, nume);
}


void Ui::stergeUtilizator() {
    int id ;
    string nume;
    cout << "Dati id-ul utilizatorului de sters: " << endl;
    cin >> id;
    cout << "Dati numele utilizatorului de sters: "<< endl;
    cin >> nume;

    this->serviceUtilizator.del(id, nume);
}


void Ui::modificaUtilizator() {
    int id;
    string nume;
    cout << "Dati id-ul utilizatorului de actualizat: "<< endl;
    cin >> id;
    cout << "Dati numele utilizatorului de actualizat: "<< endl;
    cin >> nume;

    int newId;
    string newNume;
    cout << "Dati id-ul noului utilizator: "<< endl;
    cin >> newId;
    cout << "Dati numele noului utilizator: "<< endl;
    cin >> newNume;

    this->serviceUtilizator.update(id, nume, newId, newNume);

}


void Ui::showAllUtilizatori() {
    serviceUtilizator.showAll();
}


Ui::Ui(ServiceUtilizator &ServiceUtilizator, ServicePrieteni &ServicePrieteni, ServiceMesaje &ServiceMesaje) {

}


void Ui::adaugarePrieteni() {
    string nume1;
    string nume2;
    cout << "Dati numele utilizatorului care trimite cererea de prietenie: "<< endl;
    cin >> nume1;
    cout << "Dati numele utilizatorului care primeste cererea de prietenie: "<< endl;
    cin >> nume2;
    servicePrieteni.add(nume1, nume2);
}


void Ui::stergePrieteni() {
    string nume1;
    string nume2;
    cout << "Dati numele utilizatorului care sterge cererea de prietenie: "<< endl;
    cin >> nume1;
    cout << "Dati numele utilizatorului care este sters : "<< endl;
    cin >> nume2;
    servicePrieteni.sterge(nume1, nume2);
}


void Ui::showAllPrieteni() {
    Prieteni* rez = servicePrieteni.getAll();
    for (int i = 0; i< servicePrieteni.getSize(); i++){
        cout << rez[i].getNume1() << " " << rez[i].getNume2() << endl;
    }
}


void Ui::adaugareMesaj() {
    int id1;
    int id2;
    string text;
    cout << "Dati id-ul utilizatorului care trimite mesajul: "<< endl;
    cin >> id1;
    cout << "Dati id-ul utilizatorului care primeste mesajul: "<< endl;
    cin >> id2;
    cout << "Dati mesajul: "<< endl;
    cin >> text;

    this->serviceMesaje.adauga(id1, id2,  text);
}


void Ui::stergeMesaj() {
    int id1;
    int id2;
    string text;
    cout << "Dati id-ul utilizatorului care sterge mesajul: "<< endl;
    cin >> id1;
    cout << "Dati id-ul utilizatorului la care ii este sters mesajul: "<< endl;
    cin >> id2;
    cout << "Dati mesajul care vreti sa fie sters: "<< endl;
    cin >> text;

    this->serviceMesaje.sterge(id1, id2, text);

}


void Ui::showAllMesaje() {
    Mesaje* rez = serviceMesaje.getAll();
    for (int i = 0; i< serviceMesaje.getSize(); i++){
        cout << rez[i].getId1() << " " << rez[i].getId2() << endl;
        cout << rez[i].getText() << endl;
    }
}


Ui::~Ui() = default;
