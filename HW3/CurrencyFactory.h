//
// Created by Jingwen Li on 2/17/23.
//

#ifndef HW3_CURRENCYFACTORY_H
#define HW3_CURRENCYFACTORY_H
#include "Currency.h"
#include <map>
#include <memory>

class CurrencyFactory {
public:
    Currency* GetCurrency(const std::string& currencySymbol);

private:
    std::map<std::string,std::shared_ptr<Currency>> currencies_;
};
#endif //HW3_CURRENCYFACTORY_H
