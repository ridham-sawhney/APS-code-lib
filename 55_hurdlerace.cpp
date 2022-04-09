#include<iostream>
using namespace std;
int main()
{

    int x,max,k,ans;
    cin>>x;
      cin>>k;
    int ar[x];
    for(int i=0;i<x;i++)
    {
        cin>>ar[i];
    }

    max=ar[0];
    for(int i=0;i<x;i++)
    {

        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    if(max>k)
    {
        ans=max-k;
    }
    else if(k>max)
    {
        ans=0;
    }
    cout<<ans;
    return 0;
}
