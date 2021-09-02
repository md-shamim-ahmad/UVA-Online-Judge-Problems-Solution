#include<iostream>
using namespace std;
typedef long long ll;
int main() 
{
	ll tes_case;
	cin >> tes_case;

	ll fibonacci[50];
	fibonacci[0] = 1; fibonacci[1] = 2;
	for (int i = 2; i <= 38; i++)
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];

	while (tes_case--) {
		ll num;
		cin >> num;
		bool ans = false;
		cout << num << " = ";
		for (int i = 38; i >=0; i--) {
			if (num / fibonacci[i] == 1) {
				ans = true;
				num %= fibonacci[i];
				cout << 1;
			}
			else if(ans)
				cout << 0;
		}
		cout << " (fib)" << endl;
	}
	return 0;
}
