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
    int t, test = 1;
    cin >> t;
    while (t--) {
        cout << "Case " << test++ << ": ";
        solution();
    }
#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int k = 0;
    for (int i = 1; i <= n; i++)
        k = max(arr[i] - arr[i - 1], k);
    int ans = k;
    for (int i = 1; i <= n; i++) {
        if (arr[i] - arr[i - 1] == k) {
            k--;
        } else if (arr[i] - arr[i - 1] > k) {
            ans++;
            break;
        }
    }
    cout << ans << '\n';
}