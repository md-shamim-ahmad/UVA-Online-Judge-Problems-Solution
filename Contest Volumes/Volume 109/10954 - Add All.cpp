#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            return 0;
        vector<int> Arr;
        while (n--) {
            int value;
            cin >> value;
            Arr.push_back(value);
        }
        int sum, cost = 0;
        sort(Arr.begin(), Arr.end());
        while (Arr.size() > 1) {
            sum = Arr.front();
            Arr.erase(Arr.begin());
            sum += Arr.front();
            Arr.erase(Arr.begin());
            cost += sum;
            Arr.push_back(sum);
            sort(Arr.begin(), Arr.end());
        }
        cout << cost << endl;
    }
    return 0;
}
