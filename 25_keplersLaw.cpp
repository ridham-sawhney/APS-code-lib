#include <bits/stdc++.h>
using namespace std;


void solve()
{
 double a,b,c,d;
 cin >>a>>b>>c>>d;
 if((pow(a,2)/pow(c,3))==(pow(b,2)/pow(d,3)) )
 cout<<"YES\n";
 
 else
 cout<<"NO\n";
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	solve();
	
	
	// your code goes here
	return 0;
}
