//
// Created by Jingwen Li on 2/17/23.
//

#include "Currency.h"

Currency::Currency(const std::string& symbol, double rate)
        :symbol_(symbol),rate_(rate)
{
}

double Currency::ConvertFromUSD(double amount, const Currency &symbol) const {
    return amount * rate_;
}

double Currency::ConvertToUSD(double amount, const Currency &symbol) const {
    return amount / rate_;
}
double Currency::getRate() const{
    return rate_;
}
std::string Currency::getSymbol() const {
    return symbol_;
}

