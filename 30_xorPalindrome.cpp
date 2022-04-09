#include <bits/stdc++.h>
using namespace std;
#define ll long long int



void solve()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int one=0,zero=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        zero++;
        
        else
        one++;
    }
    
    if (s.length()%2!=0)
    {
        cout<<"YES\n";
    }
    
    else
    {
         if (zero==one )
         cout<<"YES\n";
         
         else if(s.length()==one || s.length()==zero)
         cout<<"YES\n";
         
         else if(one%2==0 || zero%2==0)
         cout<<"YES\n";
         
         else
         cout<<"NO\n";
         
    }
    
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
