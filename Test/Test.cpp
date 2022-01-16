#include <iostream>
using namespace std;

int main()
{

	double record, distance, timePerMeter;
	cin >> record >> distance >> timePerMeter;
	double timeNeeded = distance * timePerMeter;
	int wasteTimes = distance / 15;
	double timeWasted = wasteTimes * 12.5;
	double totalTime = timeNeeded + timeWasted;
	double difference = record - totalTime;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (record > totalTime) {
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;

	}
	else {
		cout << "No, he failed! He was " << abs(difference) << " seconds slower." << endl;
	}
}
