#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int num1, num2;
	while (scanf("%d %d", &num1, &num2) == 2)
	{
		int mx = 0;
		int x = max(num1, num2);
		int y = min(num1, num2);
		for (int i = y; i <= x; i++)
		{
			int num = i, cnt = 1;
			while (num > 1)
			{
				if (num % 2)
					num = 3 * num + 1;
				else
					num /= 2;
				cnt++;
			}
			if (cnt >= mx)
				mx = cnt;
		}
		cout << num1 << " " << num2 << " " << mx << endl;
	}
	return 0;
}
