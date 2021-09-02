#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <cstring>
#include <algorithm>
using namespace std;
typedef double db;
typedef vector<int> vct;
typedef map<char, db> MAP;

int main()
{
	int test_case;	
	cin >> test_case;
	MAP cnt;
	while (test_case--) {
		int n;
		cin >> n;
		while (n--) {
			char str;
			int value;
			cin >> str >> value;
			cnt[str] = value;
		}
		int m;
		db sum = 0;
		cin >> m;
		cin.ignore();
		while (m--) {
			string str;
			getline(cin, str);
			for (int i = 0; i < str.size(); i++) {
				sum += cnt[str[i]];
			}
		}
		cout << fixed << setprecision(2) << sum / 100 << "$" << endl;
		cnt.clear();		
	}
	return 0;
}
