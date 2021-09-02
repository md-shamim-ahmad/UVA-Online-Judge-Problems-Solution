#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
#define mset(Arr) memset(Arr,0,sizeof(Arr))
#define FOR(i,len) for(i = 0; i < len; i++)
void calculation(string, string);

int main()
{
	int test_case;
	while (cin >> test_case)
	{
		string str1, str2;
		while (test_case--)
		{
			cin >> str1 >> str2;
			calculation(str1, str2);
			cout << endl;
		}
	}
	return 0;
}
void calculation(string str1, string str2)
{
	ll Arr[204], len, i = 0, j;
	mset(Arr);
	FOR(i, str1.size())
	{
		Arr[i] += str1.at(i) - '0';
	}
	FOR(i, str2.size())
	{
		Arr[i] += str2.at(i) - '0';
	}
	len = str1.size() > str2.size() ? str1.size() : str2.size();
	for (j = 0; j <= len + 1; j++)
	{
		Arr[j + 1] += Arr[j] / 10;
		Arr[j] %= 10;
	}
	for(j = len + 1; j >= 0; j--)
		if(Arr[j])
			break;
	if(j < 0)
		j++;
	i = 0;
	while(Arr[i] == 0) 
		i++;
	while(i <= j)
			cout << Arr[i++];
}
