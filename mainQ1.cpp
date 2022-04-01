#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q1
    stockData stock = stockData(argv[0]);
    stock.printStockByYear(2020);
}
