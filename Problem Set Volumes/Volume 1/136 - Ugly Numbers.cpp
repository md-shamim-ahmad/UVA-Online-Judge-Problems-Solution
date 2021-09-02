#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t2 = 0, t3 = 0, t5 = 0, tmp;
	int DP[1500] = { 1 };
	for (int i = 1; i < 1500; i++) {
		while (DP[t2] * 2 <= DP[i - 1])
			t2++;
		while (DP[t3] * 3 <= DP[i - 1])
			t3++;
		while (DP[t5] * 5 <= DP[i - 1])
			t5++;
		tmp = DP[t2] * 2;
		if (DP[t3] * 3 < tmp)
			tmp = DP[t3] * 3;
		if (DP[t5] * 5 < tmp)
			tmp = DP[t5] * 5;
		DP[i] = tmp;
	}
	cout << "The 1500'th ugly number is " << DP[1499] << "." << endl;
	return 0;
}
