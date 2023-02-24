#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, p;
	while (cin >> p >> s) {		
		int n = s.size(), m = p.size();
		int j = 0;
		for (int i = 0; i < n && j < m; i++) {
			if (s[i] == p[j]) j++;				
		}
		if (j == m)
			cout << "Yes\n";
		else 
			cout << "No\n";
	}
	return 0;
}