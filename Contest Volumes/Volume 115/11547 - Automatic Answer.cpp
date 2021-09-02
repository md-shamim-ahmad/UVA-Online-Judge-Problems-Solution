#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		int num;
		cin >> num;
		num = (((num * 63) + 7492) * 5) - 498;
		num /= 10;
		cout << abs(num) % 10 << endl;
	}
	return 0;
}
