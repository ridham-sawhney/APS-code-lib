#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main ()
{
  map<int,int> m1,m2;
  vector<int> a,b;
  long long long int t;
  cin>>t;
  while(t--)
  {
     long long int n;
     cin>>n;
     for(int i=0;i<(4*n)-1;i++)
      { int p,q;
          cin>>p>>q;
          a.push_back(p);
          b.push_back(q);
      }
      for(int x : a)
      {
          m1[x]++;
      }
      for(int y : b)
      {
          m2[y]++;
      }
      for(auto j:m1)
      {
          if(j.second %2 !=0)
          {
             cout << j.first<<" ";
            break;
          }
      }
      for(auto k:m2)
      {
          if(k.second %2 !=0)
          {
             cout << k.first;
            break;
          }
      }
  }
      return 0
  }
