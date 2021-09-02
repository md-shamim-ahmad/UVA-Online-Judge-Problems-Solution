#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str)) {
		for(int i = 0; i < str.size(); i++) {
			if(str.at(i) >= 'A' && str.at(i) <= 'C')
				cout << 2;
			else if(str.at(i) >= 'D' && str.at(i) <= 'F')
				cout << 3;
			else if(str.at(i) >= 'G' && str.at(i) <= 'I')
				cout << 4;
			else if(str.at(i) >= 'J' && str.at(i) <= 'L')
				cout << 5;
			else if(str.at(i) >= 'M' && str.at(i) <= 'O')
				cout << 6;
			else if(str.at(i) >= 'P' && str.at(i) <= 'S')
				cout << 7;
			else if(str.at(i) >= 'T' && str.at(i) <= 'V')
				cout << 8;
			else if(str.at(i) >= 'W' && str.at(i) <= 'Z')
				cout << 9;
			else
				cout << str.at(i);
		}
		cout << endl;
	}
	return 0;
}
