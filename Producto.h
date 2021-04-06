//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_PRODUCTO_H
#define PROYECTO__1_PRODUCTO_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Producto {
public:

string nombre;
float precio;
int cantidad;

public:
    Producto();
    Producto(string nombre, float precio, int cantidad);
    virtual ~Producto();

    const string &getNombre() const;
    void setNombre(const string &nombre);

    virtual float getPrecio() const;
    void setPrecio(float precio);
    int getCantidad() const;
    void setCantidad(int cantidad);

    string toString();
};


#endif //PROYECTO__1_PRODUCTO_H
