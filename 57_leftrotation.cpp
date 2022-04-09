#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long int n,r;
    vector<long int>a;
    cin>>n>>r;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=r;i<n;i++)
    {
        a.push_back(b[i]);
    }
    for(int i=0;i<r;i++)
    {
        a.push_back(b[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
