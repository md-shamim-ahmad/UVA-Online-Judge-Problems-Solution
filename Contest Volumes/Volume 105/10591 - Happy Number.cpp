#include<iostream>
#include<algorithm>
using namespace std;
typedef long l;
bool answer = true;

int main()
{
	int test_case;
	while (cin >> test_case)
	{
		l num, sum = 0, ans, p = 1;
		for (int i = 0; i < test_case; i++) {
			cin >> num;
			ans = num;
			do
			{
				sum = 0;
				while (num > 0)
				{
					l rem;
					rem = num % 10;
					sum += (rem * rem);
					num /= 10;
				}
				num = sum;
				if (sum <= 9) {
					if (sum == 1)
						cout << "Case #" << p << ": " << ans << " is a Happy number." << endl;
					else if (sum != 1)
						cout << "Case #" << p << ": " << ans << " is an Unhappy number." << endl;
					p++;
					break;
				}
			}while (sum != 1);			
		}		
	}
	return 0;
}
