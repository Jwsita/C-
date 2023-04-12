//
// Created by Jingwen Li on 2/24/23.
//

#include "Option.h"
#include <cmath>
using namespace std;


Option::Option(double K, double T):K_(K),T_(T)
{
}

double Option::d1(double S0, double r, double v) {
    return (log(S0 * exp(r*T_)/K_))/(v*sqrt(T_)) + (v*sqrt(T_)/2);
}

double Option::d2(double S0, double r, double v){
    return (log(S0 * exp(r*T_)/K_))/(v*sqrt(T_)) - (v*sqrt(T_)/2);
}

double Option::cdf(double n) {
    return  0.5 * (1 + erf(n/ sqrt(2)));
}

double Option::pdf(double n) {
    return exp(-0.5 * pow(n,2))/sqrt(2 * M_PI);
}

