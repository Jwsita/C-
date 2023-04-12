#include "Currency.h"
#include "CurrencyFactory.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

//Changes made:
//1. added a CurrencyFactory to create currency
//2. used map to store the currency pointer
//3. used smart pointer to point to the currency
//4. used error handling to handle when currency symbol not found
//5. used cerr to output error message
//6. used auto to define currency variables

int main() {
    bool quit = false;

    while (!quit) {
        CurrencyFactory factory;
        cout << "**** Currency Converter ****" << endl;
        cout << "Testing Convert To USD Function... " << endl;
        cout << endl << "Enter Currency to Convert to USD (USD, CNY, MXN, AUD, GBP, EUR, CHF): " ;
        string basecurrency;
        cin >> basecurrency;
        auto baseCurrency = factory.GetCurrency(basecurrency);

        cout << "Getting Currency Info..." << endl;
        cout << baseCurrency->getSymbol() << " Exchange Rate: " << baseCurrency->getRate() << endl;

        cout << endl << "Amount you want to convert: ";
        double baseamt = 0;
        cin >> baseamt;

        cout << baseamt << baseCurrency->getSymbol() << "=" << baseCurrency->ConvertToUSD(baseamt, *baseCurrency) << "USD" << endl;

        cout << endl << "Testing Convert From USD Function... " << endl;
        cout << endl << "Enter Currency to Convert from USD (USD, CNY, MXN, AUD, GBP, EUR, CHF): ";
        string foreigncurrency;
        cin >> foreigncurrency;
        auto foreignCurrency = factory.GetCurrency(foreigncurrency);

        cout << "Getting Currency Info...";
        cout << foreignCurrency->getSymbol() << " Exchange Rate: " << foreignCurrency->getRate() << endl;

        cout << endl << "Amount you want to convert: ";
        double amt = 0;
        cin >> amt;

        cout << amt << "USD"<< " = " << foreignCurrency->ConvertFromUSD(baseamt, *foreignCurrency) << foreignCurrency->getSymbol() << endl;

        cout << "Do you want to quit? (y/n): ";
        char quit_char;
        cin >> quit_char;
        if (quit_char == 'y') {
            quit = true;
        }
    }
}