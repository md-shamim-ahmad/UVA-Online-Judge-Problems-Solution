#include<iostream>
#define ans(count) cout<<count<<endl;
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int count = 1, temp = 1;
		do
		{
			temp = temp * 10 + 1;
			temp %= num;
			count++;
		} while (temp != 0);
		ans (count);
	}
	return 0;
}
