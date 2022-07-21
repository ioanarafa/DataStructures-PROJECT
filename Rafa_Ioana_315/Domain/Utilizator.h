#pragma once
#include <iostream>
#include <string>
using namespace std;

class Utilizator {
private:
    int id;
    string nume;
public:
    Utilizator();
    Utilizator(int, string);
    Utilizator(const Utilizator&);


    Utilizator& operator = (const Utilizator&);
    bool operator == (const Utilizator&);
    bool operator != (const Utilizator&);
    bool operator > (const Utilizator&);
    bool operator < (const Utilizator&);
    friend ostream& operator<<(ostream&, Utilizator&);
    friend istream& operator>>(istream& , Utilizator&);

    ~Utilizator();
};