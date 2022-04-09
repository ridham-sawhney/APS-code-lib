#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   int t;
int mod =1000000007;
	cin>>t;
    long long int n,p[100000]={0},q;
	for(long long int i=0;i<t;i++)
	{
	    cin>>n;
        for(long long int j=0;j<n;j++)
	    {
           cin>>p[j];

	    }
	    int f = sizeof(p)/sizeof(p[0]);
	    sort(p, p+f,greater<int>());

        for(long long int k=0;k<n;k++)
        {
            if(k==0)
            {
                q=p[k];
            }
            else if((p[k]-k)>0)
            {
                q=q+(p[k]-k);

            }

        }
        cout<<q%mod<<endl;
	}
	return 0;
}
