#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int size;
	while(cin >> size) {
		if (size == 0)
			break;		
		int zero = 0;
		vector<int> value;
		for (int i = 0; i < size; i++) {
			int val;
			cin >> val;
			if (val > 0)
				value.push_back(val);
			else 
				zero += 1;
		}
		if (zero == size) {
			cout << 0 << endl;
			continue;
		}
		else {
			int i = 0;
			for (i = 0; i < value.size() - 1; i++) {
					cout << value[i] << " ";									
			}
			cout << value[i];
		}
		cout << endl;
	}
	return 0;
}
