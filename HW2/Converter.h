#ifndef CONVERTER_H
#define CONVERTER_H

#include "Currency.h"

enum CurrencyType{
    USD=0,
    CAD,
    GBP,
    EUR,
    CNY,
    AUD,
    MXN
};

double ConvertFromUSD(CurrencyType currencytype, double amount);
double ConvertToUSD(CurrencyType currencytype, double amount);




#endif
