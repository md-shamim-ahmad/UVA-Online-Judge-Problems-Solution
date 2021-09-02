#include<cmath>
#include<memory>
#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long ul;

int main()
{
    ul num1, num2;
    while(cin >> num1 >> num2)
    {
        int cnt = 0, cary = 0;
        if(num1 == 0 && num2 == 0)
            break;
        ul MAX, MIN;
        MAX = max(num1, num2);
        MIN = min(num1, num2);
        while(MAX > 0)
        {
            int rem1, rem2;
            rem1 = MAX % 10;
            rem2 = MIN % 10;
            rem1 += cary;
            if(rem1 + rem2 > 9)
                cnt++,
                cary = 1;
            else 
                cary = 0;
            MAX /= 10;
            MIN /= 10;
        }
        if(cnt == 0)
            cout << "No carry operation." << endl;
        else if(cnt > 1)
            cout << cnt << " carry operations." <<endl;
        else
            cout << cnt << " carry operation." <<endl;
    }
    return 0;
}
