#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
	int N,A,a[201],s[201];
	while ( cin >> N >> A ) {
		memset( s, 0, sizeof(s) );
		memset( a, 0, sizeof(a) );
		a[0] = A; s[0] = A;
		for ( int i = 2 ; i <= N ; ++ i ) {
			for ( int j = 0 ; j <= 200 ; ++ j )
				a[j] *= A;
			for ( int j = 0 ; j <= 200 ; ++ j ) {
				a[j+1] += a[j]/10;
				a[j] %= 10;
			}
			for ( int j = 0 ; j <= 200 ; ++ j )
				s[j] += a[j]*i;
			for ( int j = 0 ; j <= 200 ; ++ j ) {
				s[j+1] += s[j]/10;
				s[j] %= 10;
			}
		}
		int end = 200;
		while ( end >= 1 && !s[ end ] ) 
			end --;
		while ( end >= 0 ) 
			cout << s[end--];
		cout << endl;
	}
	return 0;
}
