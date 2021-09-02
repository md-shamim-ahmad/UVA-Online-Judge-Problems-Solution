#include<set>
#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str1, str2;
	while (getline(cin, str1) && getline(cin, str2))
	{
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		int i = 0, j = 0;

		while (i < str1.size() && j < str2.size())
		{
			if (str1[i] == str2[j]) {
				cout << char(str1.at(i));
				  i++;
					j++;
			}
			else {
				if (str1[i] > str2[j])
					j++;
				else
					i++;
			}
		}
		cout << endl;
	}
	return 0;
}
