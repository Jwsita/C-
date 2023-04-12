//
// Created by Jingwen Li on 2/24/23.
//

#ifndef HW4_EUROPEANCALL_H
#define HW4_EUROPEANCALL_H
#include "Option.h"


class EuropeanCall: public Option{
public:
    EuropeanCall(double K, double T):Option(K,T){};
    double getPrice(double S0, double r, double v) override;
    double getDelta(double S0, double r, double v) override;
    double getGamma(double S0, double r, double v) override;
};
#endif //HW4_EUROPEANCALL_H
