#include <iostream>
#include <fstream>
#include "stockData.h"

using namespace std;

int main() {
    // Q1
    stockData FB = stockData("FB");
    //FB.printStockByYear(2020);

    // Q2
    //stockData stock;
    cout << "stocks 10 years average ordered by P/E: " << endl;
   //for (int i = 0 ; i < size ; i++) {
       FB.compareByPriceToEarnings();
   // }
    cout << endl;

    // Q3
    FB.exportDataToCSV();
}
