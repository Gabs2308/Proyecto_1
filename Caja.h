//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_CAJA_H
#define PROYECTO__1_CAJA_H

#include "iostream"
#include "string"
#include "sstream"
using namespace std;
class Caja {
private:
int dinero;
public:
    Caja();
    Caja(int dinero);
    string desgloceVuelto(string);

    int getDinero() const;

    void setDinero(int dinero);
    string toString();

    virtual ~Caja();
};


#endif //PROYECTO__1_CAJA_H
