#include "sortowanie.hh"
#include <cstdio>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

template <class typ>
bool SprawdzSortowanie(typ tablica[], int dlugosc );

template <class typ>
void Test(typ tablica[], int dlugosc, double &scalanie, double &szybkie, double&kopcowanie, double &introspektywne){
  time_t start, stop;
  double roznica;
  int i;
  typ t1[dlugosc];

  for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
  
  start=time(NULL); // mierzymy czas dzialania sortowania przez scalanie
  SortujScalanie<typ>(t1, 0, dlugosc-1);
  stop=time(NULL);
  if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
  roznica=difftime(stop,start);
  scalanie=scalanie+roznica;

   for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
   
  start=time(NULL); // mierzymy czas dzialania sortowania przez scalanie
  SortujSzybkie<typ>(t1, 0, dlugosc-1);
  stop=time(NULL);
  if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
  roznica=difftime(stop,start);
  szybkie=szybkie+roznica;

   for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
   
  start=time(NULL); // mierzymy czas dzialania sortowania przez scalanie
  SortujKopcowanie<typ>(t1, dlugosc);
  stop=time(NULL);
  if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
  roznica=difftime(stop,start);
  kopcowanie=kopcowanie+roznica;

   for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
   
  start=time(NULL); // mierzymy czas dzialania sortowania przez scalanie
  SortujIntrospektywne<typ>(t1, dlugosc);
  stop=time(NULL);
  if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
  roznica=difftime(stop,start);
  introspektywne=introspektywne+roznica;
  
}
template <class typ>
bool SprawdzSortowanie(typ tablica[], int dlugosc){
  int i;

  for(i=0; i<dlugosc-1;i++){ // sprawdzamy dla kazdych dwoch kolejnych elementow tablicy
    if(tablica[i]>tablica[i+1])
      return false; // nie zdadza sie??? :(
  }
  return true; // dziala ok? ;)
}
