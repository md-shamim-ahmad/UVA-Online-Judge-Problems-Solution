#include<iostream>
#include<algorithm>
#define FOR(i,W) for(int i = 0; i < W; i++)
using namespace std;

int main()
{
	int participants, budget, hotels, weeks;
	while (cin >> participants >> budget >> hotels >> weeks)
	{
		int temp = budget, price, beds;
		FOR(j, hotels)
		{
			cin >> price;
			int MAX = 0;
			FOR(i, weeks)
			{
				cin >> beds;
				MAX = max(MAX, beds);

			}
			if (MAX >= participants)
				temp = min(temp, (participants * price));
		}
		if (temp == budget)
			cout << "stay home\n";
		else
			cout << temp << endl;
	}
	return 0;
}
