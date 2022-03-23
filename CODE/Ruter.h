/**
 * @file Ruter.h
 * @brief Ruter deklarasjoner
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef __Ruter_H
#define __Ruter_H
#include "Rute.h"
#include <map>

class Ruter{
private:
    map <int, Rute*> gRuter; // map med alle unikt nummererte Rute’r

public:
void lesTilFil();
void lesFraFil();
};


#endif