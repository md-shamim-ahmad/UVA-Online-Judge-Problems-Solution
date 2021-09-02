#include<cstring>
#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
	string num;
	while(cin >> num){
		if(num == "0")
			break;
		ll sum = 0, rem = 0;
		for (int i = 0; i < num.size(); i++)
        {
           sum = (rem * 10) + (num[i] - '0');
           rem = sum % 17;
        }
        cout << (rem > 0 ? "0" : "1" )<< endl;
	}
	return 0;
}
