#include<iostream>
#include<vector>
using namespace std;

int main()
{   int s,c,z;
cin>>s;
int ar[s],br[5],ma;
for(int i=0;i<s;i++)
{
    cin>>ar[i];
}

for(int i=1;i<6;i++)
{c=0;
    for(int j=0;j<s;j++)
    {
        if(i==ar[j])
        {
            br[i-1]=++c;

        }

    }
}
ma=br[0];
for(int i=0;i<5;i++)
{
    if(ma<br[i])
    {
        ma=br[i];
    }
}
for(int i=0;i<5;i++)
{
    if(ma==br[i])
    {
        z=i+1;
        break;
    }

}
cout<<z;
    return 0;

}
