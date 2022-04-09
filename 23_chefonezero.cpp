#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int t,x;
	
	cin>>t;
	while(t--)
	{
	    int n;
      cin>>n;
      char v[n];
          for(int i=0;i<n;i++)
         {
          cin>>v[i];
          }
          
          int one=0,zero=0;
          
          for(int i=0;i<n;i++)
          {
              if(v[i]=='1')
              one++;
              else
              zero++;
          }
          
         if(one<2 || zero<2)
         cout<<"0\n";
         
         else if(zero>=one)
         cout<<one-1<<"\n";
         
         else if( zero<one)
         cout<<zero-1<<"\n";
	    
	}
	return 0;
}
