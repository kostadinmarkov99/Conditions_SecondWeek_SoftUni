#include <iostream>

using namespace std;

int main()
{
    int penBags, markerBags, detergentInLiters, discountPercentage;

    cin >> penBags >> markerBags >> detergentInLiters >> discountPercentage;

    double penBagsPrice = penBags * 5.80;
    double markerBagsPrice = markerBags * 7.20;
    double detergentInLitersPrice = detergentInLiters * 1.20;

    double materialsPrice = penBagsPrice + markerBagsPrice + detergentInLitersPrice;

    double bill = materialsPrice - (materialsPrice * (discountPercentage / 100.0));

    cout << bill << endl;
}