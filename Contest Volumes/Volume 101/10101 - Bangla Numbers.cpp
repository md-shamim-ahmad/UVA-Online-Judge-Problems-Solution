#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vct;
#define br cout << endl;
#define FOR(i, len) for (int i = 0; i < len; i++)
int range[4] = {10000000, 100000, 1000, 100};
char translate[4][6] = {"kuti", "lakh", "hajar", "shata"};

void display(ll num) {
	FOR(i, 4) {
		if (num >= range[i]) {
			display(num / range[i]);
			cout << " " << translate[i];
			num %= range[i];
		}
	}
	if (num)
		cout << " " << num;
}
int main()
{
	ll num;
	int p = 0;
	while (cin >> num) {
		cout << setw(4) << ++p << ".";
		if (num == 0) {
			cout << " " << 0;
		}
		display(num);
		br;
	}
	return 0;
}
