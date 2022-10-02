#include<bits/stdc++.h>
using namespace std;

int po(int n)
{
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e)
    {
       int j=mid*mid;
        if(j==n)
        return mid;
        if(j<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}

double precisepo(int n,int x,int precision)
{
    double ans=x;
    double factor=1;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n=301;
    int x= po(n);
    cout<<x;
    cout<<endl<<"Give me precision boss\n";
    cout<<precisepo(n,x,5);
}