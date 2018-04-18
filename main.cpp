#include <iostream>
#include <cstdlib>
#include <cmath>
#include "sortowanie.cpp"
#include "testy.cpp"
#define ILOSC 10000000


int main(){
  int* tablica=new int [ILOSC];
  int i;
  int ilosc_testow=100; 
  double scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  
  cout<<"LOSOWA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    LosowaTablica<int>(tablica, ILOSC);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }
  /*
  for(i=0; i<ilosc_testow; i++){
    LosowaTablica<int>(tablica, ILOSC);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    LosowaTablica<int>(tablica, ILOSC);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    LosowaTablica<int>(tablica, ILOSC);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
  */
    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
/*
  cout<<"ODWROTNA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    OdwrotnaTablica<int>(tablica, ILOSC);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    OdwrotnaTablica<int>(tablica, ILOSC);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){

    OdwrotnaTablica<int>(tablica, ILOSC);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    OdwrotnaTablica<int>(tablica, ILOSC);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  
  cout<<"25% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC, 25);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,25);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,25);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,25);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
      cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;

  
  cout<<"50% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,50);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,50);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,50);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,50);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
  
    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  
  cout<<"75% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC, 75);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,75);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,75);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,75);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  
  cout<<"95% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,95);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,95);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,95);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,95);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
  
  cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
  scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  cout<<"99% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
  

    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
  scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  cout<<"99,7% POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99.7);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99.7);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99.7);
    TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    Tablica<int>(tablica, ILOSC,99.7);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
    cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;

  scalanie=0, szybkie=0, kopcowanie=0, introspektywne=0;
  cout<<"POSORTOWANA"<<endl;
  for(i=0; i<ilosc_testow; i++){
    PosortowanaTablica<int>(tablica, ILOSC);
    TestujScalanie<int>(tablica, ILOSC, scalanie);
  }

  for(i=0; i<ilosc_testow; i++){
    PosortowanaTablica<int>(tablica, ILOSC);
    TestujSzybkie<int>(tablica, ILOSC, szybkie);
  }
  for(i=0; i<ilosc_testow; i++){
  PosortowanaTablica<int>(tablica, ILOSC);
  TestujKopcowanie<int>(tablica, ILOSC, kopcowanie);
  }
  for(i=0; i<ilosc_testow; i++){
    PosortowanaTablica<int>(tablica, ILOSC);
    TestujIntrospektywne<int>(tablica, ILOSC, introspektywne);
  }
  
  
  cout.setf(ios::fixed); //ustawuany dokladnosc
  cout<<"SORTOWANIE "<<ILOSC<<" ELEMENTOW"<<endl;
  cout<<"SCALANIE: "<<scalanie<<endl;

  cout<<"SZYBKIE: "<<szybkie<<endl;
  cout<<"KOPCOWANIE: "<<kopcowanie<<endl;
  cout<<"INTROSPEKTYWNE: "<<introspektywne<<endl;
*/
  delete [] tablica;
  return 1;
}
