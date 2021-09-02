#include<iostream>
using namespace std;
typedef long long ll;
inline ll number(ll);

int main()
{
	ll num;
	while (cin >> num) {
		if (num < 1)
			break;
		cout << 6 * (number(num)) - 9 << endl;
	}
	return 0;
}
inline ll number(ll num) {
	num = (num + 1) / 2;
	ll total = num * num;
	return total;
}
