#include<vector>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		int size;
		cin >> size;
		int Long_Street[size];
		FOR(i, size)
		{
			cin >> Long_Street[i];
		}
		sort(Long_Street, Long_Street+size);
		cout << abs(Long_Street[0] - Long_Street[size-1])*2 << endl;
	}
	return 0;
}
