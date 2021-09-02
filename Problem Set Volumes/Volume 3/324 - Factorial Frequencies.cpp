#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> Vct;
typedef map<int, int> MAP;

int main()
{
	int num;
	while (cin >> num) {
		cout << num << "! --" << endl;
		int fact[5000];	fact[0] = 1;
		int cnt = 0, temp = 0, p = 0;
		for (; num > 1; num--) {
			for (int i = 0; i <= cnt; i++) {
				temp = (fact[i] * num) + temp;
				fact[i] = temp % 10;
				temp /= 10;
			}
			while (temp > 0) {
				fact[++cnt] = temp % 10;
				temp /= 10;
			}
		}
		MAP digits;
		map<int, int>::iterator it;
		for (int i = cnt; i >= 0; i--) {
			digits[fact[i]]++;
		}
		for (int i = 0; i <= 9; i++) {
			if (i == 5)
				cout << endl;
			bool Ans = false;
			for (it = digits.begin(); it != digits.end(); it++) {
				if (i == it->first) {
					cout << "   " << "(" << it->first << ")   " << it->second;
					Ans = false;
					break;
				}
				else {
					Ans = true;					
				}
			}
			if (Ans) {
				cout << "   " << "(" << i << ")   " << 0;
			}
		}			
		cout << endl;
	}
	return 0;
}
