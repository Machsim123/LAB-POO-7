#include "Vrajitor.h"
#include "Soldat.h"

class Soldat_Vrajitor: virtual public Soldat, virtual public Vrajitor{
 char* istoric=NULL; //a fost mai intai soldat
 // puterea în atac e suma puterilor detinute în calitate de
 // soldat și vrajitor
 void set_istoric(char *);
public:
    Soldat_Vrajitor(int , int , Arma *, int , int, char *);
    Soldat_Vrajitor(Soldat_Vrajitor &);
    Soldat_Vrajitor& operator=(Soldat_Vrajitor &);
    ~Soldat_Vrajitor();
    void afis();
    double getPutereAtac();
};

