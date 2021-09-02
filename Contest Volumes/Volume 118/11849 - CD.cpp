#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i, n) for(int i = 0; i < n; i++)
int binary_search(vector<int> &CD_of_Jack, int num) {
	int first = 0, last = CD_of_Jack.size() - 1, mid;
	while (first <= last) {
		mid = (first + last) / 2;
		if (CD_of_Jack[mid] == num) 
			return mid;
		if (CD_of_Jack[mid] < num)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return false;
}

int main()
{
	int n, m, value;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			return 0;
		vector<int>CD_of_Jack, CD_of_Jill;
		FOR(i, n) {
			cin >> value;
			CD_of_Jack.push_back(value);
		}
		FOR(i, m) {
			cin >> value;
			CD_of_Jill.push_back(value);
		}
		value = 0;
		FOR(i, m) {
			if(CD_of_Jill[i] == CD_of_Jack[binary_search(CD_of_Jack ,CD_of_Jill[i])])
				value++;
		}
		cout << value << endl;
	}
	return 0;
}
