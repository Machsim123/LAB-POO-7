#include "Soldat.h"

void Soldat::set_arme(Arma* a)
{
    if(a==NULL)
        arme=NULL;
    else
    {
        arme=new Arma[nr_arme];
        arme=a;
    }
}

Soldat::Soldat(int i, int n, Arma* v):Baza(i),nr_arme(n)
{
    set_arme(v);
}

Soldat::Soldat(const Soldat &s):Baza(s.id),nr_arme(s.nr_arme)
{
    set_arme(s.arme);
}

Soldat& Soldat::operator=(const Soldat &s)
{
    Baza::operator=(s);
    nr_arme=s.nr_arme;
    set_arme(s.arme);
}

Soldat::~Soldat()
{
    delete [] arme;
    arme=NULL;
}

void Soldat::afis()
{
    Baza::afis();
    cout<<"nr_arme: "<<nr_arme<<endl;
    cout<<"arme: "<<endl;
    for(int i=0; i<nr_arme; i++)
        {
            cout<<"arma "<<i<<": "<<endl;
            arme[i].afisare();
        }
}

double Soldat::getPutereAtac()
{
    double sum=0;
    for(int i=0; i<nr_arme; i++)
        sum+= arme[i].get_putere();
    return sum;
}
