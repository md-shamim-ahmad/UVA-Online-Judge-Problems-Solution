#include <iostream>
using namespace std;

int main()
{
	int sum, flag, v;
	for (int i = 1; i <= 1000000; i++)
	{
		flag = 0;
		for (int j = i - 60; j <= i; j++)
		{
			v = j; 
      sum = 0;
			while (v != 0)
			{
				sum = sum + v % 10;
				v = v / 10;
			}
			if ((sum + j) == i)
			{
				flag = 1;
				break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 0)
			cout << i << endl;
	}
	return 0;
}
