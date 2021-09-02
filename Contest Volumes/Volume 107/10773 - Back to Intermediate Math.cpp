#include<cmath>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
		int d, u, v, p = 0;
		double t1 = 0, t2 = 0;
		while (test_case--)
		{
			cin >> d >> v >> u;			
			
			cout << "Case " << ++p << ": ";
			if (v >= u)
				cout << "can't determine" << endl;
			else if(u==0||v==0)
				cout << "can't determine" << endl;
			else {
				t1 = (float)d / u;
				t2 = (float)d / (sqrt(pow(u, 2) - pow(v, 2)));
				cout << fixed << setprecision(3) << abs(t1 - t2) << endl;
			}
		}
	return 0;
}
