#include<bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	while (scanf("%c", &ch) != EOF) {
		if (ch != '\n')
			cout << (char)(ch - 7);
		else
			cout << endl;
	}
	return 0;
}
