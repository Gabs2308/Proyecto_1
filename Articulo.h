//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_ARTICULO_H
#define PROYECTO__1_ARTICULO_H
#include "Producto.h"
#include "Fecha.h"
class Articulo: public Producto{
private:
    Fecha *fechaVenta;
public:
    Articulo(const string &nombre = "", float precio = 0.0, int cantidad = 0, Fecha* fechaVenta = nullptr);
    float getPrecio() const override;
    Fecha* getFechaVenta();
    string toString();
};


#endif //PROYECTO__1_ARTICULO_H
