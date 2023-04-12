#include "Currency.h"
#include <iostream>
using std::string;

Currency::Currency(): symbol_(""), exchange_rate_(0.0)
{
}

Currency::Currency(string symbol, double rate): symbol_(symbol), exchange_rate_(rate)
{
}

Currency::~Currency()
{
}

string Currency::GetSymbol()
{
    return symbol_;
}

double Currency::GetExchangeRate()
{
    return exchange_rate_;
}

void Currency::SetExchangeRate(double exchange_rate)
{
    exchange_rate_ = exchange_rate;
}

double Currency::ConvertFromUSD(double amount)
{
    return amount * exchange_rate_;
}

double Currency::ConvertToUSD(double amount)
{
    return amount/exchange_rate_;
}