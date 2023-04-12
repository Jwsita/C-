//
// Created by Jingwen Li on 3/3/23.
//

#ifndef HW5_MCPRICER_H
#define HW5_MCPRICER_H
#include "Option.h"
#include "BoxMuller.h"

class MCPricer{
public:
    static double Price(const Option& Option, double S0, double v, double r, unsigned long paths);
};


#endif //HW5_MCPRICER_H
