#include<iostream>
#include<string>
using namespace std;

int main()
{   char orig[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int x,y,l;
    char a;
    cin>>x;
   string s;
  cin>>s;
  cin>>y;

  for(int i=0;i<x;i++)
  {   if((int)s[i]>=97&&(int)s[i]<=122)
     {

      a=(int)s[i];
      l=a+y;

      if(l>=97&&l<=122)

      {
          s[i]=(char)l;
      }
      else if(l>122)
      {
          l=l-122;
          if(l>26)
          {
              while(l>26)
              {
              l=l-26;

              }

          }
          s[i]=(char)96+l;
      }
     }
     else if((int)s[i]>=65&&(int)s[i]<=90)
         {

      a=(int)s[i];
      l=a+y;

      if(l>=65&&l<=90)

      {
          s[i]=(char)l;
      }
      else if(l>90)
      {
          l=l-90;
          if(l>26)
          {
              while(l>26)
              {
                  l=l-26;
              }
          }
          s[i]=(char)65+(l-1);
      }
     }
     else
        s[i]=s[i];
  }
  cout<<s;

  return 0;
}
