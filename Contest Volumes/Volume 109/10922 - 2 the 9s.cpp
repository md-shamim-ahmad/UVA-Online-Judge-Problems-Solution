#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	string str;
	while(cin >> str) {
		bool ans = true;
		int cnt = 1;
		if(str == "0")
			break;
		int sum = 0;
		for(int i = 0; i < str.size(); i++) {
			int value;
			value = str.at(i) - '0';
			sum += value;
		}
		if(sum % 9 != 0)
			ans = false; 
		else 
			ans = true;
			
		while(sum > 9){
			ll s = 0;
			while(sum != 0){
				s += (sum % 10);
				sum /= 10;
			}
			sum = s;
			cnt++;
		}
		if(ans)
			cout << str << " is a multiple of 9 and has 9-degree " << cnt << "." << endl;
		else
			cout << str << " is not a multiple of 9." << endl;
	}
	return 0;
}
