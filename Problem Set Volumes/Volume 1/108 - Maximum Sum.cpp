#include<cstdio>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[100][100];
    int N,ans;
    int sum[100][101];
    int dp[101];

    while(scanf("%d",&N)==1){
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                scanf("%d",&matrix[i][j]);

        for(int i=0;i<N;i++){
            sum[i][0]=0;
            for(int j=1;j<=N;j++)
                sum[i][j]=sum[i][j-1]+matrix[i][j-1];
        }

        memset(dp,0,sizeof(dp));
        ans=-(1<<30);

        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                for(int k=0;k<N;k++){
                    dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k]
                                ,sum[k][j+1]-sum[k][i]);
                    ans=max(ans,dp[k+1]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
