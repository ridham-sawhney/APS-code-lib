
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,fre=0,m,min,count=0;
    vector <int>ar;
  cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>m;
        ar.push_back(m);
    }

  sort(ar.begin(), ar.end(), greater<int>());


for(int i=0;i<x-1;i++)
{
    for(int j=i+1;j<x;j++)
    {  if(ar[i]==ar[j])
        fre++;
    }
}

if(fre!=0)
{


  for(int j=x;j>1;j--)
  {
 cout<<x<<"\n";
         if(x==1)
        break;

       min=ar[ar.size()-1];

       for(int i=x-1;i>=0;i--)
       {
           if(ar[i]==min)
           {

               ar.pop_back();
           }

           x=ar.size();



       }

if(x==0)
    break;
  }
}
else if(fre==0)
{
while(x>0)
{
    cout<<x<<"\n";
    x--;
}
}

    return 0;
}
