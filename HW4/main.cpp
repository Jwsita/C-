#include <iostream>
#include "EuropeanCall.h"
#include "EuropeanPut.h"
using namespace std;

int main() {
    EuropeanCall c(100, 1);
    EuropeanPut p(120,2);

    cout << "European Call: S0 = 100, K = 100, T = 1, vol = 0.3, r = 0.05" << endl;
    cout << "Call Price: " << c.getPrice(100, 0.05, 0.3) << endl;
    cout << "Call Delta: " << c.getDelta(100, 0.05, 0.3) << endl;
    cout << "Call Gamma: " << c.getGamma(100, 0.05, 0.3) << endl;

    cout << "European Put: S0 = 120, K = 120, T = 2, vol = 0.4, r = 0.1" << endl;
    cout << "Put Price: " << p.getPrice(120, 0.1, 0.4) << endl;
    cout << "Put Delta: " << p.getDelta(120, 0.1, 0.4) << endl;
    cout << "Put Gamma: " << p.getGamma(120, 0.1, 0.4) << endl;

    return 0;
}
