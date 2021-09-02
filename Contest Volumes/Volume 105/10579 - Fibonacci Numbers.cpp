#include <iostream>
using namespace std;
int Fibonacci[10001][401] = { 0 };
void ans(int *Fibonacci)
{
	int i = 400;
	while (Fibonacci[i] == 0 && i > 0) i--;
		cout << Fibonacci[i];
	for (int j = i - 1; j >= 0; j--)
	{
		cout.width(3);
		cout.fill('0');
		cout << Fibonacci[j];
	}
	cout << endl;
}
int main()
{
	Fibonacci[0][0] = 0;
	Fibonacci[1][0] = 1;
	for (int i = 2; i < 10001; i++)
	{
		for (int j = 0; j < 400; j++)
		{
			Fibonacci[i][j] = Fibonacci[i - 1][j] + Fibonacci[i - 2][j];
		}
		for (int j = 1; j < 400; j++)
		{
			Fibonacci[i][j] += Fibonacci[i][j - 1] / 1000;
			Fibonacci[i][j - 1] %= 1000;
		}
	}
	int N;
	while (cin >> N) 
		ans(Fibonacci[N]);
	return 0;
}
