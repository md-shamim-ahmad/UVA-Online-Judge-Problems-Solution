#include<iostream>
using namespace std;
int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		int N, M;
		cin >> N >> M;
		if ((M - N) == 0) {
			cout << 0 << endl;
			continue;
		}
			int different = M - N;
			int ans = 0, sum = 0, d = 2;
			while (different > sum) {				
				sum += (d / 2);
				ans++;
				d++;
			}
			cout << ans << endl;
	}
	return 0;
}
