#include <iostream>
#include "Currency.h"
#include "Converter.h"
using namespace std;

int main() {
    bool quit = false;

    while (!quit) {
        cout << "Enter the currency that you want to convert from - (USD = 0, CAD = 1,  GBP = 2, EUR = 3, CNY = 4, AUD = 5, MXN = 6)";
        int basecurrency=0;
        cin >> basecurrency;

        cout << "Enter the currency that you want to convert to - (USD = 0, CAD = 1,  GBP = 2, EUR = 3, CNY = 4, AUD = 5, MXN = 6)";
        int foreigncurrency=0;
        cin >> foreigncurrency;

        cout << endl << "Amount you want to convert: ";
        double baseamt = 0;
        cin >> baseamt;

        double usdAmount = ConvertToUSD(static_cast<CurrencyType>(basecurrency), baseamt);
        double foreignAmount = ConvertFromUSD(static_cast<CurrencyType>(foreigncurrency), usdAmount);

        if (basecurrency == foreigncurrency) {
            cout << "Amount of Foreign Currency: " << baseamt << endl;
        } else {
            cout << "Amount of Foreign Currency: " << foreignAmount << endl;
        }
        cout << endl;


        cout << "Do you want to quit? (y/n): ";
        char quit_char;
        cin >> quit_char;
        if (quit_char == 'y') {
            quit = true;
        }
    }
}
//