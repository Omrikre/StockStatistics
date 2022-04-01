#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q2
    cout << "stocks 10 years average ordered by P/E: " << endl;
    for (int i = 0 ; i < argc ; i++) {
        stockData stock = stockData(argv[i]);
        stock.compareByPriceToEarnings();
    }
    cout << endl;
}
