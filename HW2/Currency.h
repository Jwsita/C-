#ifndef CURRENCY_H
#define CURRENCY_H

#include <string>
using std::string;

class Currency
{
public:
    Currency();
    Currency(string symbol, double rate);

    ~Currency();


    string GetSymbol();
    double GetExchangeRate();
    void SetExchangeRate(double rate);
    double ConvertFromUSD(double value);
    double ConvertToUSD(double value);

private:
    string symbol_;
    double exchange_rate_;

};

#endif