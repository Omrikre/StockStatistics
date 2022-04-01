#include <iostream>
#include "stockData.h"

using namespace std;

int main(int argc, char **argv) {
    // Q1
    if (argc != 3) {
        cout << "go to README!" << endl <<
        "need to get only stock name and year" << endl <<
        "for example: FB 2016" << endl << endl;
        exit(1);
    }
    stockData stock = stockData(argv[1]);
    stock.printStockByYear(stoi(argv[2]));
}
