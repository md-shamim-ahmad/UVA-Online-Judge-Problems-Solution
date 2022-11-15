// Bismillahir Rahmanir Rahim//
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;

inline void solution();
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vct_int;
typedef vector<ll> vct_ll;
typedef pair<ll, ll> ll_pair;
typedef pair<int, int> int_pair;
typedef pair<char, int> char_int_pair;
typedef pair<int, char> int_char_pair;

#define pp pop_back
#define pb push_back
#define inf 1000000007;
#define NO cout << "NO\n";
#define YES cout << "YES\n";
#define TEST_CASE(CASE) cout << "Case " << CASE << ": ";
#define FOR(i, n) for (int i = 0; i < n; i++)
#define _FOR(i, j, n) for (int i = j; i < n; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE    
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, test_case = 1;
    cin >> t;
    while (t--) {
        TEST_CASE(test_case++);
        solution();
    }
    // solution();
#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
vct_int arr;
int twoPointer(int l, int r, int d, int k) {
    if(d > k) return inf;
    if(l >= r) return d;
    if(arr[l] == arr[r])
        return twoPointer(l + 1, r - 1, d, k);
    return min(twoPointer(l + 1, r, d + 1, k), twoPointer(l, r - 1, d + 1, k));
}
inline void solution() {    
    int n, k;
    cin >> n >> k;
    arr.resize(n);
    FOR(i, n) {
        cin >> arr[i];
    }
    int temp = twoPointer(0, n - 1, 0, k);
    if(temp == 0)
        cout << "Too easy\n";
    else if(temp <= k)
        cout << temp << '\n';
    else 
        cout << "Too difficult\n";
}
