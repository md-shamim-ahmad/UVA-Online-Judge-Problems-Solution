#include <iostream>
#include <vector>
using namespace std;

int main() {
    int G;
    string str;
    while (cin >> G >> str) {
        if (G == 0)
            return 0;
        vector<char> Group_word;
        G = str.size() / G;
        for (int i = 0; i < str.size(); i++) {
            if (Group_word.size() != G) {
                Group_word.push_back(str[i]);
            } else {
                for (int j = Group_word.size() - 1; j >= 0; j--)
                    cout << Group_word[j];
                Group_word.clear();
                i--;
            }
        }
        for (int j = Group_word.size() - 1; j >= 0; j--)
            cout << Group_word[j];
        cout << endl;
    }
    return 0;
}
