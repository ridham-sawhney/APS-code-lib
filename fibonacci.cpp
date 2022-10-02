#include<bits/stdc++.h>
using namespace std;

int fb(int n)
{
    int i=0;
    
    if(i>n)
    return ;
    cout<<fb(i+1)+fb(i+2);
}
int main()
{
    fb(5);
}