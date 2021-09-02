#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, A, B, C;
    int boundary, z;
    bool ans = false;
    cin >> n;
    while (n--) {
        cin >> A >> B >> C;
        ans = false;
        boundary = (int) sqrt(C);
        for (int x = -boundary; x <= boundary; x++) {
            for (int y = -boundary; y * y - x * x <= C; y++) {
                z = A - x - y;
                if (x == y || y == z || x == z)
                    continue;
                if (x * y * z != B)
                    continue;
                if (x * x + y * y + z * z != C)
                    continue;
                cout << x << " " << y << " " << z << endl;
                ans = true;
                break;
            }
            if (ans) break;
        }

        if (!ans)
            printf("No solution.\n");
    }
    return 0;
}
