#include "Soldat.h"

class Vrajitor: virtual public Baza{
protected:
 int nivel=0; //de la 1 la 5
 int putere_baza=0;
 // puterea în atac se calculeaza adaugand 10% la putere_baza pentru
 //fiecare nivel >1
 void grow_putere();
public:
    Vrajitor(int, int, int);
    ///Vrajitor(Vrajitor &);
    ///Vrajitor& operator=(const Vrajitor &);
    ~Vrajitor()=default;
    void afis();
    double getPutereAtac();
};
