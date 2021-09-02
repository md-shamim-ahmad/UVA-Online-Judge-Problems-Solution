#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    int num;
    while (cin >> num) {
        if (num == 0)
            return 0;
        cout << "f91(" << num << ") = ";
        if (num >= 101)
            cout << num - 10 << endl;
        else
            cout << 91 << endl;
    }
    return 0;
}
