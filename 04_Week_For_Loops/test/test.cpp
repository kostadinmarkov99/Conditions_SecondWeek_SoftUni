#include <iostream>
using namespace std;

int main()
{
	int groupCount;
	int count = 0;
	cin >> groupCount;
	int temp;

	int Ever = 0;
	int Musa = 0;
	int Monb = 0;
	int Kili = 0;
	int K2 = 0;

	for (int i = 1; i <= groupCount; i++) {
		cin >> temp;

		count += temp;

		if (temp <= 5) { Musa += temp; }
		else if (temp >= 6 && temp <= 12) { Monb += temp; }
		else if (temp >= 13 && temp <= 25) { Kili += temp; }
		else if (temp >= 26 && temp <= 40) { K2 += temp; }
		else if (temp >= 41) { Ever += temp; }
	}

	double musaPerc = (double)Musa / count * 100;
	double monbPerc = (double)Monb / count * 100;
	double kiliPerc = (double)Kili / count * 100;
	double   k2Perc = (double)K2 / count * 100;
	double everPerc = (double)Ever / count * 100;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << musaPerc << "%" << endl;
	cout << monbPerc << "%" << endl;
	cout << kiliPerc << "%" << endl;
	cout << k2Perc << "%" << endl;
	cout << everPerc << "%" << endl;

	return 0;
}