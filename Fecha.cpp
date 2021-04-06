//
// Created by Gabriel Madrigal on 3/26/21.
//

#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anno) : dia(dia), mes(mes), anno(anno) {}
int Fecha::getDia() const {return dia;}
void Fecha::setDia(int dia) {Fecha::dia = dia;}
int Fecha::getMes() const {return mes;}
void Fecha::setMes(int mes) {Fecha::mes = mes;}
int Fecha::getAnno() const {return anno;}
void Fecha::setAnno(int anno) {Fecha::anno = anno;}
string Fecha::toString(){
    stringstream s;
    s << "Fecha: " << getDia() << "/" << getMes() << "/" << getAnno() << ".\n";
    return s.str();
}