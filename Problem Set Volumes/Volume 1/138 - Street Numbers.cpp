#include<vector>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int house_number[] = { 6,35,204,1189,6930,40391,235416,1372105,7997214,46611179 };
	int last_number[] = { 8,49,288,1681,9800,57121,332928,1940449 ,11309768 ,65918161 };
	for (int i = 0; i < 10; i++)
		cout << setw(10) << house_number[i] << setw(10) << last_number[i],
		cout << endl;
	return 0;
}
