#include<iostream>
using  namespace std;
typedef long long ll;
inline ll fact(ll);

int main()
{
	int num;
	while (cin >> num)
	{
		if (num < 0)
		{
			if (num % 2 != 0)
				cout << "Overflow!" << endl;
			else
				cout << "Underflow!" << endl;
		}
		else if (num > 13)
			cout << "Overflow!" << endl;
		else if (fact(num) < 10000)
			cout << "Underflow!" << endl;
		else
			cout << fact(num) << endl;
	}
}
inline ll fact(ll num)
{
	if (num == 0)
		return 1;
	else
		return (num * fact(num - 1));
}
