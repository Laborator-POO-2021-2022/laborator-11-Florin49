#ifndef COLORATE
#define COLORATE

#include "Pisica.hpp"

class Colorate: public Pisica
{
     char color;
     public:
          Colorate();
          Colorate(const char*,float,const char*, int, char);
          ~Colorate();
          void afisare();
          char getColor();
          float getVarsta();
          const char* getDescriere();
          int getVax();
};

#endif




