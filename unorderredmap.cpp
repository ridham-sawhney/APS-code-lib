#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int> i,pair<char,int> j)
{
    return i.second>j.second;
}


int main()
{
    string s="hhhhhhhiidddd";
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
    m[s[i]]++;

    // for(auto it:m)
    // cout<<it.first<<" "<<it.second<<endl;

   pair<char,int> p=*min_element(m.begin(),m.end(),comp);

   cout<<p.first<<" "<<p.second;
}