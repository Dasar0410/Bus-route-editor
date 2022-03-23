/**
 * @file Bane.h
 * @brief Bane headers
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __BANE_H
#define __BANE_H

#include "Rute.h"
#include <string>

class Bane: public Rute{
    private:
    int antVogner; // faste antall vogner som går på vedkommende banestrekning
    int vognLengde; // faste lengden (i meter) på dette banesettet
    public:
};

#endif