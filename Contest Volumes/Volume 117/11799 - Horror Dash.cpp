#include <iostream>
#include <vector>
using namespace std;
int solution(string str) {
    str += ' ';
    int num = 0, Max = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || i == str.size()) {
            if (num > Max)
            Max = num;
            num = 0;
        }
        else {
            num = num * 10 + (str.at(i) - '0');
        }
    }
    return Max;
}

int main() {
    int t, p = 1;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);
        cout << "Case " << p++ << ": ";
        cout << solution(str) << endl;
    }
    return 0;
}
