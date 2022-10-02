#include<bits/stdc++.h>
using namespace std;


void solve(string digits,int index,vector<string>&ans,string output,string mapping[] ){

    if(index>=digits.length())
    {
      ans.push_back(output);
      return ;
    }

    int number=digits[index] - '0';
    string num_string=mapping[number];

    for(int i=0;i<num_string.length();i++)
    {
        output.push_back(num_string[i]);
        solve(digits,index+1,ans,output,mapping);
        output.pop_back();
       
    }
}

int main()
{
    string digits="23";

    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string >ans;
    string output="";
   int index=0;
   solve (digits,index,ans,output,mapping);


    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<"\n";
}
