#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b;
    int r1, r2;
    while ((cin >> a >> b) && a != 0 || b != 0) {
        int cnt = 0, c = 0;
        while (a != 0 || b != 0) {
            r1 = b % 10;
            b /= 10;
            r2 = a % 10;
            a /= 10;
            c = (r1 + r2 + c) / 10;
            if (c > 0) cnt++;
        }
        if (cnt == 0)
            cout << "No carry operation.\n";
        else {
            cout << cnt << " carry operation";
            cout << (cnt == 1 ? ".\n" : "s.\n");
        }
    }
    return 0;
}