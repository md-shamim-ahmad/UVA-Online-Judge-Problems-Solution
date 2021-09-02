#include<sstream>
#include<cstring>
#include<iostream>
#define FOR(i,len) for(int i = 0; i < len; i++)
using namespace std;
void reverse(string);

int main()
{
	string str;
	char s[1000];
	while (getline(cin,str))
	{
		bool ans = false;
		int j = 0;
		if (str == "DONE")
			break;
		FOR(i, str.size())
		{
			if (isalpha(str.at(i)))
			{
				s[j] = tolower(str.at(i));
				j++;
			}
		}
		s[j] = '\0';
		reverse(s);
	}
	return 0;
}

void reverse(string str)
{
	int j = 0;
	char str1[1000];
	for (int i = str.size() - 1; i >= 0; i--, j++)
		str1[j] = str[i];
	str1[j] = '\0';
	if (str == str1)
		cout << "You won't be eaten!" << endl;
	else
		cout << "Uh oh.." << endl;
}
