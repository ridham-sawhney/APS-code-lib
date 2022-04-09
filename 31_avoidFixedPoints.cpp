#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll  int




// int check()
// {
    
//     ll count=0;
//     // for(int i=0;i<v.size();i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
//     // cout<<"\n";
    
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==(i+1))
//         {
//             count++;
//             v.insert(v.begin()+i,i);
            
//         }
        
//     }
//   // cout<<"\n**"<<count<<"\n";
//     return count;
//     // if(count==0)
//     // return 1;
    
//     // else
//     // return 0;
    
// }
void solve()
{
   ll n;
   cin>>n;
   ll temp;
   vector<ll> v;
   
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       v.push_back(temp);
   }
   
   ll c=0;
   
//   c=check();
//   while(!check())
//   {
//       c++;
//   }
   for(int i=0;i<v.size();i++)
    {
        if(v[i]==(i+1))
        {
            c++;
            auto it=v.insert(v.begin()+i,i);
            
        }
        
    }
   cout<<c<<"\n";
   v.clear();
   
}


int32_t main() {
//	fast
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
