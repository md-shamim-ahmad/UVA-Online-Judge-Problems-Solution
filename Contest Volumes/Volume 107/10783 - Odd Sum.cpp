#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef long l;

int main()
{
	ll test_case;
	while (cin >> test_case)
	{
		ll A, B, sum = 0, p = 0;
		while (test_case--)
		{
			cin >> A >> B;
			ll MIN = min(A, B);
			ll MAX = max(A, B);
			for (l i = MIN; i <= MAX; i++)
			{
				if (i % 2 != 0)
					sum += i;
			}
			cout << "Case " << ++p << ": " << sum << endl;
            sum = 0;
		}
	}
	return 0;
}
