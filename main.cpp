#include "Neagra.hpp"
#include "Albe.hpp"
#include "Colorate.hpp"

int main()
{
    Cafenea** Pisici;
    Cafenea* p;
    Pisici=new Cafenea*[8];
    
    Pisici[0]=new Albe("Vanessa",0.2,"Foarte frumoasa si pufoasa, insa destul de bolnavicioasa.",0,'a');
    Pisici[1]=new Colorate("Dora",0.8,"Minte si corp ager, foarte extroverta, uneori cere prea multa atentie.",0,'c');
    Pisici[2]=new Neagra("Iris",2.4,"Introverta, inofensiva, se joaca mereu cu propriul ghem rosu fara sa-i pese de celelalte pisici.",1,'n');
    Pisici[3]=new Albe("Anisimova",2,"Ii place sa stea cu pisici care nu sunt negre.",0,'a');
    Pisici[4]=new Colorate("Eleonora",2,"Sarmanta, denota un aer regal in compatrioatelor sale.",1,'c');
    Pisici[5]=new Neagra("Aris",1,"Inocenta, se uita patrunzator la fiecare om ce intra in cafenea, in rest nu face prea multe.",0,'n');
    Pisici[6]=new Colorate("Ingrid",6,"Foarte severa, isi protejeaza puii usor violent, dar dintr-un instinct matern.",1,'c');
    Pisici[7]=new Neagra("Pufica",4.5,"Supraponderala, dispozitie letargica, se crede ca a visat un rap battle intre Iisus Hristos si Kanye West.",1,'n');
    cout<<"PISICILE DIN CAFENEAAAAAAAAAAAAAAAAAAA:\n";
    for(int i=0;i<8;i++)
    {
        cout<<endl;
        Pisici[i]->afisare();
        cout<<endl;
    }
    int nr_zile=0,nr1=300,nr;
    nr=nr1;
    float consum=0;
    ////CERINTA1
    while(nr>nr1/2)
    {  
       nr_zile++;
       nr-=5;//sunt date 5 pisici spre adoptie fara a fi hranite
       nr+=3;///sunt salvate 3 pisici
       
       
    }
    
    cout<<"\n\nNumarul de zile in care sunt raman mai putin de 50% din pisici "<<nr_zile<<".";
    ///Cerinta2
    int n=100;
    while(n>0 && nr1>0)
    {  
         nr1-=2;
         consum+=nr1*0.1;///cantitate mancata in kg
         n--;
    }
    cout<<"\nConsumul dupa 100 de zile este de "<<consum<<"kg.";
   


    ////-------Cerinta3-------
    int categ[3]={0},n_categ[3]={0},a_categ[3]={0},c_categ[3]={0},vax[3]={0};
    
    for(int i=0;i<8;i++)
    {
        if(Pisici[i]->getVarsta()<1)
        {
              categ[0]++;
              if(Pisici[i]->getColor()=='n')
                  n_categ[0]++;
              else if(Pisici[i]->getColor()=='a')
                  a_categ[0]++;
              else if(Pisici[i]->getColor()=='c')
                  c_categ[0]++;
              if(Pisici[i]->getVax()==1)
                   vax[0]++;
        }
        else if(Pisici[i]->getVarsta()>=1 && Pisici[i]->getVarsta()<3)
          {    
              categ[1]++;
              if(Pisici[i]->getColor()=='n')
                  n_categ[1]++;
              else if(Pisici[i]->getColor()=='a')
                  a_categ[1]++;
              else if(Pisici[i]->getColor()=='c')
                  c_categ[1]++;
              if(Pisici[i]->getVax()==1)
                vax[1]++;
          }
        else if(Pisici[i]->getVarsta()>=3)
        {
            categ[2]++;
            if(Pisici[i]->getColor()=='n')
                  n_categ[2]++;
            else if(Pisici[i]->getColor()=='a')
                  a_categ[2]++;
            else if(Pisici[i]->getColor()=='c')
                  c_categ[2]++;
            if(Pisici[i]->getVax()==1)
                vax[2]++;
           
        }
    }
    cout<<"\n\nNumarul pisicilor pe categorii:\n";
    cout<<"-"<<categ[0]<<" pui"<<endl;
    cout<<"-"<<categ[1]<<" tinere"<<endl;
    cout<<"-"<<categ[2]<<" mature"<<endl;
    cout<<"\n\nNumarul pisicilor pe culori si categorii:\n";
    cout<<"Pisici negre:\n";
    cout<<"-"<<n_categ[0]<<" pui"<<endl;
    cout<<"-"<<n_categ[1]<<" tinere"<<endl;
    cout<<"-"<<n_categ[2]<<" mature"<<endl;
    cout<<"Pisici albe:\n";
    cout<<"-"<<a_categ[0]<<" pui"<<endl;
    cout<<"-"<<a_categ[1]<<" tinere"<<endl;
    cout<<"-"<<a_categ[2]<<" mature"<<endl;
    cout<<"Pisici colorate:\n";
    cout<<"-"<<c_categ[0]<<" pui"<<endl;
    cout<<"-"<<c_categ[1]<<" tinere"<<endl;
    cout<<"-"<<c_categ[2]<<" mature"<<endl;
    cout<<"\n\nNumarul pisicilor vaccinate pe categorii:\n";
    cout<<"-"<<vax[0]<<" pui"<<endl;
    cout<<"-"<<vax[1]<<" tinere"<<endl;
    cout<<"-"<<vax[2]<<" mature"<<endl;


    ////-----Cerinta4-----
    for(int i=0;i<7;i++)
       for(int j=i+1;j<8;j++)
           if(strlen( Pisici[i]->getDescriere() ) < strlen( Pisici[j]->getDescriere() )  )
           {
               p=Pisici[i];
               Pisici[i]=Pisici[j];
               Pisici[j]=p;
           }
    cout<<endl<<endl<<endl<<"In urma ordonarii in functie de lungimea descrierii, rezulta urmatorul clasament:"<<endl<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<endl;
        Pisici[i]->afisare();
        cout<<endl;
    }
    return 0;
}