﻿#include <iostream>

using namespace std;

int main()
{
    int moneyForTrenningYear;
    cin >> moneyForTrenningYear;

    double cast = (double)moneyForTrenningYear * 40 / 100.0;

    double snickersPrice = moneyForTrenningYear - cast;
    double dressingPrice = snickersPrice - (snickersPrice * 20 / 100.0);
    double ballPrice = dressingPrice * 0.25;
    double accessoriesPrice = ballPrice * 0.20;

    double allMoneyNeeded = moneyForTrenningYear + snickersPrice + dressingPrice + ballPrice + accessoriesPrice;

    cout << allMoneyNeeded << endl;
}