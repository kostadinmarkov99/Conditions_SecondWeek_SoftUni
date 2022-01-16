#include <iostream>

using namespace std;

int main()
{
    //•	Декорът за филма е на стойност 10% от бюджета. 
    //•	При повече от 150 статиста, има отстъпка за облеклото на стойност 10 % .

    double movieBudget;
    int statists;
    double dressingPriceForStatist;

    cin >> movieBudget >> statists >> dressingPriceForStatist;

    double decor = movieBudget * 0.1;
    double allStatistsPrice = statists * dressingPriceForStatist;

    if (statists > 150)
    {
        allStatistsPrice -= allStatistsPrice * 0.1;
    }

    double allMoneyForPaying = decor + allStatistsPrice;

    double difference = movieBudget - allMoneyForPaying;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference < 0)
    {
        cout << "Not enough money!\n" << "Wingard needs " << abs(difference) << " leva more." << endl;
    }
    else
    {
        cout << "Action!\n" << "Wingard starts filming with " << difference << " leva left." << endl;
    }
}