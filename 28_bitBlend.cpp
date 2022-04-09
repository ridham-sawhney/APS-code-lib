#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
        ll x,y,i,count,uniq=0,temp;
        cin>>x;
        vector<ll>v; 
        for(ll k=0;k<x;k++)
        {
            cin>>y;
            v.push_back(y);
        }
       
        for(ll k=0;k<x;k++)
        {
            if(v[k]%2==1)
            {
                uniq=1;
                break;
            }
        }
      
        if(uniq==0)
        {
            cout<<-1<<"\n";
        }
        
        
        else
        {
        int e=0,ee=0,o=0,oo=0;
        
        for(i=0;i<x;i++)
        {
            if(i%2==0)
            {
                if(v[i]%2)
                    e++;
                else
                    o++;
            }
            else
            {
                if(v[i]%2)
                    ee++;
                
                else
                    oo++;

            }
        }
        
        if(e+oo<=ee+o)
        {
            count=e+oo;
        }
        else
        {
            count=ee+o;
        }
        cout<<count<<"\n";
        
       if(count==e+oo)
        {
            for(i=1;i<x;i=i+2)
            {
                if(v[i]%2==1)
                {
                    temp=i;
                    break;
                }
            }
            for(i=0;i<x;i=i+2)
            {
                if(v[i]%2==1)
                {
                    cout<<i+1<<" "<<temp+1<<"\n";
                }
            }
            for(i=1;i<x;i=i+2)
            {
                if(v[i]%2==0)
                {
                    cout<<i+1<<" "<<temp+1<<"\n";
                }
            }
        }
        
        else
        {
            for(ll k=0;k<x;k=k+2)
            {
                if(v[k]%2==1)
                {
                    temp=k;
                    break;
                }
            }
            for(ll k=0;k<x;k=k+2)
            {
                if(v[k]%2==0)
                {
                    cout<<k+1<<" "<<temp+1<<"\n";
                }
            }
            
            for(ll k=1;k<x;k=k+2)
            {
                if(v[k]%2==1)
                {
                    cout<<k+1<<" "<<temp+1<<"\n";
                }
            }
            
        }
    
            
        }
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}


