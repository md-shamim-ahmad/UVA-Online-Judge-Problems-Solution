#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef  long double  ldb;
typedef long long ll;

int main() {
    cout << setprecision(2) << fixed << setfill('0');
    int hour, minute, second;
    ldb distance = 0, cdistance = 0;
    ll current_time = 0, previous_time = 0, velocity = 0;
    while (scanf("%d:%d:%d", &hour, &minute, &second) == 3) {
        current_time = hour * 3600 + minute * 60 + second;
        ll total_time = abs(previous_time - current_time) ;
        cdistance = (float) velocity * (total_time / 3600.0);
        if (cin.peek() == ' ') {
            previous_time = current_time;
            distance += cdistance;
            cin >> velocity;
        } else
            cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << " "
                 << distance + cdistance << " km" << endl;
    }
    return 0;
}
