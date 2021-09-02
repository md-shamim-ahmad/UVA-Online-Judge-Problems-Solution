#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ll N, K;
	while (cin >> N >> K) {
		cout << (N + (N - 1) / (K - 1)) << endl;
	}
	return 0;
}
