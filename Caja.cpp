//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Caja.h"

Caja::Caja(int dinero) : dinero(dinero) {}

Caja::Caja() {}

int Caja::getDinero() const {
    return dinero;
}

void Caja::setDinero(int dinero) {
    Caja::dinero = dinero;
}

string Caja::desgloceVuelto(string){
    stringstream s;
    return s.str();
}

Caja::~Caja() {

}
