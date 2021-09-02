#include<iostream>
#include <algorithm>
using namespace std;
bool ans = false;

int main()
{
    int n, a, b, c = 0;
    string str;
    while (cin >> str)
    {
        cin >> n;
        c += 1;
        cout << "Case " << c << ":" << endl;
        start:;
        while(n--)
        {
            cin >> a >> b;
            int i = min(a, b) + 1;
            a = max(a, b);
            ans = false;
            for (; i <= a; i++)
            {
                if (str[i] == str[i - 1])
                    continue;
                else {
                    cout << "No" << endl;
                    goto start;
                }
            }
            cout << "Yes" << endl;
        }
        cin.ignore();
    }
    return 0;
}
