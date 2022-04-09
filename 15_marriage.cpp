#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll size;

int rs,cs,value;

void p(ll a[][1000],ll b[][1000])
{
   ll relation[1000];
   for(ll i=0;i<size;i++)
    {
      // for(ll j=0;j<size;j++)
        //{

        //}

        cout<<*min_element(a,a[i]+size);
    }




}
int main()
{
    cout<<"Enter the number of males and females:";

    cin>>size;
    ll a[size][1000], b[size][1000];
    cout<<"\nEnter the male preferences as 2d array:\n";
    for(ll i=0;i<size;i++)
    {
       for(ll j=0;j<size;j++)
            cin>>a[i][j];

    }
    cout<<"\nEnter the female  preferences as 2d array:\n";
    for(ll i=0;i<size;i++)
    {
       for(ll j=0;j<size;j++)
            cin>>b[i][j];

    }

    cout<<"\n\npreference array :\n";
    for(ll i=0;i<size;i++)
    {
       for(ll j=0;j<size;j++)
            cout<<a[i][j]<<","<<b[i][j]<<"\t";
            cout<<"\n";

    }

    p(a,b);






    return 0;

}
