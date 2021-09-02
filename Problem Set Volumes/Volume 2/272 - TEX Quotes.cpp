#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"'){
            if(cnt==0)
                cout<<"``"
                ,cnt++;
            else
                cout<<"''"
                ,cnt--;
        }
        else
            cout<<ch;
    }
    std::cin.get();
}
