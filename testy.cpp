#include "sortowanie.hh"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

template <class typ>
bool SprawdzSortowanie(typ tablica[], int dlugosc );

template <class typ>
void TestujWstawianie(typ tablica[], int dlugosc, double &wstawianie){
  clock_t start, stop;
  double roznica;

  start=clock();
  SortujWstawianie<typ>(tablica,dlugosc);
  stop=clock();
  if(!SprawdzSortowanie(tablica, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  wstawianie=wstawianie+roznica;
}

template <class typ>
void TestujScalanie(typ tablica[], int dlugosc, double &scalanie){
  clock_t start, stop;
  double roznica;

  start=clock();
  SortujScalanie<typ>(tablica, 0, dlugosc-1);
  stop=clock();
  if(!SprawdzSortowanie(tablica, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  scalanie=scalanie+roznica;
}

template <class typ>
void TestujSzybkie(typ tablica[], int dlugosc, double &szybkie){
  clock_t start, stop;
  double roznica;

  start=clock();
  SortujSzybkie<typ>(tablica, 0, dlugosc-1);
  stop=clock();
  if(!SprawdzSortowanie(tablica, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  szybkie=szybkie+roznica;
}

template <class typ>
void TestujKopcowanie(typ tablica[], int dlugosc, double &kopcowanie){
  clock_t start, stop;
  double roznica;

  start=clock();
  SortujKopcowanie<typ>(tablica, dlugosc);
  stop=clock();
  if(!SprawdzSortowanie(tablica, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  kopcowanie=kopcowanie+roznica;
}

template <class typ>
void TestujIntrospektywne(typ tablica[], int dlugosc, double&introspektywne){
  clock_t start, stop;
  double roznica;

  start=clock();
  SortujIntrospektywne<typ>(tablica, dlugosc);
  stop=clock();
  if(!SprawdzSortowanie(tablica, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  introspektywne=introspektywne+roznica;
}

template <class typ>
void Test(typ tablica[], int dlugosc, double &scalanie, double &szybkie, double&kopcowanie, double &introspektywne){
  clock_t start, stop;
  double roznica;
  int i;
  typ t1[dlugosc];

  for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
  
  start=clock(); // mierzymy czas dzialania sortowania przez scalanie
  SortujScalanie<typ>(t1, 0, dlugosc-1);
  stop=clock();
  if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
  roznica=(stop-start)/(double)CLOCKS_PER_SEC;
  scalanie=scalanie+roznica;

   for(i=0; i<dlugosc; i++)
    t1[i]=tablica[i];
   
   start=clock(); // mierzymy czas dzialania sortowania przez scalanie
   SortujSzybkie<typ>(t1, 0, dlugosc-1);
   stop=clock();
   // if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
   roznica=(stop-start)/(double)CLOCKS_PER_SEC;
   szybkie=szybkie+roznica;
   
   for(i=0; i<dlugosc; i++)
     t1[i]=tablica[i];
   
   start=clock(); // mierzymy czas dzialania sortowania przez scalanie
   SortujKopcowanie<typ>(t1, dlugosc);
   stop=clock();
   //if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
   roznica=(stop-start)/(double)CLOCKS_PER_SEC;
   kopcowanie=kopcowanie+roznica;
   
   for(i=0; i<dlugosc; i++)
     t1[i]=tablica[i];
   
   start=clock(); // mierzymy czas dzialania sortowania przez scalanie
   SortujIntrospektywne<typ>(t1, dlugosc);
   stop=clock();
   // if(!SprawdzSortowanie(t1, dlugosc)){cout<<"ERROR!"; return;}
   roznica=(stop-start)/(double)CLOCKS_PER_SEC;
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


template <class typ>
void LosowaTablica(typ tablica[], const int rozmiar){
  int i;
  int indeks1, indeks2;
  typ pomoc;

  for(i=0; i<rozmiar; i++) // uzupelniamy tablice od 0 do rozmiar-1
    tablica[i]=i;

  srand(time(NULL)); //generator pseudolosowy

  for(i=0; i<rozmiar; i++){ // troche mieszan
    indeks1=rand()%rozmiar; //losujemy dwa indeksy
    indeks2=rand()%rozmiar;
    pomoc=tablica[indeks1];
    tablica[indeks1]=tablica[indeks2]; //zamieniamy
    tablica[indeks2]=pomoc;
  }

  //Wyswietl(tablica, rozmiar);
}

template<class typ>
void OdwrotnaTablica(typ tablica[], const int rozmiar){
  int i;
  for(i=0; i<rozmiar; i++)
    tablica[i]=rozmiar-i;
  //Wyswietl(tablica, rozmiar);
}


template<class typ>
void Tablica(typ tablica[], const int rozmiar, double procent){
  int i;
  int indeks;
  int indeks1, indeks2;
  typ pomoc;
  
  for(i=0; i<rozmiar; i++)
    tablica[i]=i;

  procent=procent/100;
  
  indeks=(rozmiar*procent);
  
  srand(time(NULL)); //generator pseudolosowy
  
  for(i=0; i<rozmiar; i++){ // troche mieszan
    indeks1=rand()%rozmiar; //losujemy dwa indeksy
    indeks2=rand()%rozmiar;
    if(indeks1>indeks && indeks2>indeks){
      pomoc=tablica[indeks1];
      tablica[indeks1]=tablica[indeks2]; //zamieniamy
      tablica[indeks2]=pomoc;
    }
  }
  //Wyswietl(tablica, rozmiar);  
}


template<class typ>
void PosortowanaTablica(typ tablica[], const int rozmiar){
  int i;
  for (i=0; i<rozmiar; i++)
    tablica[i]=i;

  //Wyswietl(tablica, rozmiar);
}


