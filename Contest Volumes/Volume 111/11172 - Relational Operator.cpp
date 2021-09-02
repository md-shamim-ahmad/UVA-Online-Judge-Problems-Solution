#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		ll num1, num2;
		cin >> num1 >> num2;
		if (num1 < num2)
			cout << "<\n";
		else if (num1 > num2)
			cout << ">\n";
		else if (num1 == num2)
			cout << "=\n";
	}
	return 0;
}
