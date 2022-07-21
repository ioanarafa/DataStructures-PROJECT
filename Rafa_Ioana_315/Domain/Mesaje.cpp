#include "Mesaje.h"


Mesaje::Mesaje() {
    this->id1 = 0;
    this->id2 = 0;
    this->text = " ";
}


Mesaje::Mesaje(int id1, int id2, string text) {
    this->id1 = id1;
    this->id2 = id2;
    this->text = text;
}


Mesaje::Mesaje(const Mesaje &m) {
    this->id1 = m.id1;
    this->id2 = m.id2;
    this->text = m.text;
}


int Mesaje::getId1() {
    return this->id1;
}


int Mesaje::getId2() {
    return this->id2;
}


string Mesaje::getText() {
    return this->text;
}


Mesaje &Mesaje::operator=(const Mesaje &m) {
    this->id1 = m.id1;
    this->id2 = m.id2;
    this->text = m.text;
    return *this;
}


bool Mesaje::operator==(const Mesaje &m) {
    return this->id1 == m.id1 && this->id2 == m.id2 && this->text == m.text;
}

Mesaje::~Mesaje() {

}
