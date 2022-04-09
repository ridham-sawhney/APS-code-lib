#include <bits/stdc++.h>
using namespace std;
int parent[1000];

void make(int a)
{
    parent[a]=a;
}

int find(int a)
{
   if(a==parent[a])
       return a;
   else
       return find(parent[a]);

}

void Union(int a,int b)
{
   a=find(a);
   b=find(b);
   if(a!=b)
   {
       parent[b]=a;
   }
}

int main() {
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        make(x);
    }

    cout<<find(2);
    Union(1,2);
    cout<<"\n"<<find(2);
    Union(3,4);

    cout<<"\n"<<find(4);
    Union(2,4);

    cout<<"\n"<<find(3);





    return 0;
}
