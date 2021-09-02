#include<iostream>
#include<algorithm>
using namespace std;
inline int rev(int n) {
	int s = 0;
	while (n != 0) {
		s *= 10;
		s += n % 10;
		n /= 10;
	}
	return s;
}
int main()
{
	int num;
	while (cin >> num) {
		bool prime = false;
		if (num == 1) {
			cout << num << " is not prime." << endl;
			continue;
		}
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				prime = true;
				break;
			}
		}
		if (!prime) {
			if (num <= 9) {
				cout << num << " is prime." << endl;
				continue;
			}
		}
		if (!prime) {
			bool ans = false;
			int n = rev(num);
			if (n == num) {
				cout << num << " is prime." << endl;
				continue;
			}
			for (int i = 2; i <= n / 2; i++) {
				if (n % i == 0) {
					ans = true;
					break;
				}
			}
			if (ans)
				cout << num << " is prime." << endl;
			else
				cout << num << " is emirp." << endl;
		}
		else
			cout << num << " is not prime." << endl;
	}
	return 0;
}
