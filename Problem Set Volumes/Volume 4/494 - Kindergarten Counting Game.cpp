#include<cstdio>
#include<cstring>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int word, flag;
	char str[1500];
	while (gets(str))
	{
		word = flag = 0;
		for (int i = 0; str[i]; i++)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
				flag = 1;
			else {
				word += flag;
				flag = 0;
			}
		}
		word += flag;
		cout << word << endl;
	}
	return 0;
}
