//Problem to find the number of possible ways of getting sum given
//NO restriction of use of number of dices

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll sum;
    cout<<"Enter the sum you want to find :";
    cin>>sum;
   // cout<<sum<<" ";
    int  dp[sum+1];
    for(int i=0;i<=sum;i++)
        dp[i]=0;

     dp[0]=1;
//    for(ll i=0;i<sum;i++)
//        cout<<dp[i];

    for(int i=1;i<=sum;i++)
    {
        for(int j=1;((j<=6)&&( (i-j) >=0));j++)
        {
            dp[i]=dp[i]+dp[i-j];
        }
    }
//    for(ll i=0;i<=sum;i++)
//        cout<<dp[i]<<" ";
   cout<<dp[sum];
    return 0;
}
