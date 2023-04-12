//
// Created by Jingwen Li on 3/3/23.
//

#include "EuropeanPut.h"

double EuropeanPut::getPayoff(double ST) const {
    if (K_ > ST){
        return K_ - ST;
    } else{
       return 0;
    }
}

double EuropeanPut::getPrice(double S0, double r, double v) {
    return (K_ * exp(-r * T_) * cdf(-d2(S0, r, v)) - S0 * cdf(-d1(S0, r, v)));
}

double EuropeanPut::getDelta(double S0, double r, double v) {
    return cdf(d1(S0, r, v)) - 1;
}

double EuropeanPut::getGamma(double S0, double r, double v) {
    return pdf(d1(S0, r, v))/(S0 * v * sqrt(T_));
}
