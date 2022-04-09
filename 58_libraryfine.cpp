#include<iostream>
using namespace std;
int main()
{
    int d1,m1,y1,d2,m2,y2,fine;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    if(m1==m2&&y1==y2)
    {
        if(d1>d2)
        {
        fine=15*(d1-d2);
        }
        else if(d2>d1)
        {
            fine=0;
        }
    }
   if(m1>m2)
    {
        fine=500*(m1-m2);
    }
    if(y1>y2)
    {
        fine=10000*(y1-y2);
    }
    if(y2>y1)
    {
        fine=0;
    }

    cout<<fine;
    return 0;

}
