#include<iostream>
#include<iomanip>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef double db;

int main() {

	int hour, minutes;
	while (scanf("%d:%d", &hour, &minutes)) {
		if (hour == 0 && minutes == 0)
			break;
		if (minutes == 0) {
			int angle = abs(hour - 12) * 30;
			if (angle > 180)
				cout << abs(360 - angle) << ".000" << endl;
			else
				cout << angle << ".000" << endl;
		}
		else {
			db angle;
			angle = (hour * 30 + ((db)minutes / 60) * 30) - (minutes * 6);
			if (angle < 0)
				angle *= (-1);
			if (angle > 180)
				cout << fixed << setprecision(3) << (360 - angle) << endl;
			else
				cout << fixed << setprecision(3) << angle << endl;
		}
	}
	return 0;
}
