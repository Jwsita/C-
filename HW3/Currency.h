//
// Created by Jingwen Li on 2/17/23.
//

#ifndef HW3_CURRENCY_H
#define HW3_CURRENCY_H

#include <string>

class Currency {
public:
    Currency(const std::string& symbol, double rate);
    double ConvertToUSD(double amount, const Currency& symbol) const;
    double ConvertFromUSD(double amount, const Currency& symbol) const;
    double getRate() const;
    std::string getSymbol() const;


private:
    std::string symbol_;
    double rate_;
};

#endif //HW3_CURRENCY_H
