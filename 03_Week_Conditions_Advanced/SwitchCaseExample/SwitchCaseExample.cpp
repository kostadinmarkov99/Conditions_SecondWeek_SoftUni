#include <iostream>
#include <string>

using namespace std;

int main()
{
	int stayDays;

	string room, mark;
	double price = 0;
	cin >> stayDays;
	int nights = stayDays - 1;

	getline(cin >> ws, room);
	getline(cin, mark);


	if (room == "room for one person")
	{
		price = nights * 18.0;
	}
	else if (room == "apartment")
	{
		price = nights * 25.0;

		if (nights < 10)
		{
			price -= price * 0.3;
		}
		else if (nights >= 10 && nights <= 15)
		{
			price -= price * 0.35;
		}
		else if (nights > 15)
		{
			price -= price * 0.5;
		}
	}
	else if (room == "president apartment")
	{
		price = nights * 35.0;

		if (nights < 10)
		{
			price -= price * 0.1;
		}
		else if (nights >= 10 && nights <= 15)
		{
			price -= price * 0.15;
		}
		else if (nights > 15)
		{
			price -= price * 0.2;
		}
	}

	if (mark == "positive")
	{
		price += price * 0.25;
	}
	else if (mark == "negative")
	{
		price -= price * 0.1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << price << endl;

	return 0;
}