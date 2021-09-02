#include<cstring>
#include<iostream>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i < 7; i++)
using namespace std;

int main()
{
	string Month[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
	string Day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		short int days = 30, temp = 0, holiday = 0;
		string month_name, day_name;
		cin >> month_name >> day_name;
		if (month_name == "FEB")
			days = 28;
		else if (month_name == "JAN" || month_name == "MAR" || month_name == "MAY" || month_name == "JUL" || month_name == "AUG" || month_name == "OCT" || month_name == "DEC")
			days = 31;
		FOR(i, 7){
			if (Day[i] == day_name){
				temp = i;
				break;
			}
		}
		for (; days>0; days--){
			if (Day[temp] == "SAT" || Day[temp] == "FRI")
				holiday++;
			if (temp == 6)
				temp = 0;
			else
				temp++;
		}
		cout << holiday << endl;
	}
	return 0;
}
