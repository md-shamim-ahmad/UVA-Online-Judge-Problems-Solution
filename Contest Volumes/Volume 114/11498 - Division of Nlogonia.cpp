#include <iostream>
using namespace std;

void Solution_Code(int n, int m, int test) {
    int x, y;
    while(test--) {
        cin >> x >> y;
        if (x == n || y == m) {
            cout << "divisa" << endl;
            continue;
        }
        else if (x < n && y > m)
            cout << "NO" << endl;
        else if(x > n && y > m)
            cout << "NE" << endl;
        else if(x < n && y < m)
            cout << "SO" << endl;
        else if(x > n && y < m)
            cout << "SE" << endl;
    }
}

int main() {
    int test_case;
    while(cin >> test_case) {
        try {
            if (test_case == 0)
                throw 0;
            int n, m;
            cin >> n >> m;
            Solution_Code(n, m, test_case);
        }
        catch (...) {
            return 0;
        }
    }
    return 0;
}
