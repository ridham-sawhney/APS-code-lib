#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r,x=0,y=0,z=0,k=1;
        cin>>a>>b>>c>>p>>q>>r;
        if(a==p && b==q && c==r )
        {
            k=0;
        }
       else
       {
            for(int i=2;i<=10;i++)
            {
                if(a*i==p && b*i==q && c*i==r)
                {
                    z=1;
                }
                else if(a+i==p&& b+i==q && c+i==r)
                {
                    z=1;
                }
                else  if((a*i==p && b*i==q) || (b*i==q && c*i==r) || (c*i==r&& a*i==p))
                {
                    y=2;
                }
                else if((a+i==p && b+i==q) || (b+i==q && c+i==r) || (c+i==r&& a+i==p))
                {
                    y=2;
                }
                else
                {
                    x=3;
                }
            }
       }
       if(k==0)
       {
           cout<<k<<"\n";
       }
       else if()

       if(x==3)
       {

       }
        else
        {

        }
    }
 else if((a==p && b==q) || (b==q && c==r) || (c==r&& a==p))
        {
            x=1;
        }
        else if(a==p || b==q || c==r)
        {

    return 0;
}
