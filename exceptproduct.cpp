/*
[1,2,3,4]

index 1
2*3*4=24
index 2
1*3*4=12
index 3
1*2*4=8
index 4
1*2*3=6*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    int n=a.size();
   // cout<<n;
    vector<int >left(n,1);
    vector<int >right(n,1);

    for(int i=1;i<=n;i++)
    left[i]=left[i-1]*a[i-1];

    // for(int i=0;i<n;i++)
    //  cout<< left[i]<<" ";
    //  cout<<endl;
  

    vector<int > dup=a;
    reverse(dup.begin(),dup.end());
    for(int i=1;i<n;i++)
    right[i]=right[i-1]*a[n-i];

    // for(int i=0;i<n;i++)
    //  cout<< right[i]<<" ";

    reverse(right.begin(),right.end());
    vector<int> ans;
    for(int i=0;i<n;i++)
    ans.push_back(left[i]*right[i]);


     
     
     cout<<endl;
       for(int i=0;i<n;i++)
     cout<< ans[i]<<" ";


}