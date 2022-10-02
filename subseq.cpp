#include<bits/stdc++.h>
using namespace std;

// void subseq(int arr[],int index,vector<int>&v,int n)
// {
//     if(index==n)
//     {
//         if(v.size()==0)
//         cout<<"{}"<<endl;
//         for(auto it: v)
//         {
//             cout<<it<<" ";
//         }
//         cout<<endl;
        
//         return;

//     }
//     v.push_back(arr[index]);
//     subseq(arr,index+1,v,n);
//     v.pop_back();
//      subseq(arr,index+1,v,n);

// }



void subseq(int a[],int index,vector<int>&v,int n)
{
    if(index==n)
    {
        for(auto it:v)
        cout<<it<<" ";
        cout<<endl;
        return ;

    }
    v.push_back(a[index]);
    subseq(a,index+1,v,n);
    v.pop_back();
    subseq(a,index+1,v,n);

}


int main()
{
    int arr[]={1,2,3};
    int n=3;
    vector<int>v;

    subseq(arr,0,v,n);


    return 0;
}