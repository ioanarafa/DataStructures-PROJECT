#pragma once
#include <string>

using namespace std;

class Mesaje{
private:
    int id1;
    int id2;
    string text;
public:
    Mesaje();
    Mesaje(int, int, string);
    Mesaje(const Mesaje&);

    int getId1();
    int getId2();
    string getText();

    Mesaje& operator = (const Mesaje&);
    bool operator == (const Mesaje&);

    ~Mesaje();
};