#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q3
    for (int i = 0; i < argc; i++) {
        stockData stock = stockData(argv[i]);
        stock.exportDataToCSV();
    }
}
