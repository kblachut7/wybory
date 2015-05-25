#include <iostream>
#include <cstdlib>

using namespace std;



class wyborca {
public:
    int glos;  

wyborca(int ilosc){
glos=rand()%ilosc+1;  
}


};


class komisja{
    
    wyborca* wybory;
    
    
    
    
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
     
  wyborca staszek(4);
  cout<<staszek.glos;
  
   
   
   
   
   return 0;
}

