//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Servicio.h"

float Servicio::getPrecio() const {
    return Producto::getPrecio();
}

float Servicio::getPorcentajeDescuento() const {return porcentajeDescuento;}
void Servicio::setPorcentajeDescuento(float porcentajeDescuento) {Servicio::porcentajeDescuento = porcentajeDescuento;}
