#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float y=0,s=0,z=0;
    int x;
    float m,n,o;
    cin>>x;
    float a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];

    }
   
    for(int i=0;i<x;i++)
    {
         if(a[i]==0)
                z=z+1;

        else if(a[i]>0)
            s=s+1;
        else if(a[i]<0)
            y=y+1;

    }
    m=s/x;
 
    n=y/x;
    z=z/x;
    cout<<setprecision(6)<<m<<"\n"<<setprecision(6)<<n<<"\n"<<setprecision(6)<<z;
    return 0;
}
