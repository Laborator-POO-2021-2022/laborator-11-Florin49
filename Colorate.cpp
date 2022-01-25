#include "Colorate.hpp"

Colorate::~Colorate()
{
    
}
Colorate::Colorate():Pisica(),color(' ')
{
    
}
Colorate::Colorate(const char* name,float var,const char* des, int vax,char c):Pisica(name,var,des,vax),color(c)
{

}
void Colorate::afisare()
{
    cout<<"Pisica de colorata ";
    Pisica::afisare();
}
float Colorate::getVarsta()
{
    return varsta;
}
char Colorate::getColor()
{
    return 'c';
}
const char* Colorate::getDescriere()
{
    return descriere;
}
int Colorate::getVax()
{
    return vaccin;
}