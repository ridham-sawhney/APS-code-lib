#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    float a,temp1,temp2;
    cin>>a;
    temp1=a;
    
    a=pow(0.143*a,a);
    if(a>0)
    temp2=int(a);
    else
    temp2=int(a)-1;
    
    // cout<<temp1<<"\n";
    // cout<<a<<"\n";
    
    // cout<<temp2<<"\n";
    // cout<<temp1-temp2<<"\n";
    
    if((a-temp2)<0.5)
    cout<<int(temp2)<<"\n";
    
    else
    cout<<int(temp2+1)<<"\n";
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
