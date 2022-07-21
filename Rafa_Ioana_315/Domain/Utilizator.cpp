
#include "Utilizator.h"

Utilizator::Utilizator() {
    this->id = 0;
    this->nume = "";
}

Utilizator::Utilizator(int id, string nume) {
    this->id = id;
    this->nume = nume;
}

Utilizator::Utilizator(const Utilizator &u) {
    this->id = u.id;
    this->nume = u.nume;
}

bool Utilizator::operator==(const Utilizator &u) {
    return this->id == u.id;
}

bool Utilizator::operator!=(const Utilizator &u) {
    return this->id != u.id ;
}

Utilizator &Utilizator::operator=(const Utilizator &u) {
    this->id = u.id;
    this->nume = u.nume;
    return *this;
}

bool Utilizator::operator>(const Utilizator &u) {
    return id > u.id;
}

bool Utilizator::operator<(const Utilizator &u) {
    return this->id < u.id;
}

istream &operator>>(istream &is, Utilizator &u) {
    is >> u.id >> u.nume ;
    return is;
}

ostream &operator<<(ostream &os, Utilizator &u) {
    os << u.id << " " << u.nume ;
    return os;
}

Utilizator::~Utilizator() {
    this->id = 0;
    this->nume = "";
}
