#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case, cnt = 0;
	while (cin >> test_case)
	{
		string str;
		while (test_case--)
		{
			cin >> str;
			if (str.size() == 3)
			{
				if (str.at(0) == 'o')
					cnt++;
			    if (str.at(1) == 'n')
					cnt++;
				if (str.at(2) == 'e')
					cnt++;
				if (cnt >= 2)
					cout << 1 << endl;
				else
					cout << 2 << endl;
			}
			else if (str.size() == 5)
				cout << 3 << endl;
            cnt = 0;
		}
	}
    return 0;
}
