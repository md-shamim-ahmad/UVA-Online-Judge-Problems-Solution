#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int num;
	ll i = 0, j = 0;
	while(cin >> num && num != 0){
		bool ans = true;
		for(i = 1; i <= num; i++){
			for(j = 1; j <= num; j++){
				if((i*i*i) - (j*j*j) == num){
					ans = true; 
					break;
				}					
				else{
					ans = false;
					continue;
				}									
			}
			if(ans)
				break;
			else
				continue;
		}
		if(ans)
			cout << i << " " << j << endl; 
		else
			cout << "No solution" << endl;
	}
	return 0;
}
