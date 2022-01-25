#ifndef CAFENEA
#define CAFENEA

#include <iostream>
#include <cstring>
using namespace std;


class Cafenea
{
    public: 
         virtual ~Cafenea()=0;
         virtual void afisare()=0;
         virtual float getVarsta()=0;
         virtual char getColor()=0;
         virtual const char* getDescriere()=0;
         virtual int getVax()=0;
};







#endif