#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef unsigned long long ll;

inline int Divisor(ll num) {
    double len = sqrt(num), cnt = 0;
    cnt = 0;
    for (int j = 1; j <= len; j++) {
        if (num % j == 0) {
            cnt++;
            if (j < len)
                cnt++;
            else
                continue;
        }
    }
    return (int)cnt;
}

int main()
{
    int test_case, cnt, mx;
    cin >> test_case;
    while (test_case--) {
        ll ln,un, n;///ln = lowest number , un = uper number
        cin >> ln >> un;
        cout << "Between " << ln << " and " << un << ", ";
        cnt = 0, mx = 0;
        for (; ln <= un; ln++) {
            cnt = Divisor(ln);
            if (cnt > mx) {
                mx = cnt;
                n = ln;
            }
        }
        cout << n << " has a maximum of " << mx << " divisors." << endl;
    }
    return 0;
}
