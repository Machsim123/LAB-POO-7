#include "Soldat.h"

using namespace std;

void fct_sortare(Baza *v[],const int nr)
{
    for(int i=0; i<nr-1; i++)
        for(int j=i+1; j<nr; j++)
            if(v[i]->getPutereAtac()<v[j]->getPutereAtac())
            {
                Baza* aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}

int main()
{
    Arma i("aer",0),j("sabie",200),k("sabioasa",190);
    /*i.afisare();
    j.afisare();
    k.afisare();*/
    ///Arma l(i);
    ///l.afisare();
    Arma v[3]={i,j,k};
    Soldat s(3,v);
    char sir[7]="soldat";
    Baza** vec= new Baza*[3];
    vec[0]=new Soldat(12,3,s);
    vec[1]=new Vrajitor(12,2,18);
    vec[2]=new Soldat_Vrajitor(12,3,s,4,31,sir);
    for(int i=0; i<3; i++)
        vec[i].afisare();
    fct_sortare(vec,3);
    for(int i=0; i<3; i++)
        vec[i]->afis();

    return 0;
}
