#include<iostream>
#define FOR(i,num) for(int i = 0; i < num; i++)
using namespace std;

int main()
{
	int num, p = 1;
	while (cin >> num && num != 0)
	{
		int cnt = 0;
		FOR(i, num)
		{
			int n;
			cin >> n;
			if (n == 0)
				cnt--;
			else
				cnt++;
		}
		cout << "Case " << p++ << ": " << cnt << endl;
	}
	return 0;
}
