#include<cmath>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long double  ld;

int main()
{
	ld Median1, Median2, Median3;
	while (cin >> Median1 >> Median2 >> Median3)
	{
		ld A = 2 * ((pow(Median1, 2) * pow(Median2, 2)) + (pow(Median1, 2) * pow(Median3, 2)) + (pow(Median3, 2) * pow(Median2, 2)));
		ld B = (pow(Median1, 4) + pow(Median2, 4) + pow(Median3, 4));
		if (Median1 == 0 && Median2 == 0 && Median3 == 0)
			cout << "-1.000" << endl;
		else if (A > B)
			cout << fixed << setprecision(3) << (ld)sqrt(A - B) / 3 << endl;
		else
			cout << "-1.000" << endl;
	}
	return 0;
}
