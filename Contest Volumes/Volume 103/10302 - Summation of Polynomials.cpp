#include<cmath>
#include<iostream>
using namespace std;
typedef unsigned long long ull;
int main()
{
	int num;
	while (cin >> num)
	{
		ull sum = 0;
		for (ull i = 1; i <= num; i++)
			sum = sum + (i * i * i);
		cout << sum << endl;
	}
	return 0;
}
