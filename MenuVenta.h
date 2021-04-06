//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_MENUVENTA_H
#define PROYECTO__1_MENUVENTA_H
#include "Vendedor.h"
class MenuVenta {
private:
    Producto *producto1 = nullptr;
    Vendedor* ven1;
public:
    void mostrar();

    Producto *getProducto1() const;
    void setProducto1(Producto *producto1);
};


#endif //PROYECTO__1_MENUVENTA_H
