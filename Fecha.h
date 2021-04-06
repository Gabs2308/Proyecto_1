//
// Created by Gabriel Madrigal on 3/26/21.
//

#ifndef PROYECTO__1_FECHA_H
#define PROYECTO__1_FECHA_H

#include "iostream"
#include "string"
#include "sstream"
using namespace std;
class Fecha {
private:
    int dia, mes, anno;
public:
    Fecha(int dia = 0, int mes = 0, int anno = 0);

    int getDia() const;
    void setDia(int dia);
    int getMes() const;
    void setMes(int mes);
    int getAnno() const;
    void setAnno(int anno);
    string toString();
};


#endif //PROYECTO__1_FECHA_H
