#include "Vrajitor.h"

void Vrajitor::grow_putere()
{
    if(nivel>1)
        for(int i=1; i<nivel; i++)
            putere_baza+= (10/100)*putere_baza;
}

Vrajitor::Vrajitor(int i, int n, int p):Baza(i),nivel(n),putere_baza(p)
{
    grow_putere();
}

void Vrajitor::afis()
{
    Baza::afis();
    cout<<"nivel: "<<nivel<<endl;
    cout<<"putere_baza: "<<putere_baza<<endl;
}

double Vrajitor::getPutereAtac()
{
    return (double)putere_baza;
}
