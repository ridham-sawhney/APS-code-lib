#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long int

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int sum=0;
    int maxsum=*min_element(v.begin(),v.end());
    int s=0,e=min_element(v.begin(),v.end())-v.begin();
    int st=0;
    for(int i=0;i<n;i++)
    {
       sum=sum+v[i];
        if(sum>maxsum)
        {
            s=st;
            e=i;
            maxsum=sum;
        }
        if(sum<0)
        {
            sum=0;
            st=i+1;
        }
    }
    cout<<maxsum<<"\n";
    
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    // cout<<"\n";
    
     v.erase(v.begin()+s,v.begin()+e+1);
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    // cout<<"\n";
    
    if(v.size()==0)
        cout<<"0\n";
    else
    {
     sum=0;
     maxsum=*min_element(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
       sum=sum+v[i];
        if(sum>maxsum)
        {
           
            maxsum=sum;
        }
        if(sum<0)
        {
            sum=0;
         
        }
    }
  cout<<maxsum;
    }
    
    return 0;
}