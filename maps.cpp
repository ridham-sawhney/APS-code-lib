#include<bits/stdc++.h>
using namespace std;



int main()
{
    // int a[]={1,5,2,3,5,1};
    // int n=sizeof(a)/sizeof(a[0]);
    // map<int,int> mp;
    // unordered_map<int,int>mp1;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[a[i]]++;
    //     mp1[a[i]]++;
    // }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    // cout<<"unordered\n";
    // for(auto it1:mp1)
    // {
    //     cout<<it1.first<<" "<<it1.second<<"\n";
    // }
    string s[]={"hello","bro","hello"};
    int si=sizeof(s)/sizeof(s[0]);
    map<string,int>smp;
    for(int i=0;i<si;i++)
    {
        smp[s[i]]++;
    }

    for(auto it:smp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
}
