#include <iostream>
#include <cstdlib>
#include <cmath>
#include "sortowanie.hh"

using namespace std;

template<typename typ>
void Wyswietl(typ tablica[], int ilosc){
  int i;
  for(i=0; i<ilosc; i++)
    cout<<tablica[i]<<", ";
  cout<<endl;
}

//*********************************************************************************************************
//*******************SORTOWANIE PRZEZ SCALANIE*************************************************************
template <typename typ>
void SortujScalanie(typ tablica[], const int poczatek,const int koniec){
  int srodek;
  
  if(poczatek!=koniec){ // jesli tablica ma wiecej niz 1 element
    srodek=(poczatek+koniec)/2; //ustalamy miejsce podzialu tablicy
    SortujScalanie(tablica, poczatek, srodek); //sortujemy lewa czesc
    SortujScalanie(tablica, srodek+1, koniec); //sortujemy prawa
    Scal<typ>(tablica, poczatek, srodek, koniec); // i scalamy tablice
  } //koniec if
}
template <typename typ>
void Scal(typ tablica[],const int poczatek,const int srodek,const int koniec){
  typ pomocnicza[koniec-poczatek+1]; // pomocnicza tablica odpowiedniej dlugosci
  int i;
  int lewy=poczatek; // indeks w lewej podtablicy
  int prawy=srodek+1; // indeks w prawej podtablicy
  int obecny=poczatek; //indeks gdzie wpisywac do tablicy wynikowej

  for (i=0; i<=(koniec-poczatek); i++)
    pomocnicza[i]=tablica[poczatek+i];//przepisujemy wartosci z tablicy

  while(lewy<=srodek && prawy<=koniec){ // dopoki nie skoncza sie elementy jednej z podtablic
    if(pomocnicza[lewy-poczatek] <= pomocnicza[prawy-poczatek]){
      tablica[obecny]=pomocnicza[lewy-poczatek];
      lewy++; //zwiekszamy indeks z lewej
    }
    else{
      tablica[obecny]=pomocnicza[prawy-poczatek];
      prawy++; // zwiekszamy indeks z prawej
  }
  obecny++; // zwiekszamy indeks mowiacy gdzie wpisywac do tablicy wynikowej
  }//koniec while

  //gdy wykorzystalismy wszystkie z drugiej podtablicy
  while(lewy <= srodek){
    tablica[obecny]=pomocnicza[lewy-poczatek];
    obecny++;
    lewy++;
  }

  //gdy wykorzystalismy wszystkie z pierwszewj podtablicy, druga musi byc ustawiona ok ;)
  //wiec wszystko powinno juz byc wpisane dobrze do odpowiedniej tablicy
}


//*********************************************************************************************************
//*******************SORTOWANIE QUICKSORT******************************************************************
template <typename typ>
int WybierzPorownanie(typ tablica[], int lewy, int prawy){
  return (prawy+lewy)/2;
}

template <typename typ>
void SortujSzybkie(typ tablica[], int lewy, int prawy){
  int indeks; // indeks elementu, z ktorym bedziemy porownywac dzielac tablice
  int osiowy = lewy-1; // indeks granicy, aktualnie stoi przed pierwszym elementem
  int licznik = lewy; // pomoc w przemieszczaniu sie po tablicy
  typ pomocniczy; // zmienna potrzebna do realizacji zamian
  typ porownanie; // wartosc, z ktora porownujemy

  if (prawy<=lewy) return;
  
  //ustawiamy porownnaie na koniec tablicy
  indeks = WybierzPorownanie(tablica, lewy, prawy);
  porownanie=tablica[indeks];
  pomocniczy=tablica[prawy];
  tablica[prawy]=tablica[indeks];
  tablica[indeks]=pomocniczy;

 
    while(licznik < prawy){ // dopoki nie dojdziemy do konca tablicy
      if(tablica[licznik] < porownanie){
	if(osiowy+1 != licznik){ // zeby nie zamieniac z samym soba ;)
	  pomocniczy=tablica[osiowy+1];
	  tablica[osiowy+1]=tablica[licznik];
	  tablica[licznik]=pomocniczy;
	}
	osiowy++; //przesuwamy granice
      }// if
      licznik++;
    }// koniec while


    // ustawiamy porownanie na odpowiedniej pozycji
    if(osiowy+1 != prawy){ // zeby nie zamieniac z samym soba ;)
      pomocniczy=tablica[osiowy+1];
      tablica[osiowy+1]=tablica[prawy];
      tablica[prawy]=pomocniczy;
    }
    osiowy++; //przesuwamy granice

      SortujSzybkie(tablica, lewy, osiowy-1); // i rekurencyjnie sortujemy podtablice
      SortujSzybkie(tablica, osiowy+1, prawy);
 
}

