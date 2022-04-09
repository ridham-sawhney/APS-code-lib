#include <bits/stdc++.h>
using namespace std;
#define ll long long int



void solve()
{
    string s;
    cin>>s;
    int count=s.size(),t=0,m=0;
    for(int i=0;i<s.size();i++)
    {    
        
        if (s[i]==s[0] )
        {
            m=max(m,t);
            t=0;
        }
        
        
        if(s[i]==s[s.size()-1])
        {
            m=max(m,t);
            t=0;
        }  
        if(s[i]!=s[s.size()-1] && s[i]!=s[0])
        t++;
        
        
        
    }
    if(m==0)
    cout<<"-1\n";
    else
    cout<<m<<"\n";
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
