#include<iostream>
using namespace std;

int main()
{
	int dial, A, B, C, D;
	while (cin >> dial >> A >> B >> C)
	{
		if (dial == 0 && A == 0 && B == 0 && C == 0)
			break;
		int clock = 1080;
		if (A > dial)
			clock += (40 - A + dial)*9;
		else
			clock += (dial - A)*9;
		if (A > B)
			clock += (40 + B - A)*9;
		else
			clock += (B - A)*9;
		if (C > B)
			clock += (40 - C + B)*9;
		else
			clock += (B - C)*9;
		cout << clock << endl;
	}
	return 0;
}
