//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_INVENTARIO_H
#define PROYECTO__1_INVENTARIO_H
#include <map>
#include "Producto.h"
#include "Caja.h"
class Inventario {
private:
    int identificador;
    string nombre;
    Caja caja;
public:
    Inventario();
    Inventario(int identificador, const string &nombre,Caja caja);
    map<int,Producto> *ColeccionDeProductos;
    int getIdentificador() const;
    void setIdentificador(int identificador);
    const string &getNombre() const;
    void setNombre(const string &nombre);
    const Caja &getCaja() const;
    void setCaja(const Caja &caja);
    virtual ~Inventario();
};


#endif //PROYECTO__1_INVENTARIO_H
