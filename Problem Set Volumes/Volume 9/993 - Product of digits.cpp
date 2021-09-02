#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--){
		int num;
		cin >> num;
		if(num <= 9){
			cout << num << endl;
			continue;
		}
		
		vector<int>Arr;
		for(int i = 9; i > 1; i--){
			while(num % i == 0){
				num /= i;
				Arr.push_back(i);
			}
		}
		
		if(num != 1){
			cout << -1 << endl;
			continue;
		}
		for(int i = Arr.size() - 1; i >= 0; i--)
			cout << Arr[i];
		cout << endl;
	}
	return 0;
}
