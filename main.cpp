#include <iostream>
#include <cstdlib>
#include <cmath>
#include "sortowanie.cpp"
#include "testy.cpp"
#define ILOSC 100

using namespace std;

int main(){
  int tablica[ILOSC];
  //int i, j;
  //int ilosc_testow=100; 
  //double scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;

  LosowaTablica<int>(tablica, ILOSC);
  cout<<endl;
  OdwrotnaTablica<int>(tablica, ILOSC);
  cout<<endl;
  Tablica<int>(tablica, ILOSC, 25);
  cout<<endl;
  PosortowanaTablica(tablica, ILOSC);
  cout<<endl;
  //Test<int>(tablica, ILOSC, scalanie, szybkie, kopcowanie, introspektywne);

  
  
  //cout.setf(ios::fixed); //ustawuany dokladnosc
  //cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  //cout<<"SCALANIE: "<<scalanie<<endl;
  //cout<<"SZYBKIE: "<<szybkie<<endl;
  //cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  //cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
  
 
  return 1;
}
