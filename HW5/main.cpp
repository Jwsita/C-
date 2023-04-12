#include "MCPricer.h"
#include "EuropeanCall.h"
#include "EuropeanPut.h"
#include <cmath>
using namespace std;
#include <iostream>

int main() {
    srand(time(0));
    EuropeanCall c(100, 2);
    EuropeanPut p(100,2);

    cout << "MC Call Price (10000): " << MCPricer::Price(c, 100, 0.3, 0.01, 10000) << endl;
    cout << "MC Call Price (100000): " << MCPricer::Price(c, 100, 0.3, 0.01, 100000) << endl;
    cout << "MC Call Price (1000000): " << MCPricer::Price(c, 100, 0.3, 0.01, 1000000) << endl;
    cout << "MC Put Price (10000): " << MCPricer::Price(p, 100, 0.3, 0.01, 10000) << endl;
    cout << "MC Put Price (100000): " << MCPricer::Price(p, 100, 0.3, 0.01, 100000) << endl;
    cout << "MC Put Price (1000000): " << MCPricer::Price(p, 100, 0.3, 0.01, 1000000) << endl;
    return 0;
}
