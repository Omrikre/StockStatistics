#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q3
    if (argc < 2) {
        cout << "go to README!" << endl <<
             "need to get stocks names" << endl <<
             "for example: FB IBM" << endl << endl;
        exit(1);
    }
    for (int i = 1; i < argc; i++) {
        stockData stock = stockData(argv[i]);
        stock.exportDataToCSV();
    }
}
