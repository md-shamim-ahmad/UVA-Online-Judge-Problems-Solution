#include <iostream>
#include <iomanip>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef map<int, int> MAP;
typedef map<int, int>::iterator Iterator;

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		int num;
		cin >> num;
		MAP digits;
		for (int i = 1; i <= num; i++) {
			int n = i;
			while (n != 0) {
				int rem = n % 10;
				digits[rem]++;
				n /= 10;
			}
		}
		Iterator it;
		for (int i = 0; i <= 9; i++) {
			bool ans = false;
			for (it = digits.begin(); it != digits.end(); it++){
				if (i == it->first){
					cout << it->second;
					if(i == 0 || i && i != 9)
						cout << " ";
					ans = false;
					break;
				}
				else
					ans = true;						
			}
			if (ans) {
				cout << 0;
				if (i == 0 || i && i != 9)
					cout << " ";
			}			
		}		
		cout << endl;
	}
	return 0;
}
