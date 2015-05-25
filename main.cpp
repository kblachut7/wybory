#include <iostream>
#include <cstdlib>

using namespace std;



class wyborca {
public:
    int glos;  

void glosuj(int ilosc){
glos=rand()%ilosc;  
}


};


class komisja{
    public:
    wyborca* wyborcy;
    int ilekand;
    int ilewyb;
    
    
    void glosujcie(int ilewyborcow,int ilekandydatow)
    {
        ilekand= ilekandydatow;
      ilewyb=ilewyborcow;
     wyborcy=new  wyborca [ilewyborcow];
     
     for(int i=0;i<ilewyborcow;i++)
     wyborcy[i].glosuj(ilekandydatow);
     
    }
int * kandydaci;

void zlicz(){
kandydaci=new int[ilekand];    
for(int i =0;i<ilewyb;i++)
  kandydaci[ wyborcy[i].glos]++;   
  
   
    
}

    
    
void wypisz(){
   
for(int i =0;i<ilekand;i++)    
{
  
    cout<<" \n\nKANDYDAT NR: "<<i+1<<"   "<<kandydaci[i];
    
}
    
}
 
    
};




int main()
{
   cout << "Symulator wyborów dooda" << endl<<"Podaj liczbę komisji: \n"; 
   int  ilosckomisji, iloscwyborcow, ilosckandydatow;
   
      cin>>ilosckomisji;
      cout<<"\n podaj liczbe wyborców \n";
    cin>>iloscwyborcow;   
    cout<<"\n podaj liczbe kandydatów \n";
    cin>>ilosckandydatow;   
     
  
    komisja* komisje=new komisja[ilosckomisji];
    
    
    
    int * wyniki=new int[ilosckandydatow];
    for(int i=0;i<ilosckandydatow;i++)wyniki[i]=0;
    
    
  for(int i=0;i<ilosckomisji;i++)
 {
     komisje[i].glosujcie(  iloscwyborcow/ilosckomisji ,  ilosckandydatow);
   cout<<"\n\nKOMISJA NR "<<i+1<<"\n";
    komisje[i].zlicz();
    komisje[i].wypisz();
     
     
      for(int j=0;j<ilosckandydatow;j++)
        wyniki[j]=wyniki[j]+komisje[i].kandydaci[j];
        
     }
     
     
     int zwyciezca=1;
     int ilezwyciezcy=0;
           for(int j=0;j<ilosckandydatow;j++)
     {
         cout<<"\nkandydat nr "<<j<<"  "<<wyniki[j]<<"  glosow\n\n";
         if(wyniki[j]>ilezwyciezcy){
             zwyciezca=j;
             ilezwyciezcy=wyniki[j];
             
         }
         
     }
     
     cout<<"Wygral kandydat nr: "<<zwyciezca;
     
   cout<<"\n\nGratulujemy Andrzejowi!\n\n";
   return 0;
}

