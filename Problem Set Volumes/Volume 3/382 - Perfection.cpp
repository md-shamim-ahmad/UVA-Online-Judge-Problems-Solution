#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int num;
	cout << "PERFECTION OUTPUT" << endl;
	while (cin >> num) {
		if (num == 0) {
			cout << "END OF OUTPUT" << endl;
			break;
		}
		ll cnt = 0;
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0)
				cnt += i;
		}
		if (cnt == num)
			cout << setw(5) << num << "  PERFECT" << endl;
		else if (cnt > num)
			cout << setw(5) << num << "  ABUNDANT" << endl;
		else
			cout << setw(5) << num << "  DEFICIENT" << endl;
	}
	return 0;
}
