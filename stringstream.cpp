#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s="24 3 4 9 10";
    stringstream ss(s);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string>v(begin,end);
    int ans=0;
    for(int i=v.size()-1;i>=0;i--)
    ans=ans+stoi(v[i]);
    cout<<ans;

    return 0;
}
