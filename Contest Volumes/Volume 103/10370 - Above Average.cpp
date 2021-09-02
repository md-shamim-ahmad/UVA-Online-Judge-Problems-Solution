#include <cmath>
#include <vector>
#include <iomanip>
#include <iostream>
#define FOR(i,t) for(int i=0;i<t;i++)
#define logo(result) cout << fixed << setprecision(3) << result << "%" << endl;
using namespace std;
typedef double db;

int main()
{
	int test_caes;
	cin >> test_caes;
	while (test_caes--)
	{
		int students, cnt = 0, total_marks = 0;
		cin >> students;
		vector<int> marks;
		FOR(i, students) {
			int mark;
			cin >> mark;
			marks.push_back(mark);
			total_marks += marks[i];
		}
		db avareage = total_marks / (db)students;
		for (int i = 0; i < marks.size(); i++) {
			if (avareage < (db)marks[i])
				cnt++;
		}
		db result = cnt / (db)students * 100;
		logo(result);
		marks.clear();
	}
	return 0;
}
