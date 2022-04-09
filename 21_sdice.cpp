#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
         long long int n,f,r,sum=0;
         cin>>n;
         
         if(n==1)
         sum=20;
         
        else if(n==2)
         sum=36;
         
        else if(n==3)
         sum=51;
        
        if(n>=4)
        {
            f=n/4;
            r=n%4;
            sum=60+(f-1)*44;
            
            if(r==0)
            sum=sum+0;
            
            if(r==1)
            sum=sum+16;
            
            if(r==2)
            sum=sum+28;
            
            if(r==3)
            sum=sum+39;
            
            
        }
         cout<<sum<<"\n";
     }
	return 0;
}
