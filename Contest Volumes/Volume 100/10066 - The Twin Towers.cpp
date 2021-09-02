#include<vector>
#include<memory>
#include<iostream>
#include<algorithm>
#define FOR(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main()
{
	int num1, num2, test = 0, cnt = 0;
	while (cin >> num1 >> num2)
	{
		int ans[num1 + 1][num2 + 1];
		if (num1 == 0 && num2 == 0)
			break;
		vector<int>tower1;
		vector<int>tower2;

		//take second line input
		FOR(i, num1)
		{
			int value;
			cin >> value;
			tower1.push_back(value);
		}

		//take third line input
		FOR(i, num2)
		{
			int value;
			cin >> value;
			tower2.push_back(value);
		}

		for (int i = 0; i <= tower1.size(); i++)
		{
			for (int j = 0; j <= tower2.size(); j++)
			{
				if (i == 0 || j == 0)
					ans[i][j] = 0;
				else if (tower1[i - 1] == tower2[j - 1])
					ans[i][j] = ans[i - 1][j - 1] + 1;
				else
					ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
			}
		}

		cout << "Twin Towers #" << ++test << endl;
		cout << "Number of Tiles : " << ans[num1][num2] << endl << endl;
		cnt = 0;
		tower1.clear();
		tower2.clear();
	}
}
