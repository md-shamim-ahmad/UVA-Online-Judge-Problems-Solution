#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long value;
	while (cin>>value) {
	    if (value == 0)
	        return 0;
		cout << (floor(sqrt(value)) == ceil(sqrt(value)) ? "yes" : "no") << endl;
	}
	return 0;
}
