#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long double ld;
#define br() cout << endl;

int main()
{
	int n;
	ld p;
	bool br = false;
	while (cin >> n >> p)
		cout << fixed << setprecision(0) << pow(p,1.0/n),
		br();
	return 0;
}
