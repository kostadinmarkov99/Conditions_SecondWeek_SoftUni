#include <iostream>

using namespace std;

int main()
{
    int number;
    
    double bonusScore = 0;

    cin >> number;

    if (number <= 100)
    {
        bonusScore += 5;
    }
    else if (number > 10 && number <= 1000)
    {
        bonusScore += number * 0.2;
    }
    else
    {
        bonusScore += number * 0.1;
    }

    if (number % 2 == 0)
    {
        bonusScore += 1;
    }
    else if (number % 10 == 5)
    {
        bonusScore += 2;
    }

    double result = number + bonusScore;

    cout << bonusScore << endl;
    cout << result << endl;
}