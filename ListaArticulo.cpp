//
// Created by Gabriel on 01/04/2021.
//

#include "ListaArticulo.h"

ListaArticulo::ListaArticulo() {
    raiz = new NodoArticulo;
}

ListaArticulo::~ListaArticulo() {
    NodoArticulo *temp;
    NodoArticulo *anterior;
    if (raiz->getSiguiente() == nullptr) {
        delete raiz;
    } else {
        while (raiz->getSiguiente() != nullptr) {
            temp = raiz;
            while (temp->getSiguiente() != nullptr) {
                anterior = temp;
                temp = temp->getSiguiente();
            }
            anterior->setSiguiente(nullptr);
            delete temp;
        }
    }
}

string ListaArticulo::imprimir() {
    stringstream s;
    NodoArticulo *temp = raiz;

    if (temp->getSiguiente() == nullptr) {
        s << "---Lista vacia---\n";
    }else {
        temp = temp->getSiguiente();
        do {
            s << temp->getMiArticulo()->toString();
            s << "-->";
            temp = temp->getSiguiente();
        } while (temp != nullptr);
        s << "NULL\n";
    }
    return s.str();
}

/*void ListaArticulo:: registrarFecha(){
  actual= raiz;
  actual = actual->getSiguiente();

    if(actual != NULL){
      actual->getMiArticulo()->getFechaVenta();
    }
    actual = actual->getSiguiente();
}
*/

bool ListaArticulo:: comprobarDias(){
    actual= raiz;
    actual= actual->getSiguiente();
    while(actual != nullptr){
        if(actual->getMiArticulo()->getFechaVenta()->getDia()>90){
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}


float ListaArticulo:: descuento(){
    float descuento= 0.5;
    actual= raiz;
    actual = actual->getSiguiente();
    float conDescuento;
    while(actual!= NULL){
        if(comprobarDias()== 1){
            conDescuento = actual->getMiArticulo()->getPrecio() * descuento;
        }
    }
    return conDescuento;
}