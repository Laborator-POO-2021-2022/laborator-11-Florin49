#include "Neagra.hpp"

Neagra::~Neagra()
{
    
}
Neagra::Neagra():Pisica(),color(' ')
{
    
}
Neagra::Neagra(const char* name,float var,const char* des, int vax,char c):Pisica(name,var,des,vax),color(c)
{
    
}
void Neagra::afisare()
{
    cout<<"Pisica de culoare neagra ";
    Pisica::afisare();
}
float Neagra::getVarsta()
{
    return varsta;
}
char Neagra::getColor()
{
    return 'n';
}
const char* Neagra::getDescriere()
{
    return descriere;
}
int Neagra::getVax()
{
    return vaccin;
}
