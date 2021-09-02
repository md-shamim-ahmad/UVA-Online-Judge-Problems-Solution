#include<vector>
#include<iostream>
#define FOR(i,size) for(int i = 0; i < size; i++)
using namespace std;

int main()
{
	int size;
	while (cin >> size) {
		vector<int>Arr;
		while (size--)
		{
			int value;
			cin >> value;
			Arr.push_back(value);
		}
		int cnt = 0;
		FOR(i, Arr.size())
		{
			for (int j = 0; j < i; j++)
				if (Arr[i] < Arr[j])
					cnt++;
		}
		cout << "Minimum exchange operations : " << cnt << endl;
	}
	return 0;
}
