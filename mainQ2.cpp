#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q2
    if (argc < 2) {
        cout << "go to README!" << endl <<
             "need to get stocks names" << endl <<
             "for example: FB IBM" << endl << endl;
        exit(1);
    }
    cout << "stocks 10 years average P/E: " << endl;
    for (int i = 1 ; i < argc ; i++) {
        stockData stock = stockData(argv[i]);
        stock.compareByPriceToEarnings();
    }
    cout << endl;
}
