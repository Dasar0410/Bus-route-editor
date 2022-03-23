#include <iostream>
#include "stoppesteder.h"
#include "ruter.h"
#include "funksjoner.h"
#include "LesData3.h"
using namespace std;


Stoppesteder gStoppestederBase;
Ruter gRuterBase;

//  extern Stoppesteder gStoppestederBase;
//  extern Ruter gRuterBase;


int main()  {
  char valg;

  gStoppestederBase.lesFraFil();
  gRuterBase.lesFraFil();

  skrivMeny();
  valg = lesChar("\nKommando");

  while (valg != 'Q')  {
    switch(valg)  {
      case 'S':  gStoppestederBase.handling();  break;
      case 'R':  gRuterBase.handling();         break;
      default:   skrivMeny();                   break;
    }
    valg = lesChar("\nKommando");
  }

  gStoppestederBase.skrivTilFil();
  gRuterBase.skrivTilFil();

  cout << "\n\n";
  return 0;
}