//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_ADMINISTRADOR_H
#define PROYECTO__1_ADMINISTRADOR_H
#include "Inventario.h"

class Administrador {
private:

public:
    virtual int getIdentificador()=0;
    virtual string getNombre()=0;
    virtual void setNombre(string)=0;
    virtual string toString()=0;
    virtual void insertar(Producto)=0;
    virtual void agregarCantidades(string idProducto, int cantidad)=0;
    virtual void disminuirCantidades(string idProductos, int cantidad)=0;
    virtual void borrar(string id)=0;
    virtual Producto consultar(string id)=0;
    virtual void ingresarDinero()=0;
    virtual void retirarDinero(int cantidad)=0;
};


#endif //PROYECTO__1_ADMINISTRADOR_H
