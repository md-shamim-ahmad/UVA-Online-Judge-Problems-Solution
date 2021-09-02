#include<vector>
#include<iostream>
#define FOR(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{
	int test_case,p = 0;
	cin >> test_case;
	while (test_case--) {
		int team_members;
		cin >> team_members;
		vector<int>Age;
		FOR(i, team_members)
		{
			int n;
			cin >> n;
			Age.push_back(n);
		}
		cout << "Case " << ++p << ": ";
		cout << Age[((team_members + 1) / 2)-1] << endl;
		Age.clear();
	}
	return 0;
}
