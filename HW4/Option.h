//
// Created by Jingwen Li on 2/24/23.
//

#ifndef HW4_OPTION_H
#define HW4_OPTION_H
#include <cmath>

class Option{
public:
    Option(double K, double T);
    virtual double getPrice(double S0, double r, double v) = 0;
    virtual double getDelta(double S0, double r, double v) = 0;
    virtual double getGamma(double S0, double r, double v) = 0;
protected:
    double d1(double S0, double r, double v);
    double d2(double S0, double r, double v);
    double K_;
    double T_;
    static double cdf(double n);
    static double pdf(double n);
};
#endif //HW4_OPTION_H
