#include<iostream>
using namespace std;
typedef double d;
typedef long long ll;

int main()
{
	 int month_duration, records;
	d  down_payment, loan, month_long[101];
	while (true)
	{
		cin >> month_duration >> down_payment >> loan >> records;
		if (month_duration < 0)
			break;
		int month;
		d percentage;
		while (records--)
		{
			cin >> month >> percentage;
			for (int i = month; i < 101; i++)
				month_long[i] = percentage;
		}
		int s = 0;
		d current_loan = loan;
		d monthly_payment = loan / month_duration;
		d current_value = (loan + down_payment) * (1 - month_long[0]);
		while (current_value<current_loan)
		{
			s++;
			current_loan -= monthly_payment;
			current_value *= (1 - month_long[s]);
		}
		cout << s << " " << "month";
		if (s != 1)
			cout << "s";
		cout << endl;
	}
	return 0;
}
