/**
 * @file Buss.h
 * @brief Buss headers
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __BUSS_H
#define __BUSS_H

#include "Rute.h"

class Buss : public Rute{
private:
int antSitteplasser; // faste antall sitteplasser
int antStaaPlasser; // faste antall ståplasser
bool leddbuss; // om bussen er ledd buss eller ei

public:
};

#endif