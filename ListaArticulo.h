//
// Created by Gabriel on 01/04/2021.
//

#ifndef PROYECTO__1_LISTAARTICULO_H
#define PROYECTO__1_LISTAARTICULO_H
#include "NodoArticulo.h"

class ListaArticulo {

private:
    NodoArticulo *raiz;
    NodoArticulo *actual;
public:
    ListaArticulo();
    ~ListaArticulo();
    void agregarInicio(Articulo *);
    bool comprobarDias();
    float descuento();
    string imprimir();
};


#endif //PROYECTO__1_LISTAARTICULO_H
