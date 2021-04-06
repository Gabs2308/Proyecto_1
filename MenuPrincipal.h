//
// Created by Karo Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_MENUPRINCIPAL_H
#define PROYECTO__1_MENUPRINCIPAL_H
#include "MenuAdministrador.h"
#include "MenuVenta.h"
class MenuPrincipal {
private:
    MenuAdministrador* menu1;
    MenuVenta* menuv1;
public:
    void menuPrincipal();
    void menuAdministrador();
    void menuVenta();

};


#endif //PROYECTO__1_MENUPRINCIPAL_H
