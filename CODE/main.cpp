#include <iostream>
#include "Stoppesteder.h"
#include "Ruter.h"
#include "Funksjoner.h"
#include "LesData3.h"
using namespace std;


Stoppesteder gStoppestederBase;
Ruter gRuterBase;

extern Stoppesteder gStoppestederBase;
extern Ruter gRuterBase;


int main()  {
  char valg;
  cout << "bruh";

  gStoppestederBase.lesFraFil();
  gRuterBase.lesFraFil();

  void skrivMeny();
  valg = lesChar("\nKommando");

  while (valg != 'Q')  {
    switch(valg)  {
      case 'S':  //gStoppestederBase.handling();  break;
      case 'R':  //gRuterBase.handling();         break;
      default:   skrivMeny();                   break;
    }
    valg = lesChar("\nKommando");
  }

  gStoppestederBase.skrivTilFil();
  gRuterBase.skrivTilFil();
  cout << "\n\n";
  return 0;
}