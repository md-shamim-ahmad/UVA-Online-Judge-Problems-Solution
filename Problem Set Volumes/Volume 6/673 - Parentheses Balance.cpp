#include<stack>
#include<cstring>
#include<sstream>
#include<iostream>
#define FOR(i,length) for(int i=0; i < length; i++)
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	cin.ignore();
	while (test_case--)
	{
		string parentheses;
		getline(cin, parentheses);
		stack<char>str;
		FOR(i,parentheses.size())
		{
			if (!str.empty() && parentheses[i] == ')' && str.top() == '(')
				str.pop();
			else if (!str.empty() && parentheses[i] == ']' && str.top() == '[')
				str.pop();
			else
				str.push(parentheses[i]);
		}
		if (str.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
