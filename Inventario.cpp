//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Inventario.h"

Inventario::Inventario(): identificador(0), nombre(""){}
Inventario::Inventario(int identificador, const string &nombre, Caja caja): identificador(identificador), nombre(nombre), caja(caja) {}

int Inventario::getIdentificador() const {return identificador;}
void Inventario::setIdentificador(int identificador) {Inventario::identificador = identificador;}
const string &Inventario::getNombre() const {return nombre;}
void Inventario::setNombre(const string &nombre) {Inventario::nombre = nombre;}
const Caja &Inventario::getCaja() const {return caja;}
void Inventario::setCaja(const Caja &caja) {Inventario::caja = caja;}

Inventario::~Inventario() {}


