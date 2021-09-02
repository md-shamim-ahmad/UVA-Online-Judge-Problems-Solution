#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

bool ans (string& s) {
	if(next_permutation(s.begin(), s.end()))
		return true;
	else 
		return false;
}

int main()
{
	string str;
	
	while (cin >> str && str !="#") {
		if (ans(str))
			cout << str << endl;
		else
			cout << "No Successor" << endl;
	}
	return 0;
}
