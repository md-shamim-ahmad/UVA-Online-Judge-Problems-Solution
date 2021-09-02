#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef  multiset<int > Set;

int main() {
    ll num;
    Set Arr;
    while (cin >> num) {
        if (num == 0)
            break;
        while (num--) {
            int n;
            cin >> n;
            Arr.insert(n);
        }
        multiset<int>::iterator it;
        it = Arr.begin();
        cout << *it;
        *it++;
        for (; it != Arr.end() ; it++)
            cout << " " << *it;
        cout << endl;
        Arr.clear();
    }
    return 0;
}
