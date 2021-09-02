#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#define MAX 1000001
using namespace std;

bool temp[MAX];
int prime_of_digit[MAX];
void function();
void digit_prime();

int main()

{
	function();
	digit_prime();
	int test_case, A, B, cnt, z, digit;
	cin >> test_case;
	while (test_case--)
	{
		cin >> A >> B;
		cnt = prime_of_digit[B] - prime_of_digit[A];
		digit = 0;
		z = A;
		while (z)
		{
			digit += z % 10;
			z /= 10;
		}
		if (temp[A] == 0 && temp[digit] == 0)
			cnt++;
		cout << cnt << endl;
	}
	return 0;
}

void function()
{
	int j, add;
	temp[0] = temp[1] = 1;
	for (int i = 4; i < MAX; i += 2)
		temp[i] = 1;
	for (int i = 3; i < MAX; i += 2)
	{
		if (!temp[i])
		{
			if (MAX / i >= i)
			{
				add = i * 2;
				for (j = i * i; j < MAX; j += add)
					temp[j] = 1;
			}
		}
	}
	return;
}

void digit_prime()
{
	memset(prime_of_digit, 0, sizeof(prime_of_digit));
	int j, k, cnt;
	cnt = 0;
	for (int i = 0; i < MAX; i++)
	{
		j = i;
		k = 0;
		while (j)
		{
			k += j % 10;
			j /= 10;
		}
		if (temp[i] == 0 && temp[k] == 0)
			++cnt;
		prime_of_digit[i] = cnt;
	}
	return;
}
