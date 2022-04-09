#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll x,n,a;
    vector<ll> v,v1;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x;
        for(ll j=0;j<x;j++)
        {
             cin>>a;
             v.push_back(a);
        }
        for(ll j=0;j<x;j++)
        {
             cin>>a;
             v1.push_back(a);
        }

//  for(int m=0;m<x;m++)
//  {
//      for(n=m+1;n<x;n++)
//      {
//          if(v[m]<v[n])
//          {
//              int temp=v[m];
//              v[m]=v[n];
//              v[n]=temp;
//          }
//      }
//  }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
//      for(int m=0;m<x;m++)
//  {
//      for(n=m+1;n<x;n++)
//      {
//          if(v1[m]<v1[n])
//          {
//              int temp=v1[m];
//              v1[m]=v1[n];
//              v1[n]=temp;
//          }
//      }
//  }
         ll s=0;
        for(ll i=0;i<x;i++)
        {
            //  if(v[i]<v1[i])
    //  s=s+v[i];
    //  else
    //  s=s+v1[i];
            s+=min(v[i],v1[i]);
        }
        cout<<s<<"\n";
        v.clear();
        v1.clear();
    }
    return 0;
}
