//
// Created by Jingwen Li on 3/3/23.
//

#include "EuropeanCall.h"
#include <cmath>
#include <iostream>

using namespace std;

double EuropeanCall::getPayoff(double ST) const {
    if (ST > K_){
        return ST - K_;
    } else{
        return 0;
    }
}

double EuropeanCall::getPrice(double S0, double r, double v) {
    return S0 * cdf(d1(S0, r, v)) - K_ * exp(-r * T_) * cdf(d2(S0, r, v));
}

double EuropeanCall::getDelta(double S0, double r, double v) {
    return cdf(d1(S0, r, v));
}

double EuropeanCall::getGamma(double S0, double r, double v) {
    return pdf(d1(S0, r, v))/(S0 * v * sqrt(T_));
}
