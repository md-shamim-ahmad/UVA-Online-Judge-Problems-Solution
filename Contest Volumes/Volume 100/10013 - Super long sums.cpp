#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		int size;
		cin >> size;
		vector<int>sum;
		while (size--) {
			int N, M;
			cin >> N >> M;
			sum.push_back(N + M);
		}

		for (int i = sum.size() - 1; i >= 1; i--) {
			if (sum[i] > 9) {
				sum[i - 1] += sum[i] / 10;
				sum[i] %= 10;
			}
		}

		cout << sum[0];
		for (int i = 1; i < sum.size(); i++)
			cout << sum[i];
		cout << endl;
		if (test_case)
			cout << endl;
	}
	return 0;
}
