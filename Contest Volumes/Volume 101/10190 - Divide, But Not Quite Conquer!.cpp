#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    long int A, B, i;
    while (scanf("%ld %ld", &A, &B) == 2) {
        if (A < 2 || B <= 1 || A < B) {
            cout << "Boring!" << endl;
            continue;
        }
        bool ans = true;
        long int Arr[100] = {0};
        Arr[0] = A;
        for (i = 1;; i++) {
            if (Arr[i - 1] == 1)
                break;
            if (Arr[i - 1] % B) {
                ans = false;
                break;
            }
            Arr[i] = Arr[i - 1] / B;
        }
        if (ans == false)
            cout << "Boring!";
        else {
            cout << Arr[0];
            for (B = 1; B < i; B++) {
                cout << " " << Arr[B];
            }
        }
        cout << endl;
    }
    return 0;
}
