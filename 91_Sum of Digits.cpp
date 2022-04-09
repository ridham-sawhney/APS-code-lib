#include<iostream>
using namespace std;
int main()
{
    int a,x,y;
  cin>>a;
   int n[5];

  for(int i=0;i<a;i++)
  {
      cin>>n[i];
  }

  for(int i=0;i<a;i++)
  {y=0;
      while(n[i]!=0)
      {
        x=(n[i])%10;
        n[i]=n[i]/10;
        y=y+x;
      }
      cout<<y<<"\n";
  }

    return 0;
}
