#include <iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num) {
		int row = 0, col = 0, rep;
		cout << "TERM " << num << " IS ";
		for (rep = 1; rep < num; rep++)
			num -= rep;
		if (rep % 2 == 0) {
			row = num;
			col = rep - row + 1;
		}
		else {
			col = num;
			row = rep - num + 1;
		}
		cout << row << "/" << col << endl;
	}
	return 0;
}
