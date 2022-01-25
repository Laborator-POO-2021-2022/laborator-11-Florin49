#ifndef NEAGRA
#define NEAGRA

#include "Pisica.hpp"

class Neagra:  public Pisica
{
     char color;
     public:
          Neagra();
          Neagra(const char*,float,const char*, int, char);
          ~Neagra();
          void afisare();
          char getColor();
          float getVarsta();
          const char* getDescriere();
          int getVax();
};

#endif




