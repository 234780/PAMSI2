#include <iostream>
#include <cstdlib>
#include <cmath>
#include "sortowanie.cpp"
#include "testy.cpp"
#define ILOSC 50000

using namespace std;

int main(){
  int tablica[ILOSC];
  //int tablica2[ILOSC], tablica3[ILOSC], tablica4[ILOSC],tablica5[ILOSC];
  int i, j;
  int ilosc_testow=100;
  int pomoc;
  int indeks1, indeks2;
  double scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;

  srand(time(NULL)); //generator pseudolosowy


  
  for(i=0; i<ILOSC; i++){
    tablica[i]=i+3;
  }

  for(j=0; j<ilosc_testow; j++){
  for(i=0; i<ILOSC; i++){ // troche mieszan
    indeks1=rand()%ILOSC; //losujemy dwa indeksy
    indeks2=rand()%ILOSC;
    pomoc=tablica[indeks1];
    tablica[indeks1]=tablica[indeks2]; //zamieniamy
    tablica[indeks2]=pomoc;
  }
  Test<int>(tablica, ILOSC, scalanie, szybkie, kopcowanie, introspektywne);
  
  }

  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;
  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
  
  // for(i=0; i<ILOSC; i++){
  // tablica2[i]=tablica[i];
  // tablica3[i]=tablica[i];
  // tablica4[i]=tablica[i];
  // tablica5[i]=tablica[i];
  //}

  //  cout<<"NIEPOSORTOWANA: "<<endl;
  //Wyswietl<int>(tablica, ILOSC);

  //cout<<endl<<"SCALANIE: "<<endl;
  //SortujScalanie<int>(tablica, 0, ILOSC-1);
  //Wyswietl<int>(tablica, ILOSC);

  // cout<<endl<<"SZYBKIE: "<<endl;
  //SortujSzybkie<int>(tablica2, 0, ILOSC-1);
  //Wyswietl<int>(tablica2, ILOSC);

  // cout<<endl<<"KOPCOWANIE: "<<endl;
  //SortujKopcowanie<int>(tablica3, ILOSC);
  //Wyswietl<int>(tablica3, ILOSC);

  //cout<<endl<<"WSTAWIANIE: "<<endl;
  //SortujWstawianie<int>(tablica4, ILOSC);
  //Wyswietl<int>(tablica4, ILOSC);

  //cout<<endl<<"INTROSPEKTYWNE: "<<endl;
  //SortujIntrospektywne<int>(tablica5, ILOSC-1);
  //Wyswietl<int>(tablica5, ILOSC);
  return 1;
}
