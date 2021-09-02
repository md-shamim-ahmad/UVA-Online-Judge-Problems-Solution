#include<vector>
#include<iostream>
#define FOR(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main()
{
	int size, p = 0;
	while (cin >> size && size != 0) {
		ll total = 0;
		vector<int>Arr;
		FOR(i, size) {
			int value;
			cin >> value;
			Arr.push_back(value);
			total += value;
		}
		int ans = 0, avg = total / size;
		for (int i = 0; i < Arr.size(); i++) {
			if (avg > Arr[i])
				ans += (avg - Arr[i]);
		}
		cout << "Set #" << ++p << endl;
		cout << "The minimum number of moves is " << ans << "." << endl << endl;
	}
	return 0;
}
