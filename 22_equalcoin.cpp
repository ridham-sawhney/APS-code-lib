#include <iostream>
using namespace std;

int main() {
	int x,y,t,n;
	cin>>t;
	while(t!=0)
	{
	    cin>>x>>y;
	    //n=x*1+y*2;
	    
	    if(x%2==0 &&x!=0)
	    {
	       
	       cout<<"YES\n";
	       
	       
	    }
	    
	    else if(x==0)
	    {
	      if(y%2==0)
	       cout<<"YES\n";
	       
	       else
	       cout<<"NO\n";  
	    }
	    
	    
	    else
	    cout<<"NO\n";
	    
	    
	    t--;
	}
	
	return 0;
}
