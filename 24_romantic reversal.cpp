#include <bits/stdc++.h>
using namespace std;
void test()
{
    int count;
    cin>>count;
    while(count--)
    {
       string s;
       string temps = "";
       int x,k;
   
    cin>>x>>k;
    cin>>s;
     int st=0,e = k-1;
     int tp = 0;
     
     while(tp<k){
         if(tp%2==0)
         {
             temps += s[st];
             st++;
         }
         else
         {
             temps += s[e];
             e--;
         }
         tp++;
     }
    reverse(temps.begin(), temps.end());
    cout<<temps;
    for(int i=k;i<x;i++){
        cout<<s[i];
    }
     cout<<"\n";
    }
}
int main()
{
    test();

    return 0;
}