#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cstring>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef map<char, int> MAP;
typedef map<char, int>::iterator Iterator;
typedef set<char> char_set;
typedef vector<char>char_vct;
typedef set<char>::iterator It;
#define br std::cout << std::endl

int main()
{
    int test_case, p = 1;
    cin >> test_case;
    cin.ignore();
    while(test_case--){
        string str;
        getline(cin, str);
        MAP Chars;
        Chars.clear();
        for(int i = 0; i < str.size(); i++) {
            if(isalnum(str.at(i)))
                Chars[str.at(i)]++;
        }
        char_vct ans;
        ans.clear();
        bool prime = true;
        for(Iterator it = Chars.begin(); it != Chars.end(); it++) {
            int num = it->second;
            char ch = it->first;
            if (num == 1)
                continue;
            else if (num == 2) {
                ans.push_back(ch);
            }
            else {
                for (int i = 2; i < num; i++) {
                    if (num % i == 0) {
                        prime = false;
                        break;
                    }
                    else
                        prime = true;
                }
                if (prime)
                    ans.push_back(ch);
            }
        }
        cout << "Case " << p++ << ": ";
        if (ans.empty() == false) {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i];
                br;
        }
        else
            cout <<"empty" << endl;

    }
    return 0;
}
