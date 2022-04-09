#include <iostream>
using namespace std;


void solve()
{
    int n,k,x,c=0;
    cin>>n>>k>>x;
    
    if(x>k)
    cout<<"-1";
    
    else
    {
        c=0;
        for(int i=0;i<n;i++)
        {
            if(c==x)
            {
                c=0;
            }
            cout<<c<<" ";
            c++;
        }
        
}
cout<<"\n";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
