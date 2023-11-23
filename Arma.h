#include "Baza.h"
#pragma once

class Arma {
    char tip[10]=""; //sabie, etc
    int putere=0; //puterea în atac
    void set_tip(char []);
public:
    Arma()=default;
    Arma(char [], int);
    //Arma(const Arma &);
    //Arma& operator=(const Arma &);
    //~Arma();
    void afisare();
    double get_putere();
};
