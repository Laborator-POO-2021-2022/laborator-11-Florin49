#include "Albe.hpp"

Albe::~Albe()
{
    
}
Albe::Albe():Pisica(),color(' ')
{
    
}
Albe::Albe(const char* name,float var,const char* des, int vax,char c):Pisica(name,var,des,vax),color(c)
{

}
void Albe::afisare()
{
    cout<<"Pisica de culoare albe ";
    Pisica::afisare();
}
float Albe::getVarsta()
{
    return varsta;
}
char Albe::getColor()
{
    return 'a';
}
const char* Albe::getDescriere()
{
    return descriere;
}
int Albe::getVax()
{
    return vaccin;
}