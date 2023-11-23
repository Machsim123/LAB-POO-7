#include "Arma.h"
#pragma once

class Soldat: virtual public Baza{
protected:
 int nr_arme=0;
 Arma* arme=NULL;
 // puterea în atac = suma puterilor armelor sale
 void set_arme(Arma*);
public:
    Soldat(int, int, Arma*);
    Soldat(const Soldat &);
    Soldat& operator=(const Soldat &);
    ~Soldat();
    void afis();
    double getPutereAtac();
};
