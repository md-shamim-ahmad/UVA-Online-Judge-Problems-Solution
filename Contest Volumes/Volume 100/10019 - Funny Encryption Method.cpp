#include<iostream>
#include<algorithm>
using namespace std;
inline int decimal_to_binary(int);
inline int hexadecimal_to_binary(int);

int main()
{
    int test_case;
    cin >> test_case;

    while(test_case--){
        int value;
        cin >> value;
        cout << decimal_to_binary(value) << " " << hexadecimal_to_binary(value) << endl;
    }
	return 0;
}
inline int decimal_to_binary(int num) {
    int cnt = 0;
    while(num > 0)
    {
        if(num % 2 == 1)
            cnt++;
        num /= 2;
    }
    return cnt;
}

inline int hexadecimal_to_binary(int num) {
    int sum = 0, temp = 0;
    while(num > 0){
        int rem;
        rem = num % 10;
        switch(rem) {
            case 1:
            case 2:
            case 4:
            case 8:
                temp = 1;
                   break;
            case 3:
            case 5:
            case 6:
            case 9:
                temp = 2;
                   break;
            case 7:
                temp = 3;
                   break;
        }
        num /= 10;
        sum += temp;
    }
    return sum;
}
