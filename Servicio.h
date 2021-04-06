//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_SERVICIO_H
#define PROYECTO__1_SERVICIO_H

#include "Producto.h"
class Servicio: public Producto {

private:
 float porcentajeDescuento;
public:
    float getPrecio() const override;

    float getPorcentajeDescuento() const;
    void setPorcentajeDescuento(float porcentajeDescuento);
};


#endif //PROYECTO__1_SERVICIO_H
