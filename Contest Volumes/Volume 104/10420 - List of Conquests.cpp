#include<map>
#include<sstream>
#include<cstring>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
	int lines;
	map<string, int>documment;
	cin >> lines;
	while (lines--)
	{
		string country_name, others;
		cin >> country_name;
		documment[country_name]++;
		getline(cin, others);
	}
		for (map<string, int>::iterator it = documment.begin(); it != documment.end(); it++)
			cout << it->first << " " << it->second << endl;
	return 0;
}
