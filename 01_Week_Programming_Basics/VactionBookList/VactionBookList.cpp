#include <iostream>

using namespace std;

int main()
{
    int bookPages;
    int readedPagesForHour;
    int daysNeeded;
    
    cin >> bookPages >> readedPagesForHour >> daysNeeded;

    int hoursNeededForBook = bookPages / readedPagesForHour;
    int horsEveryDay = hoursNeededForBook / daysNeeded;

    cout << horsEveryDay << endl;
}