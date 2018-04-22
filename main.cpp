#include <iostream>
#include <cstdlib>
#include <cmath>
#include "sortowanie.cpp"
#include "testy.cpp"
//#define ILOSC 10

int main(){
  //int* tablica=new int [ILOSC];
  int i, j;
   int ilosc_testow=100; 
  double scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  int ILOSC[5]={10000, 50000, 100000, 500000, 1000000};

  cout.setf(ios::fixed); //ustawuany dokladnosc

  for(j=0; j<5; j++){
      int* tablica=new int [ILOSC[j]];
      cout<<endl<<"SORTOWANIE "<<ILOSC[j]<<" ELEMENTOW"<<endl;
     cout<<endl<<"LOSOWA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      LosowaTablica<int>(tablica, ILOSC[j]);
      Test<int>(tablica, ILOSC[j], scalanie,szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;  
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"ODWROTNA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      OdwrotnaTablica<int>(tablica, ILOSC[j]);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"25% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      Tablica<int>(tablica, ILOSC[j],25);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"50% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC[j],50);
    Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"75% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      Tablica<int>(tablica, ILOSC[j],75);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"95% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      Tablica<int>(tablica, ILOSC[j],95);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"99% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      Tablica<int>(tablica, ILOSC[j],99);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"99,7% POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      Tablica<int>(tablica, ILOSC[j],99.7);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
    
    cout<<endl<<"POSORTOWANA"<<endl;
    for(i=0; i<ilosc_testow; i++){
      PosortowanaTablica<int>(tablica, ILOSC[j]);
      Test<int>(tablica, ILOSC[j], scalanie, szybkie, kopcowanie, introspektywne);
    }
    cout<<"SCALANIE: "<<scalanie<<endl;
    cout<<"SZYBKIE: "<<szybkie<<endl;
    cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
    cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
    
       delete [] tablica;
  }
   
  return 1;
}

