#include <iostream>
#include <string>

using namespace std;

int main()
{
    string city;
    double sell;

    cin >> city;
    cin >> sell;
    
    if (sell < 0)
    {
        cout << "error" << endl;

        return 0;
    }

    double commission = 0;

    if (city == "Sofia")
    {
        if (sell >= 0 && sell <= 500)
        {
            commission = 0.05;
        }
        else if (sell > 500 && sell <= 1000)
        {
            commission = 0.07;
        }
        else if (sell > 1000 && sell <= 10000)
        {
            commission = 0.08;
        }
        else if (sell > 10000)
        {
            commission = 0.12;
        }
    }
    else if (city == "Varna")
    {
        if (sell >= 0 && sell <= 500)
        {
            commission = 0.045;
        }
        else if (sell > 500 && sell <= 1000)
        {
            commission = 0.075;
        }
        else if (sell > 1000 && sell <= 10000)
        {
            commission = 0.1;
        }
        else if (sell > 10000)
        {
            commission = 0.13;
        }
    }
    else if (city == "Plovdiv")
    {
        if (sell >= 0 && sell <= 500)
        {
            commission = 0.055;
        }
        else if (sell > 500 && sell <= 1000)
        {
            commission = 0.08;
        }
        else if (sell > 1000 && sell <= 10000)
        {
            commission = 0.12;
        }
        else if (sell > 10000)
        {
            commission = 0.145;
        }
    }
    else
    {
        cout << "error" << endl;

        return 0;
    }

    double commisionResult = sell * commission;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << commisionResult << endl;
}