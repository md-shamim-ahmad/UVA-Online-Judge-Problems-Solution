#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool change(char ch1, char ch2) {
	if (tolower(ch1) == tolower(ch2))
		return ch1 < ch2;
	return tolower(ch1) < tolower(ch2);
}
int main() 
{
	int test_case;
	cin >> test_case;
	while (test_case--) {
		string str;
		cin >> str;
		sort(str.begin(), str.end(), change);
		cout << str << endl;
		int len = str.size();
		while (next_permutation(str.begin(), str.end(), change))
			cout << str << endl;
	}
	return 0;
}
