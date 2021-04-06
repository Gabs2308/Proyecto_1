//
// Created by Gabriel on 01/04/2021.
//

#include "NodoArticulo.h"

NodoArticulo::NodoArticulo() {
    miArticulo = nullptr;
    siguiente = nullptr;
}
NodoArticulo::~NodoArticulo() {}
Articulo *NodoArticulo::getMiArticulo() const {return miArticulo;}
void NodoArticulo::setMiArticulo(Articulo *miArticulo) {NodoArticulo::miArticulo = miArticulo;}
NodoArticulo *NodoArticulo::getSiguiente() const {return siguiente;}
void NodoArticulo::setSiguiente(NodoArticulo *siguiente) {NodoArticulo::siguiente = siguiente;}
