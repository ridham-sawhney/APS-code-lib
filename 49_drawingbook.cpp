#include<iostream>
using namespace std;
int main()
{
    int x,s=-1,p,row=0,count=0;
    cin>>x;

    int ar[x][2];
    for(int i=0;i<x/2+1;i++)
    {

        for(int j=0;j<2;j++)
        {
            ar[i][j]=++s;
        }
    }


    cin>>p;

  for(int i=0;i<x/2+1;i++)
    {

        for(int j=0;j<2;j++)
        {
           if(ar[i][j]<p)
           {
            count++;
           }
        }
    }


  for(int i=x/2;i>=0;i--)
    {

        for(int j=1;j>=0;j--)
        {
           if(ar[i][j]>p)
           {
            row++;
           }

        }

    }

if(row>count)
{
    cout<<count/2;
}
else
    cout<<row/2;
    return 0;
}
