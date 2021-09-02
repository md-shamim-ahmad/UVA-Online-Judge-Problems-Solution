#include<iostream>
typedef long long ll;

int main()
{
	int temp;
	std::cin >> temp;
	while (temp--)
	{
		int d = 0;
		ll sum = 0, l, num;
		std::cin >> num;
		do
		{
			l = num;
			sum = 0;
			while (num)
			{
				int rev = num % 10;
				sum = sum * 10 + rev;
				num /= 10;
			}
			d++;
			num = l + sum;
		} while (l != sum);
		std::cout << --d << " " << sum << std::endl;
	}
	std::cin.get();
}
