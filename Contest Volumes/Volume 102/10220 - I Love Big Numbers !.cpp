#include<vector>
#include<iostream>
#define FOR(i,num) for(int i = 0; i <= num; i++)
#define FROM(i,num) for (int i = num; i >= 0; i--)
using namespace std;
int main()
{
	int fact[10000], num, counter, temp, i, test_case;
	while (cin >> num) {
		int m = num, sum = 0;
		fact[0] = 1;
		counter = 0;
		temp = 0;
		for (; num >= 2; num--)
		{
			FOR(i, counter)
			{
				temp = (fact[i] * num) + temp;
				fact[i] = temp % 10;
				temp = temp / 10;
			}
			while (temp > 0) {
				fact[++counter] = temp % 10;
				temp = temp / 10;
			}
		}
		FROM(i, counter) {
			sum += fact[i];
		}
		cout << sum << endl;
	}
	return 0;
}
