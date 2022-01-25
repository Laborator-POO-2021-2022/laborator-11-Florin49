#ifndef PISICA
#define PISICA

#include "Cafenea.hpp"
class Pisica: public Cafenea
{
    protected:
       char* nume;
       char* descriere;
       float varsta;
       int vaccin;
    public:
        ~Pisica();
        Pisica();
        Pisica(const char*,float,const char*, int);
        void afisare();
        float getVarsta();
        char getColor();
        const char* getDescriere();
        int getVax();

};

#endif
