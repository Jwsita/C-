//
// Created by Jingwen Li on 2/17/23.
//

#include "CurrencyFactory.h"
#include <vector>
#include <iostream>
using namespace std;

Currency* CurrencyFactory::GetCurrency(const std::string &currencySymbol) {
    auto iter = currencies_.find(currencySymbol);
    if (iter != currencies_.end()) {
        return iter->second.get();
    }
    if (currencySymbol == "USD") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("USD", 1.0);
    }
    else if (currencySymbol == "CNY") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("CNY", 6.44);
    }
    else if (currencySymbol == "MXN") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("MXN", 19.90);
    }
    else if (currencySymbol == "AUD") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("AUD", 1.31);
    }
    else if (currencySymbol == "GBP") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("GBP", 0.73);
    }
    else if (currencySymbol == "EUR") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("EUR", 0.83);
    }
    else if (currencySymbol == "CHF") {
        cout << "Constructor Initialized" << endl;
        currencies_[currencySymbol] = make_shared<Currency>("CHF", 0.89);
    }
    else{
        cerr << "Error: Currency symbol not found in map." << endl;
    }
    return currencies_[currencySymbol].get();
}




