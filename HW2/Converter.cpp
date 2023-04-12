#include "Converter.h"
#include "Currency.h"

double ConvertFromUSD(CurrencyType currencytype, double amount)
{
    double rate = 1.0;
    double foreignamount = 0.0;
    switch (currencytype)
    {
        case USD:
        {
            Currency usd("USD", 1.0);
            foreignamount = usd.ConvertFromUSD(amount);
            break;
        }
        case CAD:
        {
            Currency cad("EUR", 1.32);
            foreignamount = cad.ConvertFromUSD(amount);
            break;
        }
        case GBP:
        {
            Currency gbp("GBP", 0.81);
            foreignamount = gbp.ConvertFromUSD(amount);
            break;
        }
        case EUR:
        {
            Currency eur("EUR", 0.89);
            foreignamount = eur.ConvertFromUSD(amount);
            break;
        }
        case CNY:
        {
            Currency cny("CNY", 6.78);
            foreignamount = cny.ConvertFromUSD(amount);
            break;
        }
        case AUD:
        {
            Currency aud("AUD", 1.42);
            foreignamount = aud.ConvertFromUSD(amount);
            break;
        }
        case MXN:
        {
            Currency mxn("MXN", 110.0);
            foreignamount = mxn.ConvertFromUSD(amount);
            break;
        }
        default:
            break;
    }
    return foreignamount;
}

double ConvertToUSD(CurrencyType currencytype, double amount)
{
    double rate = 1.0;
    double foreignamount = 0.0;
    switch (currencytype)
    {
        case USD:
        {
            Currency usd("USD", 1.0);
            foreignamount = usd.ConvertToUSD(amount);
            break;
        }
        case CAD:
        {
            Currency cad("EUR", 1.32);
            foreignamount = cad.ConvertToUSD(amount);
            break;
        }
        case GBP:
        {
            Currency gbp("GBP", 0.81);
            foreignamount = gbp.ConvertToUSD(amount);
            break;
        }
        case EUR:
        {
            Currency eur("EUR", 0.89);
            foreignamount = eur.ConvertToUSD(amount);
            break;
        }
        case CNY:
        {
            Currency cny("CNY", 6.78);
            foreignamount = cny.ConvertToUSD(amount);
            break;
        }
        case AUD:
        {
            Currency aud("AUD", 1.42);
            foreignamount = aud.ConvertToUSD(amount);
            break;
        }
        case MXN:
        {
            Currency mxn("MXN", 110.0);
            foreignamount = mxn.ConvertToUSD(amount);
            break;
        }
        default:
            break;
    }
    return foreignamount;
}