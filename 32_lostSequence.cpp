#include <bits/stdc++.h>
using namespace std;
#define ll long long int



void solve()
{
    int n;
    cin>>n;
    int o=0,e=0;
    n=2*n;
    vector<int> v;
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if (tmp%2==0)
        e++;
        else
        o++;
        v.push_back(tmp);
    }
    
    
   if(e%2==0 && o%2==0)
   cout<<"YES\n";
   else
   cout<<"NO\n";
   
    
    
}


int main() {
	
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
