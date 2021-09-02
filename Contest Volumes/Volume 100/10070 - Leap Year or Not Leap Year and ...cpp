#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define FOR(i, len) for(int i = 0; i < len; i++)
#define br "\n"
using namespace std;

int main()
{
	string str;
	int p = 0;
	while (cin >> str)
	{
		int test4, test15, test55, test100, test400;
		int huluculu = 0, bulukulu = 0, leap = 0, len;
		if (p > 0)
			cout << br;
		p++;
		test4 = test15 = test55 = test100 = test400 = 0;
		len = str.size();
		FOR(i, len)
		{
			test4 = (test4 * 10 + (str[i] - '0')) % 4;
			test15 = (test15 * 10 + (str[i] - '0')) % 15;
			test55 = (test55 * 10 + (str[i] - '0')) % 55;
			test100 = (test100 * 10 + (str[i] - '0')) % 100;
			test400 = (test400 * 10 + (str[i] - '0')) % 400;
		}

		if (test4 == 0)
		{
			if (test100 == 0)
			{
				if (test400 == 0) {
					cout << "This is leap year." << br;
					leap = 1;
				}
			}
			else {
				cout << "This is leap year." << br;
				leap = 1;
			}
		}

		if (test15 == 0) {
			cout << "This is huluculu festival year." << br;
			huluculu = 1;
		}

		if (leap == 1 && test55 == 0) {
			cout << "This is bulukulu festival year." << br;
			bulukulu = 1;
		}

		if (leap == 0 && huluculu == 0 && bulukulu == 0)
			cout << "This is an ordinary year." << br;
	}
	return 0;
}
