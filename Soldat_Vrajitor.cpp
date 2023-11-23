#include "Soldat_Vrajitor.h"

void Soldat_Vrajitor::set_istoric(char *v)
{
    if(v==NULL)
        istoric=NULL;
    else
    {
        istoric=new char[strlen(v)+1];
        strcpy(istoric,v);
    }
}

Soldat_Vrajitor::Soldat_Vrajitor(int i, int n, Arma *a, int ni, int p, char *vec):Soldat(i,n,a),Vrajitor(i,ni,p),Baza(i)
{
    set_istoric(vec);
}

Soldat_Vrajitor::Soldat_Vrajitor(Soldat_Vrajitor &sol):Soldat(sol.id, sol.nr_arme, sol.arme),Vrajitor(sol.id, sol.nivel, sol.putere_baza), Baza(sol.id)
{
    set_istoric(sol.istoric);
}

Soldat_Vrajitor& Soldat_Vrajitor::operator=(Soldat_Vrajitor &sol)
{
    Baza::operator=(sol);
    Soldat::operator=(sol);
    Vrajitor::operator=(sol);///nu cred ca merge asa ! :(
    set_istoric(sol.istoric);
}

Soldat_Vrajitor::~Soldat_Vrajitor()
{
    delete [] istoric;
    istoric=NULL;
}

void Soldat_Vrajitor::afis()
{
    Baza::afis();
    Soldat::afis();
    Vrajitor::afis();
    cout<<"istoric: "<<istoric<<endl;
}

double Soldat_Vrajitor::getPutereAtac()
{
    return (Soldat::getPutereAtac() + Vrajitor::getPutereAtac());
}
