// Bismillahir Rahmanir Rahim//

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
void solution();

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
//    freopen("input.txt", "r", stdin);
#endif
    solution();
#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

void solution() {
    string s;
    vector<string> arr;
    map<string, int> mp;
    while (cin >> s) {
        mp[s] = 1;
        arr.push_back(s);
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].size() == 1)
            continue;
        s = arr[i];
        string substr1 = "", substr2 = "";
        for (int j = 0; j < s.size() - 1; j++) {
            substr1 += s[j];
            if (mp[substr1]) {
                substr2 = s.substr(j + 1, s.size());
                if (mp[substr2]) {
                    cout << s << '\n';
                    break;
                }
            }
        }
    }
}
