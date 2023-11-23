#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Baza
{
protected:
    int id;
 public:
    Baza(int);
    //Baza(const Baza&);
    //Baza* operator=(const Baza &);
    virtual void afis();
    virtual double getPutereAtac()=0;
    virtual ~Baza();
};
