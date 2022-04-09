#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x],b[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
   for(int z=0;z<x;z++)
   {
       b[z]=a[z];
   }
    for(int i=0;i<x;i++)
    {
        if(a[i]%5!=0)
        {
            while(a[i]%5!=0&&a[i]>35)
            {
                a[i]+=1;
            }

        }

         if(a[i]-b[i]<3)
            {
                cout<<a[i]<<"\n";
            }
            else if(a[i]<38)
            {
                cout<<b[i]<<"\n";
            }
            else
            {
                cout<<b[i]<<"\n";
                }
    }

    return 0;
}
