#include<bits/stdc++.h>
using namespace std;
int minsum=INT_MAX;
void subarr(vector<int> v,int start,int end,int k,vector<int>&ans)
{
    
    if(end==v.size())
    return ;

    else if(start>end)
    subarr(v,0,end+1,k,ans);

    else{
        int tsum=0;
        if(abs(end-start+1)==k){
        for(int i=start;i<=end;i++)
        {
             tsum=tsum+v[i];
            
        }
        if(tsum<minsum){
            minsum=min(tsum,minsum);
        for(int i=start;i<=end;i++)
        {
             ans.push_back(v[i]);
        }}
        }
       // cout<<endl;
        subarr(v,start+1,end,k,ans);
    }
    return;
}
int* subarray(int * arr,int n ,int k)
{
    vector<int> v(arr,arr+n);
    vector<int> ans;
    subarr(v,0,0,k,ans);
    int* a = new int[3];
    vector<int>::iterator it;
    int ii=0;
    for( it=ans.begin()+(ans.size()-k);it<ans.end();it++)
    {
     a[ii++]=*it;
    }
  
    return a;

   
   
}

int main()
{
    
    int n=6;
    int arr[]={25,11,12,21,25,11};
    int k=2;

    int *o=subarray(arr,n,k);

   for(int i=0;i<k;i++)
   {
    cout<<*(o+i)<<" ";
   }
    
    return 0;
}
