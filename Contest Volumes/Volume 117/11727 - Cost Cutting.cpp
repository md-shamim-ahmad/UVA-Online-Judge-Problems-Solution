#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test_case, n, p = 0;
    cin >> test_case;
    vector<int>num;
    while (test_case--) {
        for (int i = 0; i < 3; i++)
            cin >> n,
            num.push_back(n);
        sort(num.begin(), num.end());
        cout << "Case " << ++p << ": " << num[1] << endl;
        num.clear();
    }
    return 0;
}
