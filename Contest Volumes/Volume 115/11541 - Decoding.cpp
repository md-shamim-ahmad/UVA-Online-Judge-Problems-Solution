#include<cctype>
#include<cstring>
#include <iostream>
using namespace std;

int main()
{
	string str;
	int T, num, x, p = 0;
	cin >> T;
	while (T--) {
		cin >> str;
		cout << "Case " << ++p << ": ";
		for (int i = 0; str[i]; ) {
			num = 0;
			x = i - 1;
			while (isdigit(str[i])) {
				num = (num * 10) + (str[i] - '0');
				i++;
			}
			for (int j = 0; j < num - 1; j++)
				cout << str[x];
			if (!num)
				cout << str[i++];
		}
		cout << endl;
	}
	return 0;
}
