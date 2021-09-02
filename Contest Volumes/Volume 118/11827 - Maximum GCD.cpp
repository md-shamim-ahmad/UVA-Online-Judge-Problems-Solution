#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
inline int GCD(int, int);

int main()
{
	int test_case, p = 0;
	char str[3000];
	cin >> test_case;

	while (test_case--) {
		if (p == 0) {
			cin.get();
			p++;
		}
		gets(str);
		int Arr[3000], j = 0;

		for (int i = 0; i < strlen(str); i++){
			int sum = 0;
			while (str[i] != ' ') {
				sum *= 10;
				sum += str[i] - '0';
				i++;
				if (i == strlen(str))
					break;
			}
			Arr[j++] = sum;
		}
		
		int gcd = 0;
		for (int i = 0; i < j; i++) {
			for (int k = i+1; k < j; k++) {
				gcd = max(gcd, GCD(Arr[i], Arr[k]));
			}
		}
		cout << gcd << endl;
	}
	return 0;
}

inline int GCD(int A, int B){
	if (B == 0)
		return A;
	else
		return GCD(B, A % B);
}
