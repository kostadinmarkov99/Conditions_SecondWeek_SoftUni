#include <iostream>

using namespace std;

int main()
{
    int length, width, height;
    double percetage;

    cin >> length >> width >> height >> percetage;

    double volumeInSM = length * width * height;
    double liters = volumeInSM / 1000;

    double unusedLiters = liters * percetage / 100.0;
    double usedLiters = liters - unusedLiters;

    cout << usedLiters << endl;

}