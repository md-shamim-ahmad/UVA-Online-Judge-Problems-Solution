#include<iostream>
using namespace std;

int main()
{
	int num, p = 0;
	while (cin >> num)
	{
		int cnt = 0;
		if (num <= 0)
			break;
		for (int i = 1; i < num; i*=2)
			cnt++;
		cout << "Case " << ++p << ": " << cnt << endl;
	}
	return 0;
}
