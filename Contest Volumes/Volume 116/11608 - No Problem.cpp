#include <iostream>
#include <vector>
using namespace std;
#define FOR(i) for (int i = 0; i < 12; i++)

int main() {
    int test_case, p = 0;
    while (cin >> test_case && test_case >= 0) {
        vector<int> creat_problem, number_of_problem;
        int value;
        FOR(i) {
            cin >> value;
            creat_problem.push_back(value);
        }
        FOR(i) {
            cin >> value;
            number_of_problem.push_back(value);
        }
        cout << "Case " << ++p << ":" << endl;
        int sum = test_case;
        for (int i = 0; i < 12; i++) {
            if (sum >= number_of_problem[i]) {
                cout << "No problem! :D" << endl;
                sum -= number_of_problem[i];
            } else
                cout << "No problem. :(" << endl;
            sum += creat_problem[i];
        }
    }
    return 0;
}
