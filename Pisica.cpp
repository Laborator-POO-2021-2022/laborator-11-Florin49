#include "Pisica.hpp"

Pisica::~Pisica()
{
    delete[] nume,descriere;
}
Pisica::Pisica():nume(NULL),descriere(NULL),varsta(0),vaccin(-1)
{

}
Pisica::Pisica(const char* name,float var,const char* des, int vax):varsta(var),vaccin(vax)
{
    nume=strdup(name);
    descriere=strdup(des);
}
void Pisica::afisare()
{
    cout<<"se numeste "<<nume;
    if(varsta>=1)
         cout<<", in varsta de "<<varsta<<" ani, are drept descriere:"<<endl;
    else 
         cout<<", in varsta de "<<int(varsta*12)<<" luni, are drept descriere:"<<endl;
    
    cout<<descriere<<endl;
    if(vaccin==1)
      cout<<"Este vaccinata.";
    else
      cout<<"Nu este vaccinata.";
    cout<<endl;
}
float Pisica::getVarsta()
{
    return varsta;
}
char Pisica::getColor()
{
    return ' ';
}
const char* Pisica::getDescriere()
{
    return descriere;
}
int Pisica::getVax()
{
    return -1;
}