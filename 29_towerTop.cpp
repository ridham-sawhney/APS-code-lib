#include <iostream>
using namespace std;

#define ll long long int

void solve()
{
    ll m,o,b=0;
    cin>>m>>o;
    ll oo=o;
    ll a=1;
    // ll o1=1;
    while(oo--)
    {
        if(a>=m)
        {
            b=1;
            break;
        }
        a=a*2;
    }
    
    
    if(b)
    {
        cout<<oo+1<<"\n";
    }
    else
    cout<<"0\n";
    // while(a<=m)
    // {
    //     o1++;
    //     a=a*2;
    // }
    
    // cout<<o1<<"\n";
    
    //  if(o1>o)
    //  cout<<"0\n";
    
    // //  else if(o-o1==0)
    // //  cout<<"1\n";

    //  else 
    //   cout<<o-o1+1<<"\n";
    
    
    
    
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
