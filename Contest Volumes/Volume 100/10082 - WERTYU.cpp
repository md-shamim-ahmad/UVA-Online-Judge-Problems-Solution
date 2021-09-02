#include<sstream>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string Qwerty="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.size();i++)
        {
            if(str.at(i)==' ')
            cout<<" ";
            else
            {
                for(int j=0;j<Qwerty.size();j++){
                    if(str.at(i)==Qwerty.at(j))
                        cout<<Qwerty.at(j-1);
                }                
            }            
        }
        cout<<endl;
    }
    return 0;
}
