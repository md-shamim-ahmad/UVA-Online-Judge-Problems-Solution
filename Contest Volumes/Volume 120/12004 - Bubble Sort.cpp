#include <iostream>
using namespace std;
typedef long long ll;
int findSwaps(int n, int a[]) {
    int count = 0, i, j, temp, b[100000];
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;

                count++;
            }
        }
    }
    return count;
}

int main() {
    int test_case, p = 1;
    cin >> test_case;
    while (test_case--) {
        ll num;
        cin >> num;
        cout << "Case " << p++ << ": ";
        num = num * (num - 1);
        if (num % 4 == 0)
            cout << num / 4 << endl;
        else
            cout << num / 2 << "/2" << endl;

    }
    return 0;
}
