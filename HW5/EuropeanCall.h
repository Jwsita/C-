//
// Created by Jingwen Li on 3/3/23.
//

#ifndef HW5_EUROPEANCALL_H
#define HW5_EUROPEANCALL_H
#include "Option.h"


class EuropeanCall: public Option{
public:
    EuropeanCall(double K, double T):Option(K,T){};
    double getPayoff(double St) const override;
    double getPrice(double S0, double r, double v) override;
    double getDelta(double S0, double r, double v) override;
    double getGamma(double S0, double r, double v) override;
};
#endif //HW5_EUROPEANCALL_H
