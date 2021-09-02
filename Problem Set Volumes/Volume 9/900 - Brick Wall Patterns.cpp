#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	int num;
	while (cin >> num) {
		if (num == 0)
			break;
		if (num == 1) {
			cout << 1 << endl;
			continue;
		}			
		ll fibonacci[55], i;
		fibonacci[0] = 1; fibonacci[1] = 2;
		for (i = 2; i < num; i++) {
				fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		}
		cout << fibonacci[i - 1] << endl;
	}
}
