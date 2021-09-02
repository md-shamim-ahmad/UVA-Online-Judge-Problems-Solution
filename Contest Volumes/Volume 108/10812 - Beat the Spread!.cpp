#include<iostream>
#include <algorithm>
using namespace std;


void funny_game(int team_1, int team_2)
{
    int team1 = abs(team_1-team_2) / 2;
    int team2 = team_1-team1;
    if ((team1 + team2 == team_1) && abs(team1 - team2) == team_2)
        cout<< max(team1, team2) << " " << min(team1, team2) << endl;
    else
        cout << "impossible" << endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        funny_game(a,b);
    }
    std::cin.get();
}
