#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		ll G, L;
		cin >> G >> L;
		if (L % G  == 0)
			cout << G << " " << L << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
