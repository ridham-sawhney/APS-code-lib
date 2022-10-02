#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v,int f)
{
   // cout<< "hello";
    int low=0;
    int high=v.size()-1;

    int mid=low + (low+high)/2;
    while(low<=high)
    {
        if(v[mid]==f)
        return mid;

        if(v[mid]<f)
        low=mid+1;

        if(v[mid]>f)
        high=mid-1;

        mid=(low+high)/2;

    }
    
    return -1;
   
}


int binarysearch2d(vector<vector<int>> v,int f)
{
    int low=0;
    int high=v.size()*v.size();
    int mid=(low+high)/2;
    int n=v.size();

    while(low<=high)
    {
        if(v[mid/n][mid%n]==f)
        return mid;

        if(v[mid/n][mid%n]<f)
        low=mid+1;
        else
        high=mid-1;

        mid=(low+high)/2;
    }
    return -1;
}


int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(22);
    vector<vector<int>> vec{{1,2,3},{4,5,6},{7,8,9}};

    cout<< binarysearch2d(vec,10);

    //cout<< binarysearch(v,6);

}
