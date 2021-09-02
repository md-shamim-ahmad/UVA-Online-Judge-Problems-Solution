#include <iostream>
#include <map>
#include <vector>

using namespace std;
typedef long int li;

int main()
{
	map<li, li> Map;
	vector<li>Num;
	int num;
	while(cin >> num) {
	
		if(Map.find(num) != Map.end()) {
			Map[num]++;
		}
		else {
		    Num.push_back(num);
		    Map[num] = 1;
		}
	}
	for (vector<li>::iterator it = Num.begin(); it != Num.end(); it++)
		cout << *it << " " << Map[*it] << endl;
	return 0;
}
