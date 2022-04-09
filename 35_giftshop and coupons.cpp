#include <bits/stdc++.h>
using namespace std;
#define ll long long int



void solve()
{
    int n,max,temp;
    cin>>n>>max;
    vector<int>v ;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    
    int count=0,sum=0;
    int x=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
       sum=sum+v[i];
       count++;
       if(sum>=max )
       {
           
           sum=sum-(v[i]/2);
           break;
       }
      
       
       
      
    }
    if(sum>max)
    cout<<count-1<<"\n";
    else
    cout<<count<<"\n";
    
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
