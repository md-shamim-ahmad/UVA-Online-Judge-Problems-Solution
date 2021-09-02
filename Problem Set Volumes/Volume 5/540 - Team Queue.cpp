#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef tree<int,null_type,less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

#define br printf("\n")

int main() {
    map<int, int> team;
    bool queued[1010];
    queue<int> team_queue;
    queue<int> teams[1010];
    int t,n,x;
    int s = 1;
    while(cin >> t && t != 0) {
        cout << "Scenario #" << s++ << '\n';
        for (int i = 0; i < t; i++) {
            cin >> n;
            for (int j = 0; j < n; j++) {
                cin >> x;
                team[x] = i;
            }
        }
        char cmd[10];
        while (scanf("%s", cmd) && cmd[0] != 'S') {
            if (cmd[0] == 'E') {
                scanf("%d", &x);
                int tm = team[x];
                if(!queued[tm]) {
                    queued[tm] = true;
                    team_queue.push(tm);
                }
                teams[tm].push(x);
            } else {
                int tm = team_queue.front();
                printf("%d\n", teams[tm].front());
                teams[tm].pop();
                if(teams[tm].empty()) {
                    team_queue.pop();
                    queued[tm] = false;
                }
            }
        }
        puts("");
        team_queue = queue<int>();
        team.clear();
        for (int k = 0; k < t; k++) {
            teams[k] = queue<int>();
            queued[k] = false;
        }
    }
    return 0;
}
