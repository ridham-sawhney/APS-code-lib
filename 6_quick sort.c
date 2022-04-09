#include<stdio.h>
#include<stdlib.h>
void quick(int [],int ,int);
int partition(int [],int ,int );

int main()
{
    int n ,a[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    quicksort(a,0,n-1);

   for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }



}
void quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}




int partition(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
            {
                start++;
            }
        while(a[end]>pivot)
        {
         end--;
        }

            if(start<end)
            {
                int x=a[start];
                a[start]=a[end];
                a[end]=x;
            }
    }
                int x=a[lb];
                a[lb]=a[end];
                a[end]=x;
                return end;
}