//*************************************************************************************
//***************************SORTOWANIE PRZEZ KOPCOWANIE********************************
template<typename typ>
void SortujKopcowanie(typ tablica[], int dlugosc){
  int ostrodzic=dlugosc/2-1;
  int i;
  typ pomocniczy;

  for(i=ostrodzic; i>=0; i--) // od ost rodzica do korzenia
    MaxKopiec(tablica, dlugosc, i);

  for(i=dlugosc-1; i>0; i--){
    pomocniczy=tablica[0];
    tablica[0]=tablica[i];
    tablica[i]=pomocniczy;
    dlugosc--;
    MaxKopiec(tablica, dlugosc, 0);
  }
}
template<typename typ>
void MaxKopiec(typ tablica[], int rozmiar, int indeks_rodzica){
  int maxindeks=indeks_rodzica;
  int lewy=indeks_rodzica*2+1;
  int prawy=indeks_rodzica*2+2;
  typ pomocniczy;

  if(lewy<rozmiar && tablica[lewy]>tablica[maxindeks])
    maxindeks=lewy;

  if(prawy<rozmiar && tablica[prawy]>tablica[maxindeks])
    maxindeks=prawy;

  if(maxindeks!=indeks_rodzica){
    pomocniczy=tablica[maxindeks];
    tablica[maxindeks]=tablica[indeks_rodzica];
    tablica[indeks_rodzica]=pomocniczy;
    MaxKopiec(tablica, rozmiar, maxindeks);
  }
}


//*****************************************************************************************
//*************SORTOWNAIE PRZEZ WSTAWNIANIE**************************************************
template <typename typ>
void SortujWstawianie(typ tablica[], int dlugosc){
  int i, j;
  typ pomocniczy;

  for(i=1; i<dlugosc; i++){
    pomocniczy=tablica[i];
    for(j=i; j>0 && pomocniczy<tablica[j-1]; j--)
      tablica[j]=tablica[j-1];
    tablica[j]=pomocniczy;
  }
}

//**********************************************************************************************
//********************SORTOWANIE INTROSPEKTYWNE************************************************
template<typename typ>
void SortujIntrospektywne(typ tablica[], int dlugosc){
  int max=(int)floor(2*log(dlugosc)/log(2));
  SortujIntro(tablica, dlugosc, max);
  SortujWstawianie(tablica, dlugosc+1);
}


template<typename typ>
void SortujIntro(typ tablica[], int dlugosc, int max){
  int i;

  if(max<=0){
      SortujKopcowanie(tablica, dlugosc+1);
    return;
  }
  
  i=Podziel(tablica,0,dlugosc-1);
   
  if(i>9){
     SortujIntro(tablica, i, max-1);
  }
    
  if( dlugosc-1-i>9){
     SortujIntro(tablica+i+1, dlugosc-1-i, max-1);
  }
}


template<typename typ>
int Podziel(typ tablica[], int lewy, int prawy){
  typ pomocniczy;
  int licznik=lewy;
  typ porownanie=tablica[prawy];
  int osiowy=lewy-1;
  
  while(licznik < prawy){ // dopoki nie dojdziemy do konca tablicy
    if(tablica[licznik] < porownanie){
      if(osiowy+1 != licznik){ // zeby nie zamieniac z samym soba ;)
	pomocniczy=tablica[osiowy+1];
	tablica[osiowy+1]=tablica[licznik];
	tablica[licznik]=pomocniczy;
      }
      osiowy++; //przesuwamy granice
    }// if
    licznik++;
  }// koniec while


  // ustawiamy porownanie na odpowiedniej pozycji
  if(osiowy+1 != prawy){ // zeby nie zamieniac z samym soba ;)
    pomocniczy=tablica[osiowy+1];
    tablica[osiowy+1]=tablica[prawy];
    tablica[prawy]=pomocniczy;
  }
  //osiowy++; //przesuwamy granice
  return osiowy;
}
