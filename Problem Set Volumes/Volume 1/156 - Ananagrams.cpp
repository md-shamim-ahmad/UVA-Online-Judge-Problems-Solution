#include <cctype>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <map>
using namespace std;
string lower(string ch) {
	for (auto& i : ch)
			i = tolower(i);
	sort(ch.begin(), ch.end());
	return ch;
}
int main() {
	string str;
	set<string> word;
	map<string, int> temp;
	while (cin >> str && str != "#") 
		++temp[lower(str)],
		word.insert(str);
	for (auto& i : word)
		if (temp[lower(i)] == 1) 
			cout << i << '\n';
	return 0;
}
