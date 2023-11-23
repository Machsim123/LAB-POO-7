#include "Arma.h"

void Arma::set_tip(char v[])
{
    if(v==NULL || strlen(v)>=10);
    else
        strcpy(tip,v);
}

Arma::Arma(char v[], int i):putere(i)
{
    set_tip(v);
}

void Arma::afisare()
{
    cout<<"tip: "<<tip<<endl;
    cout<<"putere: "<<putere<<endl;
}

double Arma::get_putere()
{
    return (double)putere;
}
