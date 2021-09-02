#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int relatives;
		cin >> relatives;
		vector<int> Arr;
		
		for(int i = 0; i < relatives; i++) {
			int value;
			cin >> value;
			Arr.push_back(value);		
		}
		
		sort(Arr.begin(), Arr.end());
		int len = Arr.size();
		len /= 2;		
		int middel_number = Arr[len];
		int ans = 0;
		for(int i = 0; i < Arr.size(); i++) {
			ans += abs(middel_number - Arr[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
