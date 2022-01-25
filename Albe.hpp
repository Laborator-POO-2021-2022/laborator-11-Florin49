#ifndef ALBE
#define ALBE

#include "Pisica.hpp"

class Albe:  public Pisica
{
     char color;
     public:
          Albe();
          Albe(const char*,float,const char*, int, char);
          ~Albe();
          void afisare();
          char getColor();
          float getVarsta();
          const char* getDescriere();
          int getVax();
};

#endif




