#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		string str1,str2,s;
		cin>>str1>>str2;
		ll n=str1.size(),m=str2.size();
		ll x[27];memset(x,0,sizeof(x));
	ll y[27];
		for(int i=0;i<n;i++)
		{
			x[str1[i]-'a']++;
		}


		for(int i=0;i<m;i++)
		{
			x[str2[i]-'a']--;
		}

		for(int i=0;i<26;i++)
		y[i]=x[i];


		for(int i=0;i<=(str2[0]-'a');i++)
		{
			while(x[i]>0)
			{
				s+=(char)(i+97);
				x[i]--;

			}
		}
		s+=str2;
		for(int i=0;i<26;i++)
		{
			while(x[i]>0)
			{
				s+=(char)(i+97);
				x[i]--;
			}
		}
		string sn;
		for(int i=0;i<str2[0]-'a';i++)
		{
			while(y[i]!=0)
			{
				sn+=(char)(i+97);
				y[i]--;
			}
		}
		sn+=str2;
		for(int i=0;i<26;i++)
		{
			while(y[i]!=0)
			{
				sn+=(char)(i+97);
				y[i]--;
			}
		}
		cout<<min(s,sn)<<"\n";
	}
}
