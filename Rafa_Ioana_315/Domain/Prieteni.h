#pragma once
#include <string>


using namespace std;

class Prieteni{
private:
    string nume1;
    string nume2;
public:
    Prieteni();
    Prieteni(string , string);
    Prieteni(const Prieteni&);

    string getNume1();
    string getNume2();

    Prieteni& operator = (const Prieteni&);
    bool operator == (const Prieteni&);
    bool operator != (const Prieteni&);

    ~Prieteni();
};
