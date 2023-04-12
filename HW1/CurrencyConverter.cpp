float GetRate(int currencyType)
{
    float rate = 1.0;
    switch (currencyType)
    {
        case 1:
        rate = 1.34;
        break;

        case 2:
        rate = 0.74;
        break;

        case 3:
        rate = 0.9;
        break;

        case 4:
        rate = 6.78;
        break;

        case 5:
        rate = 1.44;
        break;

        case 6:
        rate = 18.92;
        break;

        default:
        rate = 1.0;
        break;
    }

    return rate;
}//
// Created by Jingwen Li on 1/21/23.
//
