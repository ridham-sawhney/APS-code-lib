#include<bits/stdc++.h>
using namespace std;


// int location(int a[],int lb,int ub)
// {
//     int pivot=a[lb];
//     int cnt=0;
//     for(int i=lb+1;i<=ub;i++)
//     {
//         if(a[i]<=pivot)
//         cnt++;
//     }
//     int pivotindex=lb+cnt;

//     swap(a[lb],a[pivotindex]);
//     int s=lb;
//     int e=ub;
//     while(s<pivotindex && e>pivotindex)
//     {
//         while(a[s]<=pivot)
//         s++;
//         while(a[e]>pivot)
//         e--;

//         if(s<pivotindex && e>pivotindex)
//         swap(a[s++],a[e--]);
        
//     }
//     return pivotindex;
// }

// void qsort(int a[],int lb ,int ub)
// {
//     if(lb<ub)
//     {
//         int loc=location(a,lb,ub);
//         qsort(a,lb,loc-1);
//         qsort(a,loc+1,ub);
//     }
// }

void merges(int a[],int lb,int  mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[100];
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
          b[k]=a[i];
          i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
       k++;
    }

     if(i<=mid)
     {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;k++;
        }
     }
if(j<=ub)
     {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;k++;
        }
     }
    for(int i=lb;i<=ub;i++)
        a[i]=b[i];
}
void msort(int a[],int lb ,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        msort(a,lb,mid);
        msort(a,mid+1,ub);
        merges(a,lb,mid,ub);
    }
}

int main()
{
    int a[]={15,2,6,4,54,24,23};

    int n=7;
    //bubble
    // for(int i=0;i<n;i++)
    // {
    //     int flag=0;
    //     for(int j=0;j<n-i;j++)
    //     {
    //         if(a[j]>a[j+1])
    //         {
    //             swap(a[j],a[j+1]);
    //             flag=1;
    //         }
    //     }
    //     if(flag==0)
    //     break;
    // }

    //selection
    // for(int i=0;i<n-1;i++)
    // {
    //     int minindex=i;
    //     for(int  j=i+1;j<n;j++)
    //     {
    //         if(a[j]<a[minindex])
    //         minindex=j;
    //     }
    //     if(i!=minindex)
    //     swap(a[i],a[minindex]);

    // }

    // insertion
    
    // for(int i=1;i<n;i++)
    // {
    //     int pivot=a[i];
    //     int j=i-1;
    //     while(j>=0 && a[j]>pivot)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //     }
    //     swap(a[j+1],pivot);
    // }
    
    msort(a,0,n-1);
    for(auto it:a)
    {
        cout<<it<<" ";
    }
}