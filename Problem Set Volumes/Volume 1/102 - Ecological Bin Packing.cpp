#include<cstdio>
#include<cstring>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long  l;

int main()
{
	l A[3], B[3], C[3],bin[6];
	string ans;
	memset(bin, 0, sizeof(bin));
	while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&A[0],&B[0],&C[0],&A[1],&B[1],&C[1],&A[2],&B[2],&C[2])==9)
	{
		bin[0] = A[1] + A[2] + B[0] + B[1] + C[0] + C[2]; //BCG
		bin[1] = A[1] + A[2] + B[0] + B[2] + C[0] + C[1]; //BGC
		bin[2] = A[0] + A[2] + B[0] + B[1] + C[1] + C[2]; //CBG
		bin[3] = A[0] + A[1] + B[0] + B[2] + C[1] + C[2]; //CGB
		bin[4] = A[0] + A[2] + B[1] + B[2] + C[0] + C[1]; //GBC
		bin[5] = A[0] + A[1] + B[1] + B[2] + C[0] + C[2]; //GCB

		l minimum = bin[0];
		for (l i = 1; i < 6; i++)
			if (bin[i] < minimum)
				minimum = bin[i];

		for (l i = 0; i < 6; i++)
			if (bin[i] == minimum)
			{
				if (i == 0)
					ans = "BCG";
				else if (i == 1)
					ans = "BGC";
				else if (i == 2)
					ans = "CBG";
				else if (i == 3)
					ans = "CGB";
				else if (i == 4)
					ans = "GBC";
				else if (i == 5)
					ans = "GCB";
				break;
			}
		std::cout << ans << " " << minimum << std::endl;
	}
	return 0;
}
