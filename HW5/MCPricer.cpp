//
// Created by Jingwen Li on 3/3/23.
//

#include "MCPricer.h"
#include "Option.h"


double MCPricer::Price(const Option& Option, double S0, double v, double r, unsigned long paths){
    const double T = Option.getTimeToMaturity();
    double payoff_sum = 0;
    for (unsigned int i=0; i<paths; ++i){
        double z = BoxMuller();
        double ST = S0 * exp((r-v*v/2.0)*T + v*z*sqrt(T));
        double payoff = Option.getPayoff(ST);
        payoff_sum += payoff;
    }
    double price = exp(-r*T) * payoff_sum / static_cast<double>(paths);
    return price;
}
