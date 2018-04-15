#ifndef SORTOWANIE_HH
#define SORTOWANIE_HH

template<typename typ>
void Wyswietl(typ tablica[], int ilosc);

template <typename typ>
void Scal(typ tablica[], const int poczatek, const int srodek, const int koniec);

template <typename typ>
void SortujScalanie(typ tablica[], const int poczatek,const int koniec);

template <typename typ>
int WybierzPorownanie(typ tablica[], int lewy, int prawy);

template <typename typ>
void SortujSzybkie(typ tablica[], int lewy, int prawy);

template<typename typ>
void SortujKopcowanie(typ tablica[], int dlugosc);

template<typename typ>
void MaxKopiec(typ tablica[], int dlugosc, int indeks_rodzica);

template <typename typ>
void SortujWstawianie(typ tablica[], int dlugosc);

template<typename typ>
void SortujIntro(typ tablica[], int dlugosc, int max);

template<typename typ>
int Podziel(typ tablica[], int lewy, int prawy);
  
template<typename typ>
void SortujIntrospektywne(typ tablica[], int dlugosc);

  
#endif
