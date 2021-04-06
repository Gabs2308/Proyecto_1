//
// Created by Gabriel on 01/04/2021.
//

#ifndef PROYECTO__1_NODOARTICULO_H
#define PROYECTO__1_NODOARTICULO_H
#include "Articulo.h"

class NodoArticulo {
private:
    Articulo *miArticulo;
    NodoArticulo *siguiente;
public:
    NodoArticulo();
    ~NodoArticulo();
    Articulo *getMiArticulo() const;
    void setMiArticulo(Articulo *);
    NodoArticulo *getSiguiente() const;
    void setSiguiente(NodoArticulo *);
};


#endif //PROYECTO__1_NODOARTICULO_H
