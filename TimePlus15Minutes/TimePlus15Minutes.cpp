#include <iostream>

using namespace std;

int main()
{
    int hours, minutes;

    cin >> hours >> minutes;

    minutes += 15;

    if (minutes >= 60)
    {
        minutes -= 60;
        hours++;

        if (hours >= 24)
        {
            hours = 0;
        }

        if (minutes < 10)
        {
            cout << hours << ":0" << minutes;
        }
        else
        {
            cout << hours << ":" << minutes;
        }
    }
    else 
    {
        cout << hours << ":" << minutes;
    }
}