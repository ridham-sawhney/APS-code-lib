#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long int

int countbits(int a , int b)
{
    int n=a^b;
    int count=0;
    while(n>0)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}

int32_t main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>v;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+countbits(v[i],0);   
    
    cout<<sum;
    return 0;
}