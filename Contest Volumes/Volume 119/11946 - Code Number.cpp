#include<stdio.h>
#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
#define FOR(i,len) for(int i = 0; i < len; i++)
using namespace std;

int main()
{
	char Code_number[] = { 'O','I','Z','E','A','S','G','T','B','P' };
	int test_case, p = 0;
	string message;
	cin >> test_case;
	while (test_case--)
	{
		int j = 0;
		if (p == 0) {
			cin.ignore();
			p++;
		}
		while (getline(cin, message)) {
			if (message.size() == 0)
				break;
			FOR(i, message.size())
			{
				if (isdigit(message.at(i)))
				{
					message.at(i) = Code_number[message.at(i) - '0'];
				}
			}
			cout << message << endl;
		}
		if (!test_case)
			cout << "";
		else
			cout << "\n";
	}
	return 0;
}
