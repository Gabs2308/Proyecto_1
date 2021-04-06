//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Producto.h"

Producto::Producto():nombre(""),precio(0.0),cantidad(0) {}

Producto::Producto(string nombre, float precio, int cantidad) : nombre(nombre), precio(precio),
                                                                       cantidad(cantidad) {}

Producto::~Producto() = default;

const string &Producto::getNombre() const {return nombre;}
void Producto::setNombre(const string &nombre) {Producto::nombre = nombre;}
float Producto::getPrecio() const {return precio;}
int Producto::getCantidad() const {return cantidad;}
void Producto::setCantidad(int cantidad) {Producto::cantidad = cantidad;}
void Producto::setPrecio(float precio) {Producto::precio = precio;}

string Producto::toString() {
    stringstream s;
    return s.str();
}