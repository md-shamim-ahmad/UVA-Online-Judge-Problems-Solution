#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
string Pizza = "MARGARITA";

bool ans (char ch) {
    for (int i = 0; i < Pizza.size(); i++)
        if (ch == Pizza[i])
            return true;
    return false;
}
int main() {
    int test_case;
    vector<int> Value{3, 1, 1, 1, 2, 1};
    cin >> test_case;
    while (test_case--) {
        string str;
        cin >> str;
        map<char, int> count;
        int i = 0, cnt = INT32_MAX;
        for (; i < str.size(); i++)
            if (ans(str.at(i)) == true)
                count[str.at(i)]++;
        i = 1;
        if (count.size() != 6) {
            cout << 0 << endl;
            continue;
        }
        for(map<char, int>::iterator it = count.begin(); it != count.end(); it++, i++) {
            if(i == 1)
                it->second = it->second / 3;
            else if(i == 5)
                it->second = it->second / 2;
            cnt = min(cnt, it->second);
        }
        cout << cnt << endl;
    }
    return 0;
}
