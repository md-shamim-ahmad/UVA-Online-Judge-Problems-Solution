#include<iostream>
using namespace std;
typedef long l;
inline int Big_Mod(l, l, l);

int main()
{
	l B, P, M;
	while (cin >> B >> P >> M) {
		cout << Big_Mod(B, P, M) << endl;
	}
	return 0;
}
inline int Big_Mod(l B, l P, l M)
{
	if (P == 0)
		return 1;
	if (P % 2 == 0)
		return (Big_Mod(B, (P / 2), M) * Big_Mod(B, (P / 2), M)) % M;
	return (Big_Mod(B, (P - 1), M) * (B % M)) % M;
}
