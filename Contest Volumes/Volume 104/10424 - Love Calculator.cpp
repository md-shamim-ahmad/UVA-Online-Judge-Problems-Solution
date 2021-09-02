#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<sstream>
#include<iomanip>
#include<cstdio>
using namespace std;
typedef long long ll;
inline int A(string);

int main()
{
	string str1, str2;
	while (getline(cin, str1)) {
		str1[str1.size() + 1] = '\0';
		getline(cin, str2);
		str2[str2.size() + 1] = '\0';
		int a = A(str1);
		int b = A(str2);
		if (a > b) {
			cout << fixed << setprecision(2) << (b * 100 / (double)a) << " %" << endl;
		}
		else {
			cout << fixed << setprecision(2) << (a * 100 / (double)b) << " %" << endl;
		}
	}
	return 0;
}

inline int A(string s) {
	ll sum = 0;
	for (int i = 0; i < s.size(); i++) {
		char ch = tolower(s.at(i));
		if (isalpha(ch))
			sum += ch - 'a' + 1;
	}
	while (sum > 9) {
		int temp = 0;
		while (sum != 0) {
			temp += sum % 10;
			sum /= 10;
		}
		sum = temp;
	}
	return sum;
}
