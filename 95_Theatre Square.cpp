#include<iostream>
using namespace std;
int main()
{
    long long int y,x,n,m,a;
    cin>>n>>m>>a;
    y=m/a;
    x=n/a;
    if(n%a!=0)
        x++;
    if(m%a!=0)
        y++;
    cout<<x*y<<endl;
    return 0;
}
