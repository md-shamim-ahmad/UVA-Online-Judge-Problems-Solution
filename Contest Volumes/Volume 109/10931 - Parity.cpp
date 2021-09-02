#include<vector>
#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	ll num;
	while (cin >> num && num != 0)
	{
		vector<int>Bin;
		ll cnt = 0;
		while (num > 0)
		{
			int rem;
			rem = num % 2;
			Bin.push_back(rem);
			num /= 2;

		}
		cout << "The parity of ";
		for (int i = Bin.size() - 1; i >= 0; i--) {
			cout << Bin[i];
			if (Bin[i] == 1)
				cnt++;
		}
		cout << " is " << cnt << " (mod 2)." << endl;
		Bin.clear();
	}
	return 0;
}
