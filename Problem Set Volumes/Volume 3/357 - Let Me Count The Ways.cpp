#include <iostream>
using namespace std;

int main() {
	long long DP[30001] = {};
	int m[] = { 1, 5, 10, 25, 50 }, i, j;
	DP[0] = 1;
	for (i = 0; i < 5; i++) {
		for (j = m[i]; j <= 30000; j++) {
			DP[j] += DP[j - m[i]];
		}
	}
	while (cin>>i) {
		if (DP[i] != 1)
			cout << "There are " << DP[i] << " ways to produce " << i << " cents change." << endl;
		else
			cout << "There is only 1 way to produce " << i << " cents change.\n";
	}
	return 0;
}
