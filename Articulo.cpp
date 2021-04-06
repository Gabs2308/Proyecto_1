//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Articulo.h"

float Articulo::getPrecio() const {return Producto::getPrecio();}
Fecha *Articulo::getFechaVenta(){return fechaVenta;}

Articulo::Articulo(const string &nombre, float precio, int cantidad, Fecha *fechaVenta) : Producto(nombre, precio,cantidad),fechaVenta(fechaVenta) {}
string Articulo:: toString(){
    stringstream s;
    s << "Nombre del articulo: "<<getNombre()<<endl;
    s << "El precio es: "<<getPrecio()<<endl;
    s << "La cantidad de articulos corresponde a: "<<getCantidad()<<endl;
    s << getFechaVenta()->toString()<<endl;
    return s.str();
}