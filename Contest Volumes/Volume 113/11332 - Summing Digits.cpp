#include<iostream>
using namespace std;
typedef long long ll;
inline int sum_of_digit(ll);

int main()
{
	ll num;
	while (cin >> num && num != 0)
	{
		cout << sum_of_digit(num) << endl;
	}
	return 0;
}
inline int sum_of_digit(ll num)
{
	int sum = 0;
	if (num <= 9)
		return num;
	while (num != 0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum_of_digit(sum);
}
