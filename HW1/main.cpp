#include "CurrencyConverter.h"

#include <iostream>
using  namespace  std;

int main()
{
    float base_rate;
    float foreign_rate;
    float amount;
    int base_currency;
    int foreign_currency;
    bool restart = true;

    while (restart){
    cout << "Enter base currency (USD = 0, CAD = 1, GBP = 2, EUR = 3, CNY = 4, AUD = 5, MXN = 6): ";
    cin >> base_currency;
    base_rate = GetRate(base_currency);
    cout << "Enter foreign currency (USD = 0, CAD = 1, GBP = 2, EUR = 3, CNY = 4, AUD = 5, MXN = 6): ";
    cin >> foreign_currency;
    foreign_rate = GetRate(foreign_currency);
    cout << "Enter amount of base currency to be converted ";
    cin >> amount;

    float amount_converted = amount*foreign_rate/base_rate;

    cout << "foreign currency amount: " << amount_converted <<endl;
    cout << "Do you want to convert another currency (Yes = 1, No = 0)? ";

    bool ans;
    cin >> ans;
    if (ans){
        restart = true;}
    else
    {
        restart = false;
    }
    }
    return 0;
}
// Created by Jingwen Li on 1/21/23.
//
