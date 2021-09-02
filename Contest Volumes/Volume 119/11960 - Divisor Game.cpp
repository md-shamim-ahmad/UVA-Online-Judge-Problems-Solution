#include <iostream>
using namespace std;
int NOD[1000002],ANS[1000002], i, j;
void divisor(void) {
    for (i = 1; i <= 1000000; i++) {
        for (j = i; j <= 1000000; j += i)
            NOD[j]++;
    }
}
int main() {
    int test_case, max = 1, position;
    divisor();
    for (i = 1; i <= 1000000; i++) {
        if (NOD[i] >= max) {
            ANS[i] = i;
            max = NOD[i];
            position = i;
        } else
            ANS[i] = position;
    }
    cin >> test_case;
    while (test_case--) {
        cin >> max;
        cout << ANS[max] << endl;
    }
    return 0;
}
