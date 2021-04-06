//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_VENDEDOR_H
#define PROYECTO__1_VENDEDOR_H

#include "Inventario.h"
using namespace std;
class Vendedor{

public:
    virtual string getNombre() =0 ;
    virtual string realizarCompra(string id, int cantidad, int montoPago) = 0;
    virtual string toString() = 0;
};


#endif //PROYECTO__1_VENDEDOR_H
