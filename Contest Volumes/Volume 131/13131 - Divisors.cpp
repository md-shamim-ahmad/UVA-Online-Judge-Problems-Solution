#include <iostream>
#include <cmath>
using namespace std;
typedef  long long ll;
int i, j;

void divisor(int &n, int &k) {
    int sum = 0;
    j = sqrt(n);
    for (i = 1; i <= j; i++) {
        if (n % i == 0) {
            if (i % k != 0)
                sum += i;
            if ((i != n / i) && (n / i) % k != 0)
                sum += n / i;
        }
    }
    cout << sum << endl;
}

int main() {

    int test_case, n, k;
    cin >> test_case;
    while (test_case--) {
        cin >> n >> k;
        divisor(n, k);
    }
    return 0;
}
