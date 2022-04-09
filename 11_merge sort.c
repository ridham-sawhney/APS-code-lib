/*#include<stdio.h>
#include<stdlib.h>
void mergesort(int [],int ,int);
void merge(int [],int ,int ,int);

int main()
{
    int n ,a[100];
    printf("enter no of elements you want to enter:");
    scanf("%d",&n);
   printf("enter elements you want to enter:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    mergesort(a,0,n-1);

   for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }



}

void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {

        int mid=(ub+lb)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}



void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,n=lb,j=mid+1;
    int b[100];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[n]=a[i];
            i++;
        }
        else
        {
            b[n]=a[j];
            j++;
        }
        n++;

    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[n]=a[j];
            j++;
            n++;
        }
    }

    else
        {
        while(i<=mid)
        {
            b[n]=a[i];
            i++;
            n++;

        }
        }
        for(int q=lb;q<n;q++)
        {
            a[q]=b[q];
        }
}
*/
#include <stdio.h>

// Function to find inversion count of a given array
int findInversionCount(int arr[], int n)
{
    int inversionCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                inversionCount++;
            }
        }
    }
    return inversionCount;
}

int main()
{
    int arr[] = { 16,24,2,12,22,16,21,7,15,15,3 };
    int N = sizeof(arr)/sizeof(arr[0]);

    printf("The inversion count is %d", findInversionCount(arr, N));

    return 0;
}
