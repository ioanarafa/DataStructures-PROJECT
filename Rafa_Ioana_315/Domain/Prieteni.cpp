#include "Prieteni.h"


Prieteni::Prieteni() {
    this->nume1 = "";
    this->nume2 = "";
}


Prieteni::Prieteni(string nume1, string nume2) {
    this->nume1 = nume1;
    this->nume2 = nume2;
}


Prieteni::Prieteni(const Prieteni &f) {
    this->nume1 = f.nume1;
    this->nume2 = f.nume2;
}


Prieteni &Prieteni::operator=(const Prieteni &f) {
    this->nume1 = f.nume1;
    this->nume2 = f.nume2;
    return *this;
}


bool Prieteni::operator==(const Prieteni &f) {
    return this->nume1 == f.nume1 && this->nume2 == f.nume2;
}


bool Prieteni::operator!=(const Prieteni &f) {
    return this->nume2 != f.nume2 || this->nume1 != f.nume1;
}


Prieteni::~Prieteni() {

}


string Prieteni::getNume1() {
    return this->nume1;
}


string Prieteni::getNume2() {
    return this->nume2;
}
