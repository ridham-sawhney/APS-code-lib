#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	///int a[1000];
	long long int n,i,t;
	cin>>t;
	while(t--)
    {
	cin>>n;
    int a[n+1];
	for(i=1;i<=n;i++)
	 {
	     cin>>a[i];
     }
    sort(a+1,a+n+1);


	int j=0;
	for(int i=1;i<=n;i++)
	{
	    if(a[i]>i)
	    {
	        cout<<"Second"<<"\n";
	        j++;
            break;
	    }
	}
	if(j==0)
	{
	    int sum=0,diff=0;
	for(int i=1;i<=n;i++)
	{
	    if(a[i]<i)
	    {
	       diff=a[i]-i;
	       if(diff<0)
	       diff=diff*-1;
	       sum=sum+diff;
	    }
	}
	if(sum%2==0)
	cout<<"Second"<<"\n";
	else
	cout<<"First"<<"\n";

	}

    }
	return 0;
}
