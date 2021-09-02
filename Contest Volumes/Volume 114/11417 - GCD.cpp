#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int GCD(ll, ll);

int main()
{
	int num;
	while (cin >> num)
	{
		if (num == 0)
			break;
		ll G = 0;
		for (int i = 1; i < num; i++)
			for (int j = i + 1; j <= num; j++)
				G += GCD(i, j);
		cout << G << endl;
	}
	return 0;
}
inline int GCD(ll A, ll B)
{
	if (B != 0)
		return GCD(B, A % B);
	else
		return A;
}
