//
// Created by Jingwen Li on 3/3/23.
//
#include "BoxMuller.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

double BoxMuller(){
    double x = static_cast<double>(rand())/RAND_MAX;
    double y = static_cast<double>(rand())/RAND_MAX;
    double z = sqrt(-2.0*log(x)) * cos(2*M_PI*y);
    return z;
}


